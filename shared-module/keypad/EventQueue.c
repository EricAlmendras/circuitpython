/*
 * This file is part of the Micro Python project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2021 Dan Halbert for Adafruit Industries
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include "shared-bindings/keypad/Event.h"
#include "shared-module/keypad/EventQueue.h"

// Top bit of 16-bit event indicates pressed or released. Rest is key_num.
#define EVENT_PRESSED (1 << 15)
#define EVENT_RELEASED (0)
#define EVENT_KEY_NUM_MASK (~EVENT_PRESSED)

void common_hal_keypad_eventqueue_construct(keypad_eventqueue_obj_t *self, size_t max_events) {
    // Event queue is 16-bit values.
    ringbuf_alloc(&self->encoded_events, max_events * 2, false);
}

mp_obj_t common_hal_keypad_eventqueue_next(keypad_eventqueue_obj_t *self) {
    int encoded_event = ringbuf_get16(&self->encoded_events);
    if (encoded_event == -1) {
        return MP_ROM_NONE;
    }

    keypad_event_obj_t *event = m_new_obj(keypad_event_obj_t);
    event->base.type = &keypad_event_type;
    common_hal_keypad_event_construct(event, encoded_event & EVENT_KEY_NUM_MASK, encoded_event & EVENT_PRESSED);
    return MP_OBJ_FROM_PTR(event);
}

bool common_hal_keypad_eventqueue_store_next(keypad_eventqueue_obj_t *self, keypad_event_obj_t *event) {
    int encoded_event = ringbuf_get16(&self->encoded_events);
    if (encoded_event == -1) {
        return false;
    }

    // "Construct" using the existing event.
    common_hal_keypad_event_construct(event, encoded_event & EVENT_KEY_NUM_MASK, encoded_event & EVENT_PRESSED);
    return true;
}




void common_hal_keypad_eventqueue_clear(keypad_eventqueue_obj_t *self) {
    ringbuf_clear(&self->encoded_events);
}

size_t common_hal_keypad_eventqueue_get_length(keypad_eventqueue_obj_t *self) {
    return ringbuf_num_filled(&self->encoded_events);
}

void keypad_eventqueue_record(keypad_eventqueue_obj_t *self, mp_uint_t key_num, bool pressed) {
    if (ringbuf_num_empty(&self->encoded_events) == 0) {
        // Discard oldest if full.
        ringbuf_get16(&self->encoded_events);
    }
    ringbuf_put16(&self->encoded_events, key_num | (pressed ? EVENT_PRESSED : EVENT_RELEASED));
}
