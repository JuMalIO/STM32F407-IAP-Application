#include "timer.h"
#include "main.h"
#include "gpio.h"

extern TIM_HandleTypeDef htim2;

static _Bool LedBlink;

// Period = 1000 * (PSC+1)*(ARR+1) / TmerClockFreq   // in milliseconds

void TIMER_Init(void)
{
	HAL_TIM_Base_Start_IT(&htim2);
}

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef* htim)
{
	LedBlink = !LedBlink;
	GPIO_SetLed(LedBlink);
}
