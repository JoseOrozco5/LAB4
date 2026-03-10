/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define B1_Pin GPIO_PIN_13
#define B1_GPIO_Port GPIOC
#define boton_secuencia_Pin GPIO_PIN_0
#define boton_secuencia_GPIO_Port GPIOC
#define boton_secuencia_EXTI_IRQn EXTI0_IRQn
#define boton_j1_Pin GPIO_PIN_1
#define boton_j1_GPIO_Port GPIOC
#define boton_j1_EXTI_IRQn EXTI1_IRQn
#define boton_j2_Pin GPIO_PIN_2
#define boton_j2_GPIO_Port GPIOC
#define boton_j2_EXTI_IRQn EXTI2_IRQn
#define USART_TX_Pin GPIO_PIN_2
#define USART_TX_GPIO_Port GPIOA
#define USART_RX_Pin GPIO_PIN_3
#define USART_RX_GPIO_Port GPIOA
#define LD2_Pin GPIO_PIN_5
#define LD2_GPIO_Port GPIOA
#define LED1_J1_Pin GPIO_PIN_1
#define LED1_J1_GPIO_Port GPIOB
#define LED4_J2_Pin GPIO_PIN_2
#define LED4_J2_GPIO_Port GPIOB
#define DISPLAY_pt_Pin GPIO_PIN_10
#define DISPLAY_pt_GPIO_Port GPIOB
#define LED3_J2_Pin GPIO_PIN_12
#define LED3_J2_GPIO_Port GPIOB
#define LED4_J1_Pin GPIO_PIN_13
#define LED4_J1_GPIO_Port GPIOB
#define LED3_J1_Pin GPIO_PIN_14
#define LED3_J1_GPIO_Port GPIOB
#define LED2_J1_Pin GPIO_PIN_15
#define LED2_J1_GPIO_Port GPIOB
#define DISPLAY_e_Pin GPIO_PIN_7
#define DISPLAY_e_GPIO_Port GPIOC
#define DISPLAY_d_Pin GPIO_PIN_9
#define DISPLAY_d_GPIO_Port GPIOC
#define DISPLAY_c_Pin GPIO_PIN_8
#define DISPLAY_c_GPIO_Port GPIOA
#define DISPLAY_g_Pin GPIO_PIN_10
#define DISPLAY_g_GPIO_Port GPIOA
#define LED2_J2_Pin GPIO_PIN_11
#define LED2_J2_GPIO_Port GPIOA
#define LED1_J2_Pin GPIO_PIN_12
#define LED1_J2_GPIO_Port GPIOA
#define TMS_Pin GPIO_PIN_13
#define TMS_GPIO_Port GPIOA
#define TCK_Pin GPIO_PIN_14
#define TCK_GPIO_Port GPIOA
#define DISPLAY_f_Pin GPIO_PIN_3
#define DISPLAY_f_GPIO_Port GPIOB
#define DISPLAY_b_Pin GPIO_PIN_4
#define DISPLAY_b_GPIO_Port GPIOB
#define DISPLAY_a_Pin GPIO_PIN_5
#define DISPLAY_a_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
