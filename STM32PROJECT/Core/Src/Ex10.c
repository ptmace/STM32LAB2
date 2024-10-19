/*
 * Ex10.c
 *
 *  Created on: Sep 25, 2024
 *      Author: 2004p
 */

#include "Ex10.h"
uint8_t matrix_buffer_heart[8] = {0x00, 0x6C, 0x92, 0x82, 0x44, 0x28, 0x10, 0x00};
/*uint8_t matrix_buffer_heart[14][8] = {
{0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00},
{0x00, 0x80, 0x40, 0x40, 0x80, 0x00, 0x00, 0x00},
{0x00, 0xC0, 0x20, 0x20, 0x40, 0x80, 0x00, 0x00},
{0x00, 0x60, 0x90, 0x10, 0x20, 0x40, 0x80, 0x00},
{0x00, 0xB0, 0x48, 0x08, 0x10, 0xA0, 0x40, 0x00},
{0x00, 0xD8, 0x24, 0x04, 0x88, 0x50, 0x20, 0x00},
{0x00, 0x6C, 0x92, 0x82, 0x44, 0x28, 0x10, 0x00},
{0x00, 0x36, 0x49, 0x41, 0x22, 0x14, 0x08, 0x00},
{0x00, 0x1B, 0x24, 0x20, 0x11, 0x0A, 0x04, 0x00},
{0x00, 0x0D, 0x12, 0x10, 0x08, 0x04, 0x02, 0x00},
{0x00, 0x06, 0x09, 0x08, 0x04, 0x02, 0x01, 0x00},
{0x00, 0x03, 0x04, 0x04, 0x02, 0x01, 0x00, 0x00},
{0x00, 0x01, 0x02, 0x02, 0x01, 0x00, 0x00, 0x00},
{0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00}
};*/

void updateLEDMatrix_animation(/*int state, */int index){
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

//	HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, matrix_buffer_heart[state][index]&(0x01)?SET:RESET);
//	HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, matrix_buffer_heart[state][index]&(0x02)?SET:RESET);
//	HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, matrix_buffer_heart[state][index]&(0x04)?SET:RESET);
//	HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, matrix_buffer_heart[state][index]&(0x08)?SET:RESET);
//	HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, matrix_buffer_heart[state][index]&(0x10)?SET:RESET);
//	HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, matrix_buffer_heart[state][index]&(0x20)?SET:RESET);
//	HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, matrix_buffer_heart[state][index]&(0x40)?SET:RESET);
//	HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, matrix_buffer_heart[state][index]&(0x80)?SET:RESET);

	HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, matrix_buffer_heart[index]&(0x01)?SET:RESET);
	HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, matrix_buffer_heart[index]&(0x02)?SET:RESET);
	HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, matrix_buffer_heart[index]&(0x04)?SET:RESET);
	HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, matrix_buffer_heart[index]&(0x08)?SET:RESET);
	HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, matrix_buffer_heart[index]&(0x10)?SET:RESET);
	HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, matrix_buffer_heart[index]&(0x20)?SET:RESET);
	HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, matrix_buffer_heart[index]&(0x40)?SET:RESET);
	HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, matrix_buffer_heart[index]&(0x80)?SET:RESET);

}
