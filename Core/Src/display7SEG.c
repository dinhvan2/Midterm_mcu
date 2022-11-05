/*
 * displau7SEG.c
 *
 *  Created on: Nov 6, 2022
 *      Author: Phạm Đình Văn
 */
#include "main.h"
void display7SEG(int number){
	char led7seg[10] = { 0x40, 0x79, 0x24, 0x30, 0x19, 0x92, 0x02, 0x78, 0x0,
				0x10 };
		for (int i = 0; i < 7; i++) {
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0 << i, (led7seg[number] >> i) & 1);
		}
}

