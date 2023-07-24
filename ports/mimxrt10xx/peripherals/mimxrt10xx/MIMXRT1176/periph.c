/*
 * This file is part of the MicroPython project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2019 Lucian Copeland for Adafruit Industries
 * Copyright (c) 2019 Artur Pacholec
 * Copyright (c) 2023 Scott Shawcroft for Adafruit Industries
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

/*
 * This file is autogenerated! Do NOT hand edit it. Instead, edit tools/gen_peripherals_data.py and
 * then rerun the script. You'll need to 1) clone https://github.com/nxp-mcuxpresso/mcux-soc-svd/
 * and 2) download and extract config tools data from https://mcuxpresso.nxp.com/en/select_config_tools_data.
 *
 * Run `python tools/gen_peripherals_data.py <svd dir> <config dir> MIMXRT1176` to update this file.
 */

#include "py/obj.h"
#include "py/mphal.h"
#include "mimxrt10xx/periph.h"

LPI2C_Type *const mcu_i2c_banks[6] = { LPI2C1, LPI2C2, LPI2C3, LPI2C4, LPI2C5, LPI2C6 };

const mcu_periph_obj_t mcu_i2c_sda_list[8] = {
    PERIPH_PIN(1, 1, 0, 0, &pin_GPIO_AD_09),
    PERIPH_PIN(1, 0, 0, 0, &pin_GPIO_AD_33),

    PERIPH_PIN(2, 9, 0, 0, &pin_GPIO_EMC_B2_01),
    PERIPH_PIN(2, 9, 0, 0, &pin_GPIO_AD_19),

    PERIPH_PIN(3, 2, 0, 0, &pin_GPIO_DISP_B1_03),
    PERIPH_PIN(3, 6, 0, 0, &pin_GPIO_DISP_B2_11),

    PERIPH_PIN(4, 9, 0, 0, &pin_GPIO_AD_25),
    PERIPH_PIN(4, 6, 0, 0, &pin_GPIO_DISP_B2_13),
};

const mcu_periph_obj_t mcu_i2c_scl_list[8] = {
    PERIPH_PIN(1, 1, 0, 0, &pin_GPIO_AD_08),
    PERIPH_PIN(1, 0, 0, 0, &pin_GPIO_AD_32),

    PERIPH_PIN(2, 9, 0, 0, &pin_GPIO_EMC_B2_00),
    PERIPH_PIN(2, 9, 0, 0, &pin_GPIO_AD_18),

    PERIPH_PIN(3, 2, 0, 0, &pin_GPIO_DISP_B1_02),
    PERIPH_PIN(3, 6, 0, 0, &pin_GPIO_DISP_B2_10),

    PERIPH_PIN(4, 9, 0, 0, &pin_GPIO_AD_24),
    PERIPH_PIN(4, 6, 0, 0, &pin_GPIO_DISP_B2_12),
};

LPSPI_Type *const mcu_spi_banks[6] = { LPSPI1, LPSPI2, LPSPI3, LPSPI4, LPSPI5, LPSPI6 };

const mcu_periph_obj_t mcu_spi_sck_list[8] = {
    PERIPH_PIN(1, 8, 0, 0, &pin_GPIO_EMC_B2_00),
    PERIPH_PIN(1, 0, 0, 0, &pin_GPIO_AD_28),

    PERIPH_PIN(2, 1, 0, 0, &pin_GPIO_AD_24),
    PERIPH_PIN(2, 6, 0, 0, &pin_GPIO_SD_B2_07),

    PERIPH_PIN(3, 8, 0, 0, &pin_GPIO_EMC_B2_04),
    PERIPH_PIN(3, 9, 0, 0, &pin_GPIO_DISP_B1_04),

    PERIPH_PIN(4, 4, 0, 0, &pin_GPIO_SD_B2_00),
    PERIPH_PIN(4, 9, 0, 0, &pin_GPIO_DISP_B2_12),
};

const mcu_periph_obj_t mcu_spi_sdo_list[0] = {
};

const mcu_periph_obj_t mcu_spi_sdi_list[0] = {
};

LPUART_Type *const mcu_uart_banks[12] = { LPUART1, LPUART2, LPUART3, LPUART4, LPUART5, LPUART6, LPUART7, LPUART8, LPUART9, LPUART10, LPUART11, LPUART12 };

const mcu_periph_obj_t mcu_uart_rx_list[15] = {
    PERIPH_PIN(1, 0, 0, 0, &pin_GPIO_AD_25),
    PERIPH_PIN(1, 9, 0, 0, &pin_GPIO_DISP_B1_03),
    PERIPH_PIN(1, 9, 0, 0, &pin_GPIO_DISP_B2_09),

    PERIPH_PIN(2, 2, 0, 0, &pin_GPIO_DISP_B2_11),

    PERIPH_PIN(3, 4, 0, 0, &pin_GPIO_AD_31),

    PERIPH_PIN(4, 2, 0, 0, &pin_GPIO_DISP_B1_04),

    PERIPH_PIN(5, 1, 0, 0, &pin_GPIO_AD_29),

    PERIPH_PIN(6, 3, 0, 0, &pin_GPIO_EMC_B1_41),

    PERIPH_PIN(7, 6, 0, 0, &pin_GPIO_AD_01),
    PERIPH_PIN(7, 2, 0, 0, &pin_GPIO_DISP_B2_07),

    PERIPH_PIN(8, 6, 0, 0, &pin_GPIO_AD_03),
    PERIPH_PIN(8, 2, 0, 0, &pin_GPIO_DISP_B2_09),

    PERIPH_PIN(9, 3, 0, 0, &pin_GPIO_SD_B2_01),

    PERIPH_PIN(10, 1, 0, 0, &pin_GPIO_AD_16),
    PERIPH_PIN(10, 8, 0, 0, &pin_GPIO_AD_33),
};

const mcu_periph_obj_t mcu_uart_tx_list[15] = {
    PERIPH_PIN(1, 0, 0, 0, &pin_GPIO_AD_24),
    PERIPH_PIN(1, 9, 0, 0, &pin_GPIO_DISP_B1_02),
    PERIPH_PIN(1, 9, 0, 0, &pin_GPIO_DISP_B2_08),

    PERIPH_PIN(2, 2, 0, 0, &pin_GPIO_DISP_B2_10),

    PERIPH_PIN(3, 4, 0, 0, &pin_GPIO_AD_30),

    PERIPH_PIN(4, 2, 0, 0, &pin_GPIO_DISP_B1_06),

    PERIPH_PIN(5, 1, 0, 0, &pin_GPIO_AD_28),

    PERIPH_PIN(6, 3, 0, 0, &pin_GPIO_EMC_B1_40),

    PERIPH_PIN(7, 6, 0, 0, &pin_GPIO_AD_00),
    PERIPH_PIN(7, 2, 0, 0, &pin_GPIO_DISP_B2_06),

    PERIPH_PIN(8, 6, 0, 0, &pin_GPIO_AD_02),
    PERIPH_PIN(8, 2, 0, 0, &pin_GPIO_DISP_B2_08),

    PERIPH_PIN(9, 3, 0, 0, &pin_GPIO_SD_B2_00),

    PERIPH_PIN(10, 1, 0, 0, &pin_GPIO_AD_15),
    PERIPH_PIN(10, 8, 0, 0, &pin_GPIO_AD_32),
};

const mcu_periph_obj_t mcu_uart_rts_list[10] = {
    PERIPH_PIN(1, 0, 0, 0, &pin_GPIO_AD_27),

    PERIPH_PIN(2, 3, 0, 0, &pin_GPIO_DISP_B2_13),

    PERIPH_PIN(3, 3, 0, 0, &pin_GPIO_SD_B2_08),

    PERIPH_PIN(4, 2, 0, 0, &pin_GPIO_DISP_B1_07),

    PERIPH_PIN(5, 3, 0, 0, &pin_GPIO_SD_B2_10),

    PERIPH_PIN(6, 3, 0, 0, &pin_GPIO_EMC_B2_01),

    PERIPH_PIN(7, 1, 0, 0, &pin_GPIO_AD_03),

    PERIPH_PIN(8, 1, 0, 0, &pin_GPIO_AD_05),

    PERIPH_PIN(9, 3, 0, 0, &pin_GPIO_SD_B2_03),

    PERIPH_PIN(10, 8, 0, 0, &pin_GPIO_AD_35),
};

const mcu_periph_obj_t mcu_uart_cts_list[10] = {
    PERIPH_PIN(1, 0, 0, 0, &pin_GPIO_AD_26),

    PERIPH_PIN(2, 3, 0, 0, &pin_GPIO_DISP_B2_12),

    PERIPH_PIN(3, 3, 0, 0, &pin_GPIO_SD_B2_07),

    PERIPH_PIN(4, 2, 0, 0, &pin_GPIO_DISP_B1_05),

    PERIPH_PIN(5, 3, 0, 0, &pin_GPIO_SD_B2_09),

    PERIPH_PIN(6, 3, 0, 0, &pin_GPIO_EMC_B2_00),

    PERIPH_PIN(7, 1, 0, 0, &pin_GPIO_AD_02),

    PERIPH_PIN(8, 1, 0, 0, &pin_GPIO_AD_04),

    PERIPH_PIN(9, 3, 0, 0, &pin_GPIO_SD_B2_02),

    PERIPH_PIN(10, 8, 0, 0, &pin_GPIO_AD_34),
};

I2S_Type *const mcu_i2s_banks[4] = { SAI1, SAI2, SAI3, SAI4 };

const mcu_periph_obj_t mcu_i2s_rx_data0_list[4] = {
    PERIPH_PIN(1, 0, 0, 0, &pin_GPIO_AD_20),
    PERIPH_PIN(1, 4, 0, 0, &pin_GPIO_DISP_B2_06),

    PERIPH_PIN(2, 2, 0, 0, &pin_GPIO_EMC_B2_07),

    PERIPH_PIN(3, 3, 0, 0, &pin_GPIO_EMC_B2_13),
};

const mcu_periph_obj_t mcu_i2s_rx_sync_list[4] = {
    PERIPH_PIN(1, 0, 0, 0, &pin_GPIO_AD_18),
    PERIPH_PIN(1, 4, 0, 0, &pin_GPIO_DISP_B2_04),

    PERIPH_PIN(2, 2, 0, 0, &pin_GPIO_EMC_B2_05),

    PERIPH_PIN(3, 3, 0, 0, &pin_GPIO_EMC_B2_11),
};

const mcu_periph_obj_t mcu_i2s_tx_bclk_list[4] = {
    PERIPH_PIN(1, 0, 0, 0, &pin_GPIO_AD_22),
    PERIPH_PIN(1, 4, 0, 0, &pin_GPIO_DISP_B2_08),

    PERIPH_PIN(2, 2, 0, 0, &pin_GPIO_EMC_B2_09),

    PERIPH_PIN(3, 3, 0, 0, &pin_GPIO_EMC_B2_15),
};

const mcu_periph_obj_t mcu_i2s_tx_data0_list[4] = {
    PERIPH_PIN(1, 0, 0, 0, &pin_GPIO_AD_21),
    PERIPH_PIN(1, 4, 0, 0, &pin_GPIO_DISP_B2_07),

    PERIPH_PIN(2, 2, 0, 0, &pin_GPIO_EMC_B2_08),

    PERIPH_PIN(3, 3, 0, 0, &pin_GPIO_EMC_B2_14),
};

const mcu_periph_obj_t mcu_i2s_tx_sync_list[4] = {
    PERIPH_PIN(1, 0, 0, 0, &pin_GPIO_AD_23),
    PERIPH_PIN(1, 4, 0, 0, &pin_GPIO_DISP_B2_09),

    PERIPH_PIN(2, 2, 0, 0, &pin_GPIO_EMC_B2_10),

    PERIPH_PIN(3, 3, 0, 0, &pin_GPIO_EMC_B2_16),
};

const mcu_periph_obj_t mcu_mqs_left_list[2] = {
    PERIPH_PIN(3, 2, 0, 0, &pin_GPIO_EMC_B1_41),
    PERIPH_PIN(3, 2, 0, 0, &pin_GPIO_DISP_B2_01),
};

const mcu_periph_obj_t mcu_mqs_right_list[2] = {
    PERIPH_PIN(3, 2, 0, 0, &pin_GPIO_EMC_B1_40),
    PERIPH_PIN(3, 2, 0, 0, &pin_GPIO_DISP_B2_00),
};

const mcu_pwm_obj_t mcu_pwm_list[68] = {
    PWM_PIN(PWM1, kPWM_Module_0, kPWM_PwmA, IOMUXC_GPIO_EMC_B1_23_FLEXPWM1_PWM0_A, &pin_GPIO_EMC_B1_23),
    PWM_PIN(PWM1, kPWM_Module_0, kPWM_PwmA, IOMUXC_GPIO_AD_00_FLEXPWM1_PWM0_A, &pin_GPIO_AD_00),

    PWM_PIN(PWM1, kPWM_Module_0, kPWM_PwmB, IOMUXC_GPIO_EMC_B1_24_FLEXPWM1_PWM0_B, &pin_GPIO_EMC_B1_24),
    PWM_PIN(PWM1, kPWM_Module_0, kPWM_PwmB, IOMUXC_GPIO_AD_01_FLEXPWM1_PWM0_B, &pin_GPIO_AD_01),

    PWM_PIN(PWM1, kPWM_Module_0, kPWM_PwmX, IOMUXC_GPIO_AD_06_FLEXPWM1_PWM0_X, &pin_GPIO_AD_06),

    PWM_PIN(PWM1, kPWM_Module_1, kPWM_PwmA, IOMUXC_GPIO_EMC_B1_25_FLEXPWM1_PWM1_A, &pin_GPIO_EMC_B1_25),
    PWM_PIN(PWM1, kPWM_Module_1, kPWM_PwmA, IOMUXC_GPIO_AD_02_FLEXPWM1_PWM1_A, &pin_GPIO_AD_02),

    PWM_PIN(PWM1, kPWM_Module_1, kPWM_PwmB, IOMUXC_GPIO_EMC_B1_26_FLEXPWM1_PWM1_B, &pin_GPIO_EMC_B1_26),
    PWM_PIN(PWM1, kPWM_Module_1, kPWM_PwmB, IOMUXC_GPIO_AD_03_FLEXPWM1_PWM1_B, &pin_GPIO_AD_03),

    PWM_PIN(PWM1, kPWM_Module_1, kPWM_PwmX, IOMUXC_GPIO_AD_07_FLEXPWM1_PWM1_X, &pin_GPIO_AD_07),

    PWM_PIN(PWM1, kPWM_Module_2, kPWM_PwmA, IOMUXC_GPIO_EMC_B1_27_FLEXPWM1_PWM2_A, &pin_GPIO_EMC_B1_27),
    PWM_PIN(PWM1, kPWM_Module_2, kPWM_PwmA, IOMUXC_GPIO_AD_04_FLEXPWM1_PWM2_A, &pin_GPIO_AD_04),

    PWM_PIN(PWM1, kPWM_Module_2, kPWM_PwmB, IOMUXC_GPIO_EMC_B1_28_FLEXPWM1_PWM2_B, &pin_GPIO_EMC_B1_28),
    PWM_PIN(PWM1, kPWM_Module_2, kPWM_PwmB, IOMUXC_GPIO_AD_05_FLEXPWM1_PWM2_B, &pin_GPIO_AD_05),

    PWM_PIN(PWM1, kPWM_Module_2, kPWM_PwmX, IOMUXC_GPIO_AD_08_FLEXPWM1_PWM2_X, &pin_GPIO_AD_08),

    PWM_PIN(PWM1, kPWM_Module_3, kPWM_PwmA, IOMUXC_GPIO_EMC_B1_38_FLEXPWM1_PWM3_A, &pin_GPIO_EMC_B1_38),

    PWM_PIN(PWM1, kPWM_Module_3, kPWM_PwmB, IOMUXC_GPIO_EMC_B1_39_FLEXPWM1_PWM3_B, &pin_GPIO_EMC_B1_39),

    PWM_PIN(PWM1, kPWM_Module_3, kPWM_PwmX, IOMUXC_GPIO_AD_09_FLEXPWM1_PWM3_X, &pin_GPIO_AD_09),

    PWM_PIN(PWM2, kPWM_Module_0, kPWM_PwmA, IOMUXC_GPIO_EMC_B1_06_FLEXPWM2_PWM0_A, &pin_GPIO_EMC_B1_06),
    PWM_PIN(PWM2, kPWM_Module_0, kPWM_PwmA, IOMUXC_GPIO_AD_24_FLEXPWM2_PWM0_A, &pin_GPIO_AD_24),

    PWM_PIN(PWM2, kPWM_Module_0, kPWM_PwmB, IOMUXC_GPIO_EMC_B1_07_FLEXPWM2_PWM0_B, &pin_GPIO_EMC_B1_07),
    PWM_PIN(PWM2, kPWM_Module_0, kPWM_PwmB, IOMUXC_GPIO_AD_25_FLEXPWM2_PWM0_B, &pin_GPIO_AD_25),

    PWM_PIN(PWM2, kPWM_Module_0, kPWM_PwmX, IOMUXC_GPIO_AD_10_FLEXPWM2_PWM0_X, &pin_GPIO_AD_10),

    PWM_PIN(PWM2, kPWM_Module_1, kPWM_PwmA, IOMUXC_GPIO_EMC_B1_08_FLEXPWM2_PWM1_A, &pin_GPIO_EMC_B1_08),
    PWM_PIN(PWM2, kPWM_Module_1, kPWM_PwmA, IOMUXC_GPIO_AD_26_FLEXPWM2_PWM1_A, &pin_GPIO_AD_26),

    PWM_PIN(PWM2, kPWM_Module_1, kPWM_PwmB, IOMUXC_GPIO_EMC_B1_09_FLEXPWM2_PWM1_B, &pin_GPIO_EMC_B1_09),
    PWM_PIN(PWM2, kPWM_Module_1, kPWM_PwmB, IOMUXC_GPIO_AD_27_FLEXPWM2_PWM1_B, &pin_GPIO_AD_27),

    PWM_PIN(PWM2, kPWM_Module_1, kPWM_PwmX, IOMUXC_GPIO_AD_11_FLEXPWM2_PWM1_X, &pin_GPIO_AD_11),

    PWM_PIN(PWM2, kPWM_Module_2, kPWM_PwmA, IOMUXC_GPIO_EMC_B1_10_FLEXPWM2_PWM2_A, &pin_GPIO_EMC_B1_10),
    PWM_PIN(PWM2, kPWM_Module_2, kPWM_PwmA, IOMUXC_GPIO_AD_28_FLEXPWM2_PWM2_A, &pin_GPIO_AD_28),

    PWM_PIN(PWM2, kPWM_Module_2, kPWM_PwmB, IOMUXC_GPIO_EMC_B1_11_FLEXPWM2_PWM2_B, &pin_GPIO_EMC_B1_11),
    PWM_PIN(PWM2, kPWM_Module_2, kPWM_PwmB, IOMUXC_GPIO_AD_29_FLEXPWM2_PWM2_B, &pin_GPIO_AD_29),

    PWM_PIN(PWM2, kPWM_Module_2, kPWM_PwmX, IOMUXC_GPIO_AD_12_FLEXPWM2_PWM2_X, &pin_GPIO_AD_12),

    PWM_PIN(PWM2, kPWM_Module_3, kPWM_PwmA, IOMUXC_GPIO_EMC_B1_19_FLEXPWM2_PWM3_A, &pin_GPIO_EMC_B1_19),

    PWM_PIN(PWM2, kPWM_Module_3, kPWM_PwmB, IOMUXC_GPIO_EMC_B1_20_FLEXPWM2_PWM3_B, &pin_GPIO_EMC_B1_20),

    PWM_PIN(PWM2, kPWM_Module_3, kPWM_PwmX, IOMUXC_GPIO_AD_13_FLEXPWM2_PWM3_X, &pin_GPIO_AD_13),

    PWM_PIN(PWM3, kPWM_Module_0, kPWM_PwmA, IOMUXC_GPIO_EMC_B1_29_FLEXPWM3_PWM0_A, &pin_GPIO_EMC_B1_29),
    PWM_PIN(PWM3, kPWM_Module_0, kPWM_PwmA, IOMUXC_GPIO_EMC_B2_00_FLEXPWM3_PWM0_A, &pin_GPIO_EMC_B2_00),

    PWM_PIN(PWM3, kPWM_Module_0, kPWM_PwmB, IOMUXC_GPIO_EMC_B1_30_FLEXPWM3_PWM0_B, &pin_GPIO_EMC_B1_30),
    PWM_PIN(PWM3, kPWM_Module_0, kPWM_PwmB, IOMUXC_GPIO_EMC_B2_01_FLEXPWM3_PWM0_B, &pin_GPIO_EMC_B2_01),

    PWM_PIN(PWM3, kPWM_Module_0, kPWM_PwmX, IOMUXC_GPIO_AD_14_FLEXPWM3_PWM0_X, &pin_GPIO_AD_14),

    PWM_PIN(PWM3, kPWM_Module_1, kPWM_PwmA, IOMUXC_GPIO_EMC_B1_31_FLEXPWM3_PWM1_A, &pin_GPIO_EMC_B1_31),
    PWM_PIN(PWM3, kPWM_Module_1, kPWM_PwmA, IOMUXC_GPIO_EMC_B2_02_FLEXPWM3_PWM1_A, &pin_GPIO_EMC_B2_02),

    PWM_PIN(PWM3, kPWM_Module_1, kPWM_PwmB, IOMUXC_GPIO_EMC_B1_32_FLEXPWM3_PWM1_B, &pin_GPIO_EMC_B1_32),
    PWM_PIN(PWM3, kPWM_Module_1, kPWM_PwmB, IOMUXC_GPIO_EMC_B2_03_FLEXPWM3_PWM1_B, &pin_GPIO_EMC_B2_03),

    PWM_PIN(PWM3, kPWM_Module_1, kPWM_PwmX, IOMUXC_GPIO_AD_15_FLEXPWM3_PWM1_X, &pin_GPIO_AD_15),

    PWM_PIN(PWM3, kPWM_Module_2, kPWM_PwmA, IOMUXC_GPIO_EMC_B1_33_FLEXPWM3_PWM2_A, &pin_GPIO_EMC_B1_33),
    PWM_PIN(PWM3, kPWM_Module_2, kPWM_PwmA, IOMUXC_GPIO_EMC_B2_04_FLEXPWM3_PWM2_A, &pin_GPIO_EMC_B2_04),

    PWM_PIN(PWM3, kPWM_Module_2, kPWM_PwmB, IOMUXC_GPIO_EMC_B1_34_FLEXPWM3_PWM2_B, &pin_GPIO_EMC_B1_34),
    PWM_PIN(PWM3, kPWM_Module_2, kPWM_PwmB, IOMUXC_GPIO_EMC_B2_05_FLEXPWM3_PWM2_B, &pin_GPIO_EMC_B2_05),

    PWM_PIN(PWM3, kPWM_Module_2, kPWM_PwmX, IOMUXC_GPIO_AD_16_FLEXPWM3_PWM2_X, &pin_GPIO_AD_16),

    PWM_PIN(PWM3, kPWM_Module_3, kPWM_PwmA, IOMUXC_GPIO_EMC_B1_21_FLEXPWM3_PWM3_A, &pin_GPIO_EMC_B1_21),
    PWM_PIN(PWM3, kPWM_Module_3, kPWM_PwmA, IOMUXC_GPIO_EMC_B2_06_FLEXPWM3_PWM3_A, &pin_GPIO_EMC_B2_06),

    PWM_PIN(PWM3, kPWM_Module_3, kPWM_PwmB, IOMUXC_GPIO_EMC_B1_22_FLEXPWM3_PWM3_B, &pin_GPIO_EMC_B1_22),
    PWM_PIN(PWM3, kPWM_Module_3, kPWM_PwmB, IOMUXC_GPIO_EMC_B2_07_FLEXPWM3_PWM3_B, &pin_GPIO_EMC_B2_07),

    PWM_PIN(PWM3, kPWM_Module_3, kPWM_PwmX, IOMUXC_GPIO_AD_17_FLEXPWM3_PWM3_X, &pin_GPIO_AD_17),

    PWM_PIN(PWM4, kPWM_Module_0, kPWM_PwmA, IOMUXC_GPIO_EMC_B1_00_FLEXPWM4_PWM0_A, &pin_GPIO_EMC_B1_00),

    PWM_PIN(PWM4, kPWM_Module_0, kPWM_PwmB, IOMUXC_GPIO_EMC_B1_01_FLEXPWM4_PWM0_B, &pin_GPIO_EMC_B1_01),

    PWM_PIN(PWM4, kPWM_Module_0, kPWM_PwmX, IOMUXC_GPIO_AD_18_FLEXPWM4_PWM0_X, &pin_GPIO_AD_18),

    PWM_PIN(PWM4, kPWM_Module_1, kPWM_PwmA, IOMUXC_GPIO_EMC_B1_02_FLEXPWM4_PWM1_A, &pin_GPIO_EMC_B1_02),

    PWM_PIN(PWM4, kPWM_Module_1, kPWM_PwmB, IOMUXC_GPIO_EMC_B1_03_FLEXPWM4_PWM1_B, &pin_GPIO_EMC_B1_03),

    PWM_PIN(PWM4, kPWM_Module_1, kPWM_PwmX, IOMUXC_GPIO_AD_19_FLEXPWM4_PWM1_X, &pin_GPIO_AD_19),

    PWM_PIN(PWM4, kPWM_Module_2, kPWM_PwmA, IOMUXC_GPIO_EMC_B1_04_FLEXPWM4_PWM2_A, &pin_GPIO_EMC_B1_04),

    PWM_PIN(PWM4, kPWM_Module_2, kPWM_PwmB, IOMUXC_GPIO_EMC_B1_05_FLEXPWM4_PWM2_B, &pin_GPIO_EMC_B1_05),

    PWM_PIN(PWM4, kPWM_Module_2, kPWM_PwmX, IOMUXC_GPIO_AD_20_FLEXPWM4_PWM2_X, &pin_GPIO_AD_20),

    PWM_PIN(PWM4, kPWM_Module_3, kPWM_PwmA, IOMUXC_GPIO_EMC_B1_17_FLEXPWM4_PWM3_A, &pin_GPIO_EMC_B1_17),

    PWM_PIN(PWM4, kPWM_Module_3, kPWM_PwmB, IOMUXC_GPIO_EMC_B1_18_FLEXPWM4_PWM3_B, &pin_GPIO_EMC_B1_18),

    PWM_PIN(PWM4, kPWM_Module_3, kPWM_PwmX, IOMUXC_GPIO_AD_21_FLEXPWM4_PWM3_X, &pin_GPIO_AD_21),
};