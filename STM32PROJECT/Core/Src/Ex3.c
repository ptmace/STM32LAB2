/*
 * Ex3.c
 *
 *  Created on: Sep 24, 2024
 *      Author: 2004p
 */

#include "Ex3.h"

const int MAX_LED = 4;
int index_led = 0;
int led_buffer[4] = {1, 2, 3, 4};

void update7SEG(int index){
	init_exercise2();

	switch(index_led){
		case 0:
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
			display7SEG(led_buffer[index]);
			break;
		case 1:
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
			display7SEG(led_buffer[index]);
			break;
		case 2:
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
			display7SEG(led_buffer[index]);
			break;
		case 3:
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
			display7SEG(led_buffer[index]);
			break;
		default:
			break;
	}
}
void exercise3_run(){
	update7SEG(index_led);
	index_led++;

	if(index_led == 4){
		index_led = 0;
	}
}
