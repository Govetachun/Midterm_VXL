/*
 * inc.h
 *
 *  Created on: Nov 5, 2022
 *      Author: Admin
 */

#ifndef INC_INC_H_
#define INC_INC_H_
#include "main.h"
#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET


int isIncPress();

void getIncInput();



#endif /* INC_INC_H_ */
