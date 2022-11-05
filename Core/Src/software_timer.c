/*
 * software_timer.c
 *
 *  Created on: Nov 5, 2022
 *      Author: Admin
 */

#include "software_timer.h"
#include "7led.h"
#include "main.h"
#include "inc.h"
#include "dc.h"
#define TICK 10;

int timer1_counter = 0;
int timer2_counter = 0;
int timer1_flag = 0;

void clearTimer(){
	timer1_counter=0;
	timer1_flag=0;
}
void setTimer1(int duration){
	clearTimer();
	timer1_counter = duration/TICK;
}
void setTimer2(int duration){
	clearTimer();
	timer2_counter = duration/TICK;
}
//int glitch(){
//	if((timer1_counter % 50 == 0)  ){
//		return 1;
//	}
//	return 0;
//}
void display(){
	if(timer1_counter % 10 == 0){
		display7SEG1(timer2_counter/100);
	}
//	if(isDcPress() ==1 ){
//		display7SEG1(timer2_counter/100);
//	}
//
//	if(isIncPress() ==1 ){
//		display7SEG1(timer2_counter/100);
//	}
}


int led_red = 50;
void ledred(){
	if(led_red == 0){
		HAL_GPIO_TogglePin(LED_RED_GPIO_Port,LED_RED_Pin);
		led_red=50;

	}
	led_red--;

}
void timerRun(){
	if(timer1_counter>0){
		timer1_counter--;
		if(timer1_counter<=0){
			timer1_counter = 0;
			timer1_flag = 1;
		}

	}
}
void addTimer2(int n){
	timer2_counter+=n;
	if(timer2_counter >= 1000){
		timer2_counter = 0;
	}
}
void minusTimer2(int n){
	timer2_counter-=n;
	if(timer2_counter <0){
		timer2_counter = 900;
	}
}
void timerRun2(){
	if(timer1_flag == 1){
		timer2_counter--;
		if(timer2_counter <= 0){
			status = INIT;
		}
	}
}
