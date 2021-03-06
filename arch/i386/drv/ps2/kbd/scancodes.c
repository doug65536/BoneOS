/**
 ** This file is part of BoneOS.
 **
 **   BoneOS is free software: you can redistribute it and/or modify
 **   it under the terms of the GNU General Public License as published by
 **   the Free Software Foundation, either version 3 of the License, or
 **   (at your option) any later version.

 **   BoneOS is distributed in the hope that it will be useful,
 **   but WITHOUT ANY WARRANTY; without even the implied warranty of
 **   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 **   GNU General Public License for more details.

 **   You should have received a copy of the GNU General Public License
 **   along with BoneOS.  If not, see <http://www.gnu.org/licenses/>.
 **
 **  @main_author : Amanuel Bogale
 **  
 **  @contributors:

 **     Amanuel Bogale <amanuel2> : start_
 **/  

#include <drv/ps2/kbd/scancodes.h>
#include <drv/ps2/kbd/kbd.h>

char const QWERTY_EN_NOSHIFT_VAL[]  = 
{
    0,  27, '1', '2', '3', '4', '5', '6', '7', '8', /* 9 */
  '9', '0', '-', '=', '\b', /* Backspace */
  '\t',     /* Tab */
  'q', 'w', 'e', 'r', /* 19 */
  't', 'y', 'u', 'i', 'o', 'p', '[', ']', KBD_QWERTY_ENTER_PRESS, /* Enter key */
    0,      /* 29   - Control */
  'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';', /* 39 */
 '\'', '`',   KBD_QWERTY_LEFT_SHIFT_PRESS,    /* Left shift */
 '\\', 'z', 'x', 'c', 'v', 'b', 'n',      /* 49 */
  'm', ',', '.','/',  KBD_QWERTY_RIGHT_SHIFT_PRESS,        /* Right shift */
  '*',
    0,  /* Alt */
  ' ',  /* Space bar */
    KBD_QWERTY_CAPS_PRESS,  /* Caps lock */
    0,  /* 59 - F1 key ... > */
    0,   0,   0,   0,   0,   0,   0,   0,
    0,  /* < ... F10 */
    0,  /* 69 - Num lock*/
    0,  /* Scroll Lock */
    0,  /* Home key */
    0,  /* Up Arrow */
    0,  /* Page Up */
  '-',
    0,  /* Left Arrow */
    0,
    0,  /* Right Arrow */
  '+',
    0,  /* 79 - End key*/
    0,  /* Down Arrow */
    0,  /* Page Down */
    0,  /* Insert Key */
    0,  /* Delete Key */
    0,   0,   0,
    0,  /* F11 Key */
    0,  /* F12 Key */
    0,  /* All other keys are undefined */
};

 char const QWERTY_EN_SHIFT_VAL[] = 
{
    0,  27, '!', '@', '#', '$', '%', '^', '&', '*', /* 9 */
  '(', ')', '_', '+', '\b', /* Backspace */
  '\t',     /* Tab */ 
  'Q', 'W', 'E', 'R', /* 19 */
  'T', 'Y', 'U', 'I', 'O', 'P', '{', '}', KBD_QWERTY_ENTER_PRESS, /* Enter key */
    0,      /* 29   - Control */
  'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K' ,'L', ':', /* 39 */
  '\"' , '~',   KBD_QWERTY_LEFT_SHIFT_PRESS,    /* Left shift */
 '|', 'Z', 'X', 'C', 'V', 'B', 'N',      /* 49 */
  'M', '<', '>', '?',   KBD_QWERTY_RIGHT_SHIFT_PRESS,        /* Right shift */
  '*',
    0,  /* Alt */
  ' ',  /* Space bar */
    KBD_QWERTY_CAPS_PRESS,  /* Caps lock */
    0,  /* 59 - F1 key ... > */
    0,   0,   0,   0,   0,   0,   0,   0,
    0,  /* < ... F10 */
    0,  /* 69 - Num lock*/
    0,  /* Scroll Lock */
    0,  /* Home key */
    0,  /* Up Arrow */
    0,  /* Page Up */
  '-',
    0,  /* Left Arrow */
    0,
    0,  /* Right Arrow */
  '+',
    0,  /* 79 - End key*/
    0,  /* Down Arrow */
    0,  /* Page Down */
    0,  /* Insert Key */
    0,  /* Delete Key */
    0,   0,   0,
    0,  /* F11 Key */
    0,  /* F12 Key */
    0,  /* All other keys are undefined */
};


struct scancode_layout QWERTY_EN = 
{
  .scancode_shift = QWERTY_EN_SHIFT_VAL,
  .scancode_no_shift = QWERTY_EN_NOSHIFT_VAL,
  .name = "QWERTY English"
};


struct scancode_layout *kbd_layouts[] = 
{
    &QWERTY_EN,
    0
};
