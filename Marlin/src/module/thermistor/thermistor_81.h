/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

// R25 = 100 kOhm, beta25 = 3950 K, 4.7 kOhm pull-up, QU-BD silicone bed QWG-104F-3950 thermistor
constexpr temp_entry_t temptable_81[] PROGMEM = {
    {OV(1), 938},
    {OV(8), 314},
    {OV(11), 240}, //
    {OV(13), 235}, //
    {OV(16), 229}, //
    {OV(20), 218}, //
    {OV(22), 211}, //
    {OV(28), 203}, //
    {OV(33), 195}, //
    {OV(37), 190}, //
    {OV(44), 183}, //
    {OV(51), 175}, //
    {OV(55), 170},  // 167
    {OV(70), 162},  // 238
    {OV(93), 152},  // 221
    {OV(115), 141}, // 200
    {OV(151), 131}, // 188
    {OV(193), 123}, // 172
    {OV(252), 110}, // 153
    {OV(321), 102}, // 144
    {OV(420), 90},  // 127
    {OV(507), 82},  // 110
    {OV(635), 70},  // 94
    {OV(725), 63},  // 83
    {OV(793), 55},  // 72
    {OV(879), 46},  // 55
    {OV(927), 38},  // 43
    {OV(1023), 25},
    {OV(1001), 9},
    {OV(1021), -27}};
