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

int timer_flag[2];
int timer_counter[2];

void setTimer(int index, int counter){
	timer_flag[index] = 0;
	timer_counter[index] = counter;
}

void timerRun(){
	for(int i = 0; i < 2; i++){
		if(timer_counter[i] > 0){
			timer_counter[i]--;
			if(timer_counter[i] <= 0){
				timer_flag[i] = 1;
			}
		}
	}
}

#endif /* SRC_TIMEINTERRUPT_C_ */
