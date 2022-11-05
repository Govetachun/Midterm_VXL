/*
 * dc.h
 *
 *  Created on: Nov 5, 2022
 *      Author: Admin
 */

#ifndef INC_DC_H_
#define INC_DC_H_

#include "main.h"
#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET


int isDcPress();

void getDcInput();


#endif /* INC_DC_H_ */
