/*
    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
     along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

/**
* CHANGELOG
* 2021 05 07 
*    initial release
*/

/**
 * @file planet.cpp
 *
 * this file contains functions to run the planet
 * 
 * Copyright (c) 2021 aRGi <info@argi.mooo.com>
 *
 */

// comment out the line below to stop logging to terminal
#define PLANET_DEBUGON

#include <arduino.h>
#ifdef ESP32
  #include <esp_now.h>
#endif  
#ifdef ESP8266
  #include <espnow.h>
  #define esp_err_t int
  #define ESP_OK 0
  #define esp_now_send_status_t uint8_t
#endif  

#include "planet.h"
#include "debug.h"

#define PACKET_MAXLEN   250
#define PLANET_MAX_SATELLITES  20

extern planet_t    planet;                              // planet data
extern satellite_t satellites[PLANET_MAX_SATELLITES];   // satellites data
extern esp_err_t addPeer(uint8_t *peerMAC);              
extern esp_err_t esp_now_setup(void);
extern int sendPacket(uint8_t *, size_t, uint8_t *);

int gtwSendPacket(uint8_t * pkt,size_t pLen, uint8_t * destination) {

    int retCode = 1;

    retCode = 0;
    DEBUG_STR("gtw send result: ");
    DEBUG_INT(retCode);
    DEBUG_STR(" ");
    return retCode;
}
