/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2020 Pierre Constantineau
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

#ifndef _MASK_NRF52840_H
#define _MASK_NRF52840_H

#define _PINNUM(port, pin)    ((port)*32 + (pin))

/*------------------------------------------------------------------*/
/* LED
 *------------------------------------------------------------------*/
#define LEDS_NUMBER           0
//#define LED_PRIMARY_PIN       _PINNUM(1, 4)
//#define LED_SECONDARY_PIN     _PINNUM(1, 10)
//#define LED_STATE_ON          1

/*------------------------------------------------------------------*/
/* BUTTON
 *------------------------------------------------------------------*/
#define BUTTONS_NUMBER    2                 // none connected at all
#define BUTTON_1          _PINNUM(0, 18)    // unusable: RESET
#define BUTTON_2          _PINNUM(0, 7)     // no connection on BMD-380 Module
#define BUTTON_PULL       NRF_GPIO_PIN_PULLUP

//--------------------------------------------------------------------+
// BLE OTA
//--------------------------------------------------------------------+
#define BLEDIS_MANUFACTURER  "mask"
#define BLEDIS_MODEL         "mask 840"

//--------------------------------------------------------------------+
// USB PID from openmoko:
// Approved PR https://github.com/openmoko/openmoko-usb-oui/pull/20
//--------------------------------------------------------------------+
#define USB_DESC_VID           0x1d50
#define USB_DESC_UF2_PID       0x6160
#define USB_DESC_CDC_ONLY_PID  0x6160

#define UF2_PRODUCT_NAME  "Mask"
#define UF2_VOLUME_LABEL  "MASK"
#define UF2_BOARD_ID      "nRF52840-mask-v0.0.0"
#define UF2_INDEX_URL     "http://github.com/marcoster/mask/"

#endif // _BLUEMICRO_H
