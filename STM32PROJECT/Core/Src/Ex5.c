/*
 * Ex5.c
 *
 *  Created on: Sep 24, 2024
 *      Author: 2004p
 */

#include "Ex5.h"

int hour = 15;
int minute = 8;
int second = 50;
int led_buffer[4];

void updateClockBuffer(){
	led_buffer[0] = hour/10;
	led_buffer[1] = hour%10;
	led_buffer[2] = minute/10;
	led_buffer[3] = minute%10;
}
