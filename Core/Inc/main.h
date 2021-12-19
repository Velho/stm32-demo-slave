/* USER CODE BEGIN Header */
/**
 ******************************************************************************
 * @file           : main.h
 * @brief          : Header for main.c file.
 *                   This file contains the common defines of the application.
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
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
#include "stm32l1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

#include "cpu_cfg.h"
#include "sensortype.h"

#include <os.h>
#include <stdint.h>

// #include "app.h"
// #include "datastorage.h"

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
#define GPIO_BluePushButton1_Pin GPIO_PIN_13
#define GPIO_BluePushButton1_GPIO_Port GPIOC
#define USER_LED1_Pin GPIO_PIN_5
#define USER_LED1_GPIO_Port GPIOA
#define LCD_EN_Pin GPIO_PIN_7
#define LCD_EN_GPIO_Port GPIOA
#define LCD_DB6_Pin GPIO_PIN_10
#define LCD_DB6_GPIO_Port GPIOB
#define GPIO_PushButton1_Pin GPIO_PIN_12
#define GPIO_PushButton1_GPIO_Port GPIOB
#define RS485_NRE_Pin GPIO_PIN_13
#define RS485_NRE_GPIO_Port GPIOB
#define LCD_DB7_Pin GPIO_PIN_8
#define LCD_DB7_GPIO_Port GPIOA
#define RS485_DE_Pin GPIO_PIN_3
#define RS485_DE_GPIO_Port GPIOB
#define LCD_DB5_Pin GPIO_PIN_4
#define LCD_DB5_GPIO_Port GPIOB
#define LCD_DB4_Pin GPIO_PIN_5
#define LCD_DB4_GPIO_Port GPIOB
#define LCD_RS_Pin GPIO_PIN_6
#define LCD_RS_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
