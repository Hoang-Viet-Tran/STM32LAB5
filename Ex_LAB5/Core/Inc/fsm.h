/*
 * fsm.h
 *
 *  Created on: Dec 12, 2024
 *      Author: ADMIN
 */

#ifndef INC_FSM_H_
#define INC_FSM_H_

#include "main.h"
#include "string.h"
#include "software_timer.h"

#define MAX_BUFFER_SIZE  30

#define WAIT	1
#define COMMAND	2

#define WAIT_SEND	10
#define RESPONE		11
#define REPEAT		12

extern ADC_HandleTypeDef hadc1;
extern UART_HandleTypeDef huart2;

extern uint8_t temp;
extern uint8_t buffer_flag;

extern int comStatus;
extern int uartStatus;

void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart);
void command_parser_fsm();
void uart_communication_fsm();

#endif /* INC_FSM_H_ */
