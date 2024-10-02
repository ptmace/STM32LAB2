/*
 * Ex7.c
 *
 *  Created on: Sep 25, 2024
 *      Author: 2004p
 */

#include "Ex7.h"

void exercise7_run(){
	second++;

	if(second >= 60){
		second = 0;
		minute++;
	}
	if(minute >= 60){
		minute = 0;
		hour++;
 	}
  	if(hour >= 24){
  		hour = 0;
  	}
}

