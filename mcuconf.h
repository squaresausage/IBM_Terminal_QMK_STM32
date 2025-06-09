#pragma once
#include_next <mcuconf.h>

#undef STM32_GPT_USE_TIM14
#define STM32_GPT_USE_TIM14 TRUE
#define STM32_TIM14_SUPPRESS_ISR

#undef STM32_SERIAL_USE_USART1
#define STM32_SERIAL_USE_USART1 TRUE
