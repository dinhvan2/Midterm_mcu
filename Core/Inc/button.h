/*
 * button.c
 *
 *  Created on: Nov 6, 2022
 *      Author: Phạm Đình Văn
 */
#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"

#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET

int isButton1Pressed();
int isButton2Pressed();
int isButton3Pressed();

int isButton1Release();
int isButton2Release();
int isButton3Release();

void getKeyInput();

#endif /* INC_BUTTON_H_ */


