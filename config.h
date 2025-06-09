/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2016 Priyadi Iman Nurcahyo <priyadi@priyadi.net>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#define WAIT_US_TIMER GPTD14


/* matrix size */
#define MATRIX_ROWS 17  // keycode bit: 3-0
#define MATRIX_COLS 8   // keycode bit: 6-4

/* usart   */
#define SERIAL_DRIVER		SD1
#define SD1_TX_PIN			B6
#define SD1_RX_PIN			B7
#define SD1_TX_PAL_MODE		0
#define SD1_RX_PAL_MODE		0
#define SD1_WRDLEN			8

/*
#define SERIAL_DEBUG
#define SERIAL_USART_DRIVER SD2
#define SERIAL_USART_FULL_DUPLEX   // Enable full duplex operation mode.
#define SERIAL_USART_TX_PIN A7     // USART TX pin
#define SERIAL_USART_RX_PIN A2     // USART RX pin
*/

/* legacy keymap support */
#define USE_LEGACY_KEYMAP


/* key combination for command */
#define IS_COMMAND() ( \
    get_mods() == (MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT) | MOD_BIT(KC_RALT) | MOD_BIT(KC_RCTL)) \
)


/*
 * PS/2 USART configuration for ATMega32U4
 */
#ifdef PS2_DRIVER_USART
/* XCK for clock line */
#define PS2_CLOCK_PIN   D5
#define PS2_DATA_PIN    D2
#endif

/*
 * PS/2 Interrupt configuration
 */
#ifdef PS2_DRIVER_INTERRUPT
/* uses INT1 for clock line(ATMega32U4) */
#define PS2_CLOCK_PIN   A15
#define PS2_DATA_PIN    A14



#endif


/*
 * PS/2 Busywait configuration
 */
#ifdef PS2_DRIVER_BUSYWAIT
#define PS2_CLOCK_PIN   A15
#define PS2_DATA_PIN    A14
#endif
