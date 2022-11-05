/*
 * fsm_automatic.c
 *
 *  Created on: Nov 5, 2022
 *      Author: Admin
 */
#include "fsm_automatic.h"

void fsm_automatic_run(){
	switch(status){
		case INIT:

			setTimer2(0);

			if(isButtonPress() ==1){
				status=RESET;
			}
			if(isIncPress() == 1){
				setTimer1(10000);
				addTimer2(100);
				status = INC;
			}
			if(isDcPress() == 1){
				setTimer1(10000);
				minusTimer2(100);
				status = DC;
			}

			break;
		case RESET:
			setTimer2(0);

			if(isIncPress() == 1){
				status= INC;
				addTimer2(100);
			}
			if(isDcPress() == 1){
				setTimer1(10000);
				minusTimer2(100);
				status = DC;
			}
			break;
		case INC:

			if(isButtonPress() ==1){
				status=RESET;
			}
			if(isIncPress() == 1){
				setTimer1(10000);
				addTimer2(100);
			}
			if(isDcPress() == 1){
				setTimer1(10000);
				minusTimer2(100);
				status = DC;
			}
			break;
		case DC:

			if(isButtonPress() ==1){
				status=RESET;
			}
			if(isIncPress() == 1){
				setTimer1(10000);
				addTimer2(100);
				status = INC;
			}
			if(isDcPress() == 1){
				setTimer1(10000);
				minusTimer2(100);
			}
			break;
		default:
			break;
	}
}

