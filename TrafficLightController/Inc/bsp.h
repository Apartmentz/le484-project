#ifndef __BSP_H
#define __BSP_H

#ifdef __cplusplus
extern "C" {
#endif
#include "stm32f4xx_hal.h"
 extern int Button_Status ;
 

// Function Prototype

void BSP_Init(void);
void Signal_Pass(void);
void Signal_Block(void);
void Signal_Flash(void);
	
	#ifdef __cplusplus
}
#endif
#endif