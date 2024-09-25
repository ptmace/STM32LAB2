/*
 * Ex9.c
 *
 *  Created on: Sep 25, 2024
 *      Author: 2004p
 */


#include "Ex9.h"

const int MAX_LED_MATRIX = 8;
int index_led_matrix = 0;
uint8_t matrix_buffer[8] = {0x18, 0x3C, 0x66, 0x66, 0x7E, 0x7E, 0x66, 0x66};

void ClearAllLed(){
	HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, RESET);
	HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, RESET);
	HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, RESET);
	HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, RESET);
	HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, RESET);
	HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, RESET);
	HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, RESET);
	HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, RESET);
}

void updateLEDMatrix(int index){
	ClearAllLed();

	switch(index){
		case 0:
			HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, SET);
			break;
		case 1:
			HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, SET);
			break;
		case 2:
			HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, SET);
			break;
		case 3:
			HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, SET);
			break;
		case 4:
			HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, SET);
			break;
		case 5:
			HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, SET);
			break;
		case 6:
			HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, SET);
			break;
		case 7:
			HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, SET);
			break;
		default:
			break;
	}

	HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, matrix_buffer[index]&(0x01)?SET:RESET);
	HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, matrix_buffer[index]&(0x02)?SET:RESET);
	HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, matrix_buffer[index]&(0x04)?SET:RESET);
	HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, matrix_buffer[index]&(0x08)?SET:RESET);
	HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, matrix_buffer[index]&(0x10)?SET:RESET);
	HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, matrix_buffer[index]&(0x20)?SET:RESET);
	HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, matrix_buffer[index]&(0x40)?SET:RESET);
	HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, matrix_buffer[index]&(0x80)?SET:RESET);
}
