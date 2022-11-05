/*
 * dc.c
 *
 *  Created on: Nov 5, 2022
 *      Author: Admin
 */


#include "dc.h"
#include "main.h"

int button_flagDc= 0;
int keyReg0Dc = NORMAL_STATE;
int keyReg1Dc = NORMAL_STATE;
int keyReg2Dc = NORMAL_STATE;

int keyReg3Dc = NORMAL_STATE;
int timeForKeyPressDc = 300;

int isDcPress(){
	if(button_flagDc ==1){
		button_flagDc = 0;
		return 1;
	}
	return 0;
}
void subDcProcess(){
	button_flagDc = 1;
}
void getDcInput(){
	keyReg0Dc = keyReg1Dc;
	keyReg1Dc = keyReg2Dc;
	keyReg2Dc = HAL_GPIO_ReadPin(DC_GPIO_Port, DC_Pin);
	if((keyReg0Dc == keyReg1Dc) && (keyReg1Dc == keyReg2Dc)){
		if(keyReg3Dc != keyReg2Dc){
			keyReg3Dc = keyReg2Dc;
			if(keyReg2Dc == PRESSED_STATE){
				subDcProcess();
				timeForKeyPressDc = 300;
			}
		}else{
			timeForKeyPressDc--;
			if (timeForKeyPressDc ==0){
				if(keyReg2Dc == PRESSED_STATE){
					subDcProcess();
				}
//				subKeyProcess();
				timeForKeyPressDc = 100;
			}
		}
	}

}
