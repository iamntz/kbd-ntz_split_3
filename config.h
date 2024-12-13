// Copyright 2023 Ionuț Staicu (@iamntz)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/* Split Defines */
#define MASTER_RIGHT
#define SPLIT_USB_DETECT

// #define USE_SERIAL

#define USE_SERIAL

#define SERIAL_USART_FULL_DUPLEX

#define SERIAL_USART_TX_PIN GP1
#define SERIAL_USART_RX_PIN GP0
#define SERIAL_USART_PIN_SWAP

#define SERIAL_PIO_USE_PIO1

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U
