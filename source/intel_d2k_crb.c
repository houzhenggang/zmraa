/*
 * Copyright (c) 2016 Intel Corporation.
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
 * LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
 * OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
 * WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

/* From drivers/pinmux/quark_mcu/pinmux_board_quark_d2000.c
 * This is the full pinmap that we have available on the board for configuration
 * including the ball position and the various modes that can be set.  In the
 * _pinmux_defaults we do not spend any time setting values that are using mode
 * A as the hardware brings up all devices by default in mode A.
 */

/***************************
 * PINMUX mapping
 *
 * The following lines detail the possible options for the pinmux and their
 * associated pins and ball points.
 * This is the full pinmap that we have available on the board for configuration
 * including the ball position and the various modes that can be set.  In the
 * _pinmux_defaults we do not spend any time setting values that are using mode
 * A as the hardware brings up all devices by default in mode A.
 */
        /* pin, ball, mode A, mode B,      mode C       */
        /*  0   F00, gpio_0,  ai_0,        spi_m_ss0    */
        /*  1   F01, gpio_1,  ai_1,        spi_m_ss1    */
        /*  2   F02, gpio_2,  ai_2,        spi_m_ss2    */
        /*  3   F03, gpio_3,  ai_3,        spi_m_ss3    */
        /*  4   F04, gpio_4,  ai_4,        rtc_clk_out  */
        /*  5   F05, gpio_5,  ai_5,        sys_clk_out  */
        /*  6   F06, gpio_6,  ai_6,        i2c_scl      */
        /*  7   F07, gpio_7,  ai_7,        i2c_sda      */
        /*  8   F08, gpio_8,  ai_8,        spi_s_sclk   */
        /*  9   F09, gpio_9,  ai_9,        spi_s_sdin   */
        /* 10   F10, gpio_10, ai_10,       spi_s_sdout  */
        /* 11   F11, gpio_11, ai_11,       spi_s_scs    */
        /* 12   F12, gpio_12, ai_12,       uart_a_txd   */
        /* 13   F13, gpio_13, ai_13,       uart_a_rxd   */
        /* 14   F14, gpio_14, ai_14,       uart_a_rts   */
        /* 15   F15, gpio_15, ai_15,       uart_a_cts   */
        /* 16   F16, gpio_16, ai_16,       spi_m_sclk   */
        /* 17   F17, gpio_17, ai_17,       spi_m_mosi   */
        /* 18   F18, gpio_18, ai_18,       spi_m_miso   */
        /* 19   F19, tdo,     gpio_19,     pwm0         */
        /* 20   F20, trst_n,  gpio_20,     uart_b_txd   */
        /* 21   F21, tck,     gpio_21,     uart_b_rxd   */
        /* 22   F22, tms,     gpio_22,     uart_b_rts   */
        /* 23   F23, tdi,     gpio_23,     uart_b_cts   */
        /* 24   F24, gpio_24, lpd_sig_out, pwm1         */

/******** End PINMUX mapping **************************/

#include "mraa_internal.h"

static mraa_board_t _board;

mraa_board_t* mraa_intel_d2k_crb()
{
    mraa_board_t* b = &_board;
    mraa_set_board_config(b);
    b->platform_name = "Intel D2000 CRB";
    b->platform_type = MRAA_INTEL_D2000_CRB;
    mraa_set_pininfo(b,  0,  0, "IO0",  (mraa_pincapabilities_t){ 1, 1, 0, 0, 0, 0, 0, 0 });
    mraa_set_pininfo(b,  1,  3, "IO1",  (mraa_pincapabilities_t){ 1, 1, 0, 0, 0, 0, 0, 0 });
    mraa_set_pininfo(b,  2, 18, "IO2",  (mraa_pincapabilities_t){ 1, 1, 0, 0, 0, 0, 0, 0 });
    mraa_set_pininfo(b,  3, 17, "IO3",  (mraa_pincapabilities_t){ 1, 1, 0, 0, 0, 0, 0, 0 });
    mraa_set_pininfo(b,  4, 19, "IO4",  (mraa_pincapabilities_t){ 1, 1, 0, 0, 0, 0, 0, 0 });
    mraa_set_pininfo(b,  5, 15, "IO5",  (mraa_pincapabilities_t){ 1, 1, 0, 0, 0, 0, 0, 0 });
    mraa_set_pininfo(b,  6,  0, "IO6",  (mraa_pincapabilities_t){ 0, 0, 0, 0, 0, 0, 0, 0 });
    mraa_set_pininfo(b,  7, 20, "IO7",  (mraa_pincapabilities_t){ 1, 1, 0, 0, 0, 0, 0, 0 });
    mraa_set_pininfo(b,  8, 16, "IO8",  (mraa_pincapabilities_t){ 1, 1, 0, 0, 0, 0, 0, 0 });
    mraa_set_pininfo(b,  9, 16, "IO9",  (mraa_pincapabilities_t){ 1, 1, 0, 0, 0, 0, 0, 0 });
    mraa_set_pininfo(b, 10,  0, "IO10", (mraa_pincapabilities_t){ 1, 1, 0, 0, 0, 0, 0, 0 });
    mraa_set_pininfo(b, 11,  3, "IO11", (mraa_pincapabilities_t){ 1, 1, 0, 0, 0, 0, 0, 0 });
    mraa_set_pininfo(b, 12,  1, "IO12", (mraa_pincapabilities_t){ 1, 1, 0, 0, 0, 0, 0, 0 });
    mraa_set_pininfo(b, 13, 16, "IO13", (mraa_pincapabilities_t){ 1, 1, 0, 0, 0, 0, 0, 0 });
    mraa_set_pininfo(b, 14, 10, "A0  ", (mraa_pincapabilities_t){ 1, 1, 0, 0, 0, 0, 0, 0 });
    mraa_set_pininfo(b, 15, 11, "A1  ", (mraa_pincapabilities_t){ 1, 1, 0, 0, 0, 0, 0, 0 });
    mraa_set_pininfo(b, 16, 12, "A2  ", (mraa_pincapabilities_t){ 1, 1, 0, 0, 0, 0, 0, 0 });
    mraa_set_pininfo(b, 17, 13, "A3  ", (mraa_pincapabilities_t){ 1, 1, 0, 0, 0, 0, 0, 0 });
    mraa_set_pininfo(b, 18, 14, "A4  ", (mraa_pincapabilities_t){ 1, 1, 0, 0, 0, 1, 0, 0 });
    mraa_set_pininfo(b, 19,  9, "A5  ", (mraa_pincapabilities_t){ 1, 1, 0, 0, 0, 1, 0, 0 });
    b->def_i2c_bus = 0;
    b->i2c_bus[0].bus_id = 0;
    b->pins[18].i2c.mux_total = 0;
    b->pins[19].i2c.mux_total = 0;
    b->i2c_bus[0].sda = 18;
    b->i2c_bus[0].scl = 19;
    return b;
}
