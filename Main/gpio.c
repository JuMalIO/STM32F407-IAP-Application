#include "gpio.h"
#include "main.h"

void GPIO_SetLed(_Bool enabled)
{
	HAL_GPIO_WritePin(LED_GPIO_Port, LED_Pin, enabled ? GPIO_PIN_SET : GPIO_PIN_RESET);
}
