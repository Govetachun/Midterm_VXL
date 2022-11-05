/*
 * inc.c
 *
 *  Created on: Nov 5, 2022
 *      Author: Admin
 */


#include "inc.h"
#include "main.h"

int button_flagInc= 0;
int keyReg0Inc = NORMAL_STATE;
int keyReg1Inc = NORMAL_STATE;
int keyReg2Inc = NORMAL_STATE;

int keyReg3Inc = NORMAL_STATE;
int timeForKeyPressInc = 300;

int isIncPress(){
	if(button_flagInc ==1){
		button_flagInc = 0;
		return 1;
	}
	return 0;
}
void subIncProcess(){
	button_flagInc = 1;
}
void getIncInput(){
	keyReg0Inc = keyReg1Inc;
	keyReg1Inc = keyReg2Inc;
	keyReg2Inc = HAL_GPIO_ReadPin(INC_GPIO_Port, INC_Pin);
	if((keyReg0Inc == keyReg1Inc) && (keyReg1Inc == keyReg2Inc)){
		if(keyReg3Inc != keyReg2Inc){
			keyReg3Inc = keyReg2Inc;
			if(keyReg2Inc == PRESSED_STATE){
				subIncProcess();
				timeForKeyPressInc = 300;
			}
		}else{
			timeForKeyPressInc--;
			if (timeForKeyPressInc ==0){
				if(keyReg2Inc == PRESSED_STATE){
					subIncProcess();
				}
//				subKeyProcess();
				timeForKeyPressInc = 100;
			}
		}
	}

}
