/*
 * TimeInterrupt.c
 *
 *  Created on: Sep 22, 2024
 *      Author: 2004p
 */

#ifndef SRC_TIMEINTERRUPT_C_
#define SRC_TIMEINTERRUPT_C_

#include "TimerInterrupt.h"

#define TICK 10

int timer_flag = 0;
int timer_counter = 0;

void setTimer(int counter){
	timer_flag = 0;
	timer_counter = counter;
}

void timerRun(){
	if(timer_counter > 0){
		timer_counter--;
		if(timer_counter <= 0){
			timer_flag = 1;
		}
	}
}

#endif /* SRC_TIMEINTERRUPT_C_ */
