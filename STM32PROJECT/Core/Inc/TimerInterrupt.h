/*
 * TimerInterrupt.h
 *
 *  Created on: Sep 22, 2024
 *      Author: 2004p
 */

#ifndef INC_TIMERINTERRUPT_H_
#define INC_TIMERINTERRUPT_H_

#include "main.h"
#define TICK 10

extern int timer_counter[3];
extern int timer_flag[3];

void setTimer(int index, int counter);
void timerRun();


#endif /* INC_TIMERINTERRUPT_H_ */
