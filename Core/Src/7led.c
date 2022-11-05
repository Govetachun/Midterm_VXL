/*
 * 7led.c
 *
 *  Created on: Nov 5, 2022
 *      Author: Admin
 */


/*
 * 7led.c
 *
 *  Created on: Nov 3, 2022
 *      Author: Admin
 */
#include "7led.h"

void display7SEG1(int num){
	if(num == 0){
		HAL_GPIO_WritePin ( LED0_GPIO_Port , LED0_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED1_GPIO_Port , LED1_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED2_GPIO_Port , LED2_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED3_GPIO_Port , LED3_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED4_GPIO_Port , LED4_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED5_GPIO_Port , LED5_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED6_GPIO_Port , LED6_Pin , GPIO_PIN_SET ) ;
	}else if(num == 1){
		HAL_GPIO_WritePin ( LED0_GPIO_Port , LED0_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED1_GPIO_Port , LED1_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED2_GPIO_Port , LED2_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED3_GPIO_Port , LED3_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED4_GPIO_Port , LED4_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED5_GPIO_Port , LED5_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED6_GPIO_Port , LED6_Pin , GPIO_PIN_SET ) ;
	}else if(num == 2){
		HAL_GPIO_WritePin ( LED0_GPIO_Port , LED0_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED1_GPIO_Port , LED1_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED2_GPIO_Port , LED2_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED3_GPIO_Port , LED3_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED4_GPIO_Port , LED4_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED5_GPIO_Port , LED5_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED6_GPIO_Port , LED6_Pin , GPIO_PIN_RESET ) ;
	}else if(num == 3){
		HAL_GPIO_WritePin ( LED0_GPIO_Port , LED0_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED1_GPIO_Port , LED1_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED2_GPIO_Port , LED2_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED3_GPIO_Port , LED3_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED4_GPIO_Port , LED4_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED5_GPIO_Port , LED5_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED6_GPIO_Port , LED6_Pin , GPIO_PIN_RESET ) ;
	}else if(num == 4){
		HAL_GPIO_WritePin ( LED0_GPIO_Port , LED0_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED1_GPIO_Port , LED1_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED2_GPIO_Port , LED2_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED3_GPIO_Port , LED3_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED4_GPIO_Port , LED4_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED5_GPIO_Port , LED5_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED6_GPIO_Port , LED6_Pin , GPIO_PIN_RESET ) ;
	}else if(num == 5){
		HAL_GPIO_WritePin ( LED0_GPIO_Port , LED0_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED1_GPIO_Port , LED1_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED2_GPIO_Port , LED2_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED3_GPIO_Port , LED3_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED4_GPIO_Port , LED4_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED5_GPIO_Port , LED5_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED6_GPIO_Port , LED6_Pin , GPIO_PIN_RESET ) ;
	}else if(num == 6){
		HAL_GPIO_WritePin ( LED0_GPIO_Port , LED0_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED1_GPIO_Port , LED1_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED2_GPIO_Port , LED2_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED3_GPIO_Port , LED3_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED4_GPIO_Port , LED4_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED5_GPIO_Port , LED5_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED6_GPIO_Port , LED6_Pin , GPIO_PIN_RESET ) ;
	}else if(num == 7){
		HAL_GPIO_WritePin ( LED0_GPIO_Port , LED0_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED1_GPIO_Port , LED1_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED2_GPIO_Port , LED2_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED3_GPIO_Port , LED3_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED4_GPIO_Port , LED4_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED5_GPIO_Port , LED5_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED6_GPIO_Port , LED6_Pin , GPIO_PIN_SET ) ;
	}else if(num == 8){
		HAL_GPIO_WritePin ( LED0_GPIO_Port , LED0_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED1_GPIO_Port , LED1_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED2_GPIO_Port , LED2_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED3_GPIO_Port , LED3_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED4_GPIO_Port , LED4_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED5_GPIO_Port , LED5_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED6_GPIO_Port , LED6_Pin , GPIO_PIN_RESET ) ;
	}else if(num == 9){
		HAL_GPIO_WritePin ( LED0_GPIO_Port , LED0_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED1_GPIO_Port , LED1_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED2_GPIO_Port , LED2_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED3_GPIO_Port , LED3_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED4_GPIO_Port , LED4_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED5_GPIO_Port , LED5_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED6_GPIO_Port , LED6_Pin , GPIO_PIN_RESET ) ;
	}
}

