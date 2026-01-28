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
#include "stm32f1xx_hal.h"

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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define ENABLE_Pin GPIO_PIN_0
#define ENABLE_GPIO_Port GPIOA
#define PWM_Pin GPIO_PIN_1
#define PWM_GPIO_Port GPIOA
#define V_BB_Pin GPIO_PIN_2
#define V_BB_GPIO_Port GPIOA
#define V_BAT_Pin GPIO_PIN_3
#define V_BAT_GPIO_Port GPIOA
#define I_OUT_Pin GPIO_PIN_4
#define I_OUT_GPIO_Port GPIOA
#define CHG_Pin GPIO_PIN_7
#define CHG_GPIO_Port GPIOA
#define BLUE_D_Pin GPIO_PIN_0
#define BLUE_D_GPIO_Port GPIOB
#define CHG_HI_Pin GPIO_PIN_8
#define CHG_HI_GPIO_Port GPIOA
#define FAULT_Pin GPIO_PIN_10
#define FAULT_GPIO_Port GPIOA
#define FAULT_EXTI_IRQn EXTI15_10_IRQn
#define ENABLE_TPS_Pin GPIO_PIN_11
#define ENABLE_TPS_GPIO_Port GPIOA
#define LD_DET_Pin GPIO_PIN_12
#define LD_DET_GPIO_Port GPIOA
#define UFP_Pin GPIO_PIN_15
#define UFP_GPIO_Port GPIOA

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
