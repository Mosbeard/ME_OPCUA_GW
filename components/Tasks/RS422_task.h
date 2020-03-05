/*
 * RS422_task.h
 *
 *  Created on: Aug 08, 2019
 *      Author: graf
 */

#ifndef COMPONENTS_RS422_TASK_H_
#define COMPONENTS_RS422_TASK_H_

#include "Task_cxx.h"
#include "MultiSerial.h"
#include <string>
#include "WeldingMachine.h"
#include "types_tig4_generated.h"


#define BAUD_RATE_A 19200
#define BAUD_RATE_B 19200
#define IR_MASK_A	0x01		//enables RHR Interrupt of SC16IS752 chip
#define IR_MASK_B	0x01		//enables RHR Interrupt of SC16IS752 chip
#define RS_RX_FIFO	0x02

//TEST_PI2 PROTOKOLL
#define START	0xFD
#define END		0xFE
#define SIZE	19

typedef enum { 
	NONE = 1,
	RX_LINE_STATUS_INTR = 6,
	RX_TIMEOUT_INTR = 12,
	RHR_INTR = 4,
	THR_INTR = 2,
	MODEM_INTR = 0,
	INPUT_PIN_CHANGE_INTR = 48,
	RX_XOFF_CHAR_INTR = 16,
	CTS_RTS_CHANGE_INTR = 32 
} sc16is752_ir_t;

typedef struct {
	uint32_t id;
	sc16is752_ir_t intr;
}sc16is752_ir_queue_t;

class RS422_Task : public Task {
	public:	
	RS422_Task();
	void run(void *data);
	static void IRAM_ATTR sc16is752_isr(void* args);
	static QueueHandle_t sc16is752_ir_queue;
	static UA_Tig4ErrorCode getErrorCode(void);
	static UA_Tig4ErrorCode getSimulatedErrorCode(void);
	static UA_Boolean getSimulatedIsArcOn(void);
	
	private:
	int receive(MultiSerial* channel);
	esp_err_t ReadJob(uint8_t JobNumber);
	esp_err_t ComTo_TIG4(uint8_t cmd);
	esp_err_t DataTo_TIG4(uint8_t cmd, uint8_t* data);
	esp_err_t activateRX();
	esp_err_t activateTX();
	static const char* TAG;
	WeldingMachine* hw_wm;
};

extern RS422_Task* RS422;

#endif /* COMPONENTS_RS422_TASK_H_ */