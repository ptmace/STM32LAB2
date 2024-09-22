/*
 * Ex2.c
 *
 *  Created on: Sep 23, 2024
 *      Author: 2004p
 */
#include "Ex2.h"

void init_exercise2(){
	HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
	HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
	HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
	HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
}

int status1 = 0;

void exercise2_run(){
	init_exercise2();

	switch(status1){
		case 0:
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
			display7SEG(1);
			status1 = 1;
			break;
		case 1:
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
			display7SEG(2);
			status1 = 2;
			break;
		case 2:
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
			display7SEG(3);
			status1 = 3;
			break;
		case 3:
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
			display7SEG(0);
			status1 = 0;
			break;
		default:
			break;
	}
}
