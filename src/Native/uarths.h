/* Copyright 2018 Canaan Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/**
 * @file
 * @brief       Universal Asynchronous I2S_RECEIVER/I2S_TRANSMITTER (UART)
 *
 *              The UART peripheral supports the following features:
 *
 *              - 8-N-1 and 8-N-2 formats: 8 data bits, no parity bit, 1 start
 *                bit, 1 or 2 stop bits
 *
 *               - 8-entry transmit and receive FIFO buffers with programmable
 *                watermark interrupts
 *
 *              - 16× Rx oversampling with 2/3 majority voting per bit
 *
 *              The UART peripheral does not support hardware flow control or
 *              other modem control signals, or synchronous serial data
 *              tranfesrs.
 *
 * @note        UART RAM Layout
 *
 * | Address   | Name     | Description                     |
 * |-----------|----------|---------------------------------|
 * | 0x000     | txdata   | Transmit data register          |
 * | 0x004     | rxdata   | Receive data register           |
 * | 0x008     | txctrl   | Transmit control register       |
 * | 0x00C     | rxctrl   | Receive control register        |
 * | 0x010     | ie       | UART interrupt enable           |
 * | 0x014     | ip       | UART Interrupt pending          |
 * | 0x018     | div      | Baud rate divisor               |
 *
 */

#ifndef _DRIVER_UARTHS_H
#define _DRIVER_UARTHS_H

#include <platform.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* clang-format off */
/* Register address offsets */
#define UARTHS_REG_TXFIFO (0x00)
#define UARTHS_REG_RXFIFO (0x04)
#define UARTHS_REG_TXCTRL (0x08)
#define UARTHS_REG_RXCTRL (0x0c)
#define UARTHS_REG_IE     (0x10)
#define UARTHS_REG_IP     (0x14)
#define UARTHS_REG_DIV    (0x18)

/* TXCTRL register */
#define UARTHS_TXEN       (0x01)
#define UARTHS_TXWM(x)    (((x) & 0xffff) << 16)

/* RXCTRL register */
#define UARTHS_RXEN       (0x01)
#define UARTHS_RXWM(x)    (((x) & 0xffff) << 16)

/* IP register */
#define UARTHS_IP_TXWM    (0x01)
#define UARTHS_IP_RXWM    (0x02)
    /* clang-format on */

    typedef struct _uarths_txdata
    {
        /* Bits [7:0] is data */
        uint32_t data : 8;
        /* Bits [30:8] is 0 */
        uint32_t zero : 23;
        /* Bit 31 is full status */
        uint32_t full : 1;
    } __attribute__((packed, aligned(4))) uarths_txdata_t;

    typedef struct _uarths_rxdata
    {
        /* Bits [7:0] is data */
        uint32_t data : 8;
        /* Bits [30:8] is 0 */
        uint32_t zero : 23;
        /* Bit 31 is empty status */
        uint32_t empty : 1;
    } __attribute__((packed, aligned(4))) uarths_rxdata_t;

    typedef struct _uarths_txctrl
    {
        /* Bit 0 is txen, controls whether the Tx channel is active. */
        uint32_t txen : 1;
        /* Bit 1 is nstop, 0 for one stop bit and 1 for two stop bits */
        uint32_t nstop : 1;
        /* Bits [15:2] is reserved */
        uint32_t resv0 : 14;
        /* Bits [18:16] is threshold of interrupt triggers */
        uint32_t txcnt : 3;
        /* Bits [31:19] is reserved */
        uint32_t resv1 : 13;
    } __attribute__((packed, aligned(4))) uarths_txctrl_t;

    typedef struct _uarths_rxctrl
    {
        /* Bit 0 is txen, controls whether the Tx channel is active. */
        uint32_t rxen : 1;
        /* Bits [15:1] is reserved */
        uint32_t resv0 : 15;
        /* Bits [18:16] is threshold of interrupt triggers */
        uint32_t rxcnt : 3;
        /* Bits [31:19] is reserved */
        uint32_t resv1 : 13;
    } __attribute__((packed, aligned(4))) uarths_rxctrl_t;

    typedef struct _uarths_ip
    {
        /* Bit 0 is txwm, raised less than txcnt */
        uint32_t txwm : 1;
        /* Bit 1 is txwm, raised greater than rxcnt */
        uint32_t rxwm : 1;
        /* Bits [31:2] is 0 */
        uint32_t zero : 30;
    } __attribute__((packed, aligned(4))) uarths_ip_t;

    typedef struct _uarths_ie
    {
        /* Bit 0 is txwm, raised less than txcnt */
        uint32_t txwm : 1;
        /* Bit 1 is txwm, raised greater than rxcnt */
        uint32_t rxwm : 1;
        /* Bits [31:2] is 0 */
        uint32_t zero : 30;
    } __attribute__((packed, aligned(4))) uarths_ie_t;

    typedef struct _uarths_div
    {
        /* Bits [31:2] is baud rate divisor register */
        uint32_t div : 16;
        /* Bits [31:16] is 0 */
        uint32_t zero : 16;
    } __attribute__((packed, aligned(4))) uarths_div_t;

    typedef struct _uarths
    {
        /* Address offset 0x00 */
        uarths_txdata_t txdata;
        /* Address offset 0x04 */
        uarths_rxdata_t rxdata;
        /* Address offset 0x08 */
        uarths_txctrl_t txctrl;
        /* Address offset 0x0c */
        uarths_rxctrl_t rxctrl;
        /* Address offset 0x10 */
        uarths_ie_t ie;
        /* Address offset 0x14 */
        uarths_ip_t ip;
        /* Address offset 0x18 */
        uarths_div_t div;
    } __attribute__((packed, aligned(4))) uarths_t;

    /**
 * @brief       Initialization Core UART
 *
 * @return      result
 *     - 0      Success
 *     - Other  Fail
 */
    void uarths_init();

    /**
 * @brief       Get a byte from UART
 *
 * @return      byte from UART
 */

    uint8_t uarths_read_byte();

    /**
 * @brief       Put a byte to UART
 *
 * @param[in]   value       The byte to put
 */
    void uarths_write_byte(uint8_t value);

    /**
 * @brief       Send a string to UART
 *
 * @param[in]   s       The string to send
 */
    void uarths_puts(const char *s);

    size_t uarths_read(uint8_t *buffer, size_t len);

#ifdef __cplusplus
}
#endif

#endif /* _DRIVER_UARTHS_H */
