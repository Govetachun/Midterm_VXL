/*
 * software_timer.h
 *
 *  Created on: Nov 5, 2022
 *      Author: Admin
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer1_flag;

void setTimer1(int duration);
void setTimer2(int duration);
void timerRun();
void timerRun2();
void addTimer2(int n);
void minusTimer2(int n);
void clearTimer();
void display();
void ledred();
#endif /* INC_SOFTWARE_TIMER_H_ */
