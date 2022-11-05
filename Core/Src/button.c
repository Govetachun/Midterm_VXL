/*
 * button.c
 *
 *  Created on: Nov 5, 2022
 *      Author: Admin
 */
#include "button.h"
#include "main.h"

int button_flag= 0;
int keyReg0 = NORMAL_STATE;
int keyReg1 = NORMAL_STATE;
int keyReg2 = NORMAL_STATE;

int keyReg3 = NORMAL_STATE;
int timeForKeyPress = 300;

int isButtonPress(){
	if(button_flag ==1){
		button_flag = 0;
		return 1;
	}
	return 0;
}
void subKeyProcess(){
	button_flag = 1;
}
void getKeyInput(){
	keyReg0 = keyReg1;
	keyReg1 = keyReg2;
	keyReg2 = HAL_GPIO_ReadPin(BUTTON_GPIO_Port, BUTTON_Pin);
	if((keyReg0 == keyReg1) && (keyReg1 == keyReg2)){
		if(keyReg3 != keyReg2){
			keyReg3 = keyReg2;
			if(keyReg2 == PRESSED_STATE){
				subKeyProcess();
				timeForKeyPress = 300;
			}
		}else{
			timeForKeyPress--;
			if (timeForKeyPress ==0){
				if(keyReg2 == PRESSED_STATE){
					subKeyProcess();
				}
//				subKeyProcess();
				timeForKeyPress = 300;
			}
		}
	}

}


