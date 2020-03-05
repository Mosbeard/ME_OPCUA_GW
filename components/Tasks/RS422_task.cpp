/*
 * RS422_task.h
 *
 *  Created on: Aug 08, 2019
 *      Author: graf
 */

#include "RS422_task.h"
#include "WeldingMachine.h"
#include <cstdlib>
#include "esp_log.h"
#include "MultiSerial.h"

 // General register set
#define RHR       0x00    // Receive Holding Register - R
#define THR       0x00    // Transmit Holding Register - W
#define IER       0x01    // Interrupt Enable Register - W
#define FCR       0x02    // FIFO Control Register - W
#define IIR       0x02    // Interrupt Identification Register - R
#define LCR       0x03    // Line Control Register - R/W
#define MCR       0x04    // Modem Control Register - R/W
#define LSR       0x05    // Line Status Register - R
#define MSR       0x06    // Modem Status Register - R
#define SPR       0x07    // Scratchpad Register - R/W
#define TCR       0x06    // Transmission Control Register- R/W
#define TLR       0x07    // Trigger Level Register- R/W
#define TXLVL     0x08    // Transmitter FIFO Level Register - R
#define RXLVL     0x09    // Receiver FIFO Level Register- R
#define IODir     0x0A    // GPIO Direction Register - R/W
#define IOState   0x0B    // GPIO State Register - R/W
#define IOIntEna  0x0C    // GPIO Interrupt Enable Register - R/W
#define IOControl 0x0E    // GPIO Control Register - R/W
#define EFCR      0x0F    // Extra Features Control Register- R/W
//CTS ist immer HIGH -> SC16IS752 sendet sofort, sobald ins Register THR geschrieben wird
//RTS ist nach RESET HIGH MCR[1]=0 -> tx aktiv, rx inaktiv; MCR[1]=1 -> tx inaktiv, rx aktiv

 
#define SC16IS752_IIR_MASK	0x3F   // 0011 1111 -> 63 IIR mask, only the first 6 bits of IIR defines the intr type
#define SC16IS752_INTR_GPIO (gpio_num_t) 25
#define TIGJOBSIZE			47 // byte Size of one job collection
#define MAX_JOB				20
#define TIG_PARAMS_NR		23
#define RHR_INTR			4

// Simple instruction for TIG4 (initiated by PC)    one byte instruction
//-------------------------------------
#define ASK_FAULTCODE       (unsigned char) 1  // b7.:VRD, b6.U-Leelauf:, b5.:ACSychron, b4.:WasserDruck, b3.LEM:, b2.:NTC, b1.:ÜSW, b0.:Störung
#define IGNORE_FAULTCODE    (unsigned char) 2   // n.u.
#define DO_DATPOLL_OFF      (unsigned char) 3   // n.u. Disable rxdataPolling
#define DO_DATPOLL_ON       (unsigned char) 4   // n.u. Enable rxdataPolling
#define SET_RXWMODOFF       (unsigned char) 5   // n.u. Disable remote controll
#define SET_RXWMODON        (unsigned char) 6   // n.u. Enable remote controll
#define SAMPLE_DISABLE      (unsigned char) 7   // n.u. Disable rxdata transfer to curve drawing
#define SAMPLE_ENABLE       (unsigned char) 8   // n.u. Enable rxdata transfer for curve drawing (Isoll, ....)

#define ASK_SW_VERS         (unsigned char) 16  // ask Version number of Main Software
#define ASK_INVSTATUS       (unsigned char) 17  // Inverter status  b7.:UOK, b6.:I>0, b5.:Over temperature,  b4.:InverterStart, b3..b0.:Welding cycle
#define ASK_WMODE           (unsigned char) 18  // n.u.
#define ASK_ACTJOB_NR       (unsigned char) 19  // which job is selected tu use
#define ASK_FOCUSEDJOB_NR   (unsigned char) 20  // which job is focused for read or write

// Send field to focused must be done ONE BY ONE using SET_....

#define GET_UNIQUES         (unsigned char) 24  // PC wants get unique parameters
#define GET_COMMON          (unsigned char) 25  // PC wants get common used parameters
#define GET_FOCUSED_FIELD   (unsigned char) 26  // PC wants get a focused rxdata-set of welding parameters
#define GET_FOC_JOB_NAME    (unsigned char) 27  // PC wants get the caracter string of job name


// Ask rxdata form TIG4 (initiated by PC)         one byte instruction + two bytes rxdata
#define ASK_MODSET          (unsigned char) 32  // b7.:AD/DC, b6.:spotting, b5...3.:AutoPulsMode, b2...0.:HandleMode
#define ASK_HF_DIA          (unsigned char) 33  // b7.:--, b6.:--; b5.:--; b4.:Ignition, b3.:DCPulseSofting, b2...0.:WolframDiameter,
#define ASK_TPOINT          (unsigned char) 34  // Punktschweisszeit
#define ASK_ACFORM          (unsigned char) 35  // AC shape
#define ASK_IFRO1           (unsigned char) 36  // TIG Strom1 FrontWert
#define ASK_I2_PERC         (unsigned char) 37  // percent value to calcultae I2. Or I2 if I2Abs is selected inUnique menü
#define ASK_T_TUWARMPULS    (unsigned char) 38  // first byte Tungten warming time fo AC.  second byte Tungten warming time fo DC
#define ASK_I_TUWARMPULS    (unsigned char) 39  // Tungten pre warming current
#define ASK_T_WPWARMPULS    (unsigned char) 40  // first byte Workpiece warming time fo AC.  second byte Workpiece warming time fo DC
#define ASK_I_WPWARMPULS    (unsigned char) 41  // work piece pre warming current
#define ASK_TPREGAS         (unsigned char) 42  // First byte Balance for AC-DC welding, second byte Time of pre gas-flowing
#define ASK_ISTART          (unsigned char) 43  // Start current
#define ASK_TUPSLOPE        (unsigned char) 44  // Time of upsloping from Istart to I1
#define ASK_T1              (unsigned char) 45  // Time of current-1 in slowpulse mode. first byte for AC, second byte for AC 
#define ASK_I2FRONT         (unsigned char) 46  // ----
#define ASK_IFRO3           (unsigned char) 47  // current-3 for combinated SlowSpeed DC pulsing
#define ASK_T2              (unsigned char) 48  // Time of current-2 in slowpulse mode. first byte for AC, second byte for AC 
#define ASK_TACDC           (unsigned char) 49  // first byte Time for DC in combinated AC-DC welding. Second byte Time for AC in combinated AC-DC welding 
#define ASK_TDOWNSLOPE      (unsigned char) 50  // DownSlopeTime form I1 (or I2) to Iend
#define ASK_IEND            (unsigned char) 51  // Final current
#define ASK_TPOSTGAS        (unsigned char) 52  // Time of post gas-flowing
#define ASK_ACFREQ          (unsigned char) 53  // Frequency of AC welding
#define ASK_BALANCE         (unsigned char) 54  // first byte amplitude balance, second byte time balance of AC welding  
#define ASK_SPPUFREQ        (unsigned char) 55  // SpeedPulse Frequency

#define ASK_NTC             (unsigned char) 64  // actual vaule of NTC Temperature sensor
#define ASK_NTC_OFF         (unsigned char) 65  // over temperature leve of turn off
#define ASK_NTC_BACK        (unsigned char) 66  // temperature level off turn back
#define ASK_ISOLL           (unsigned char) 67  // actual Isoll

#define PC_PROC_READY       (unsigned char) 85  // 0x55 PC sends this code after its process has been finished.

// rxdata form PC to TIG4  (initiated by PC)      one byte instruction + two bytes rxdata
//----------------------------------------
#define SET_FOCUSEDJOB_NR (unsigned char) 128 // where to store or read the field HiByte:RAM, LowByte EEPROM vekotr  
#define SET_ACTJOB_NR     (unsigned char) 129 //

#define SET_MODSET        (unsigned char) 131
#define SET_HF_DIA        (unsigned char) 132
#define SET_TPOINT        (unsigned char) 133
#define SET_ACFORM        (unsigned char) 134
#define SET_IFRO1         (unsigned char) 135
#define SET_I2_PERC       (unsigned char) 136
#define SET_T_TUWARMPULS  (unsigned char) 137
#define SET_I_TUWARMPULS  (unsigned char) 138
#define SET_T_WPWARMPULS  (unsigned char) 139
#define SET_I_WPWARMPULS  (unsigned char) 140
#define SET_TPREGAS       (unsigned char) 141
#define SET_ISTART        (unsigned char) 142
#define SET_TUPSLOPE      (unsigned char) 143
#define SET_T1            (unsigned char) 144
#define SET_T2            (unsigned char) 145
#define SET_IFRO3         (unsigned char) 146
#define SET_TACDC         (unsigned char) 147
#define SET_TDOWNSLOPE    (unsigned char) 148
#define SET_IEND          (unsigned char) 149
#define SET_TPOSTGAS      (unsigned char) 150
#define SET_ACFREQ        (unsigned char) 151
#define SET_BALANCE       (unsigned char) 152
#define SET_SPPUFREQ      (unsigned char) 153

#define SET_JOBCHR_01     (unsigned char) 160 // set first  two characters
#define SET_JOBCHR_23     (unsigned char) 161 // set second two characters
#define SET_JOBCHR_45     (unsigned char) 163 // set third  two characters
#define SET_JOBCHR_67     (unsigned char) 164 // set fourth two characters
#define SET_JOBCHR_89     (unsigned char) 165 // set fifth  two characters

//                                        170 -----is reserved for 0xAA
#define  SET_NTC_OFF      (unsigned char) 171
#define  SET_NTC_BACK     (unsigned char) 172

//----------------------------------------
// rxdata form TIG4 to PC (initiated by TIG4)   one byte instruction + two bytes rxdata
//-----------------------------------------
#define DAT_SW_VERS       ASK_SW_VERS		// (unsigned char) 16  // ask Version number of Main Software	
#define DAT_INVSTATUS     ASK_INVSTATUS     // (unsigned char) 17  // Inverter status  b7.:UOK, b6.:I>0, b5.:Over temperature,  b4.:InverterStart, b3..b0.:Welding cycle
#define DAT_WMODE         ASK_WMODE         // (unsigned char) 18  // n.u.
#define DAT_FAULTCODE     ASK_FAULTCODE		// (unsigned char) 1  // b7.:VRD, b6.U-Leelauf:, b5.:ACSychron, b4.:WasserDruck, b3.LEM:, b2.:NTC, b1.:ÜSW, b0.:Störung
#define DAT_ACTJOB_NR     ASK_ACTJOB_NR     // (unsigned char) 19  // which job is selected tu use // idnex number of actual job
#define DAT_FOCUSEDJOB_NR ASK_FOCUSEDJOB_NR // (unsigned char) 20  // which job is focused for read or write// index number of focused job

#define DAT_MODSET        ASK_MODSET        // (unsigned char) 32  // b7.:AD/DC, b6.:spotting, b5...3.:AutoPulsMode, b2...0.:HandleMode // ?32
#define DAT_HF_DIA        ASK_HF_DIA		// (unsigned char) 33  // b7.:--, b6.:--; b5.:--; b4.:Ignition, b3.:DCPulseSofting, b2...0.:WolframDiameter,
#define DAT_TPOINT        ASK_TPOINT		// (unsigned char) 34  // Punktschweisszeit
#define DAT_ACFORM        ASK_ACFORM		// (unsigned char) 35  // AC shape
#define DAT_IFRO1         ASK_IFRO1			// (unsigned char) 36  // TIG Strom1 FrontWert
#define DAT_I2_PERC       ASK_I2_PERC		// (unsigned char) 37  // percent value to calcultae I2. Or I2 if I2Abs is selected inUnique menü
#define DAT_T_TUWARMPULS  ASK_T_TUWARMPULS	// (unsigned char) 38  // first byte Tungten warming time fo AC.  second byte Tungten warming time fo DC
#define DAT_I_TUWARMPULS  ASK_I_TUWARMPULS	// (unsigned char) 39  // Tungten pre warming current
#define DAT_T_WPWARMPULS  ASK_T_WPWARMPULS	// (unsigned char) 40  // first byte Workpiece warming time fo AC.  second byte Workpiece warming time fo DC
#define DAT_I_WPWARMPULS  ASK_I_WPWARMPULS	// (unsigned char) 41  // work piece pre warming current
#define DAT_TPREGAS       ASK_TPREGAS		// (unsigned char) 42  // First byte Balance for AC-DC welding, second byte Time of pre gas-flowing
#define DAT_ISTART        ASK_ISTART		// (unsigned char) 43  // Start current
#define DAT_TUPSLOPE      ASK_TUPSLOPE		// (unsigned char) 44  // Time of upsloping from Istart to I1
#define DAT_T1            ASK_T1			// (unsigned char) 45  // Time of current-1 in slowpulse mode. first byte for AC, second byte for AC 
#define DAT_T2            ASK_T2			// (unsigned char) 46  // ----
#define DAT_IFRO3         ASK_IFRO3			// (unsigned char) 47  // current-3 for combinated SlowSpeed DC pulsing
//#define                 146
#define DAT_TACDC         ASK_TACDC			// (unsigned char) 49  // first byte Time for DC in combinated AC-DC welding. Second byte Time for AC in combinated AC-DC welding 
#define DAT_TDOWNSLOPE    ASK_TDOWNSLOPE	// (unsigned char) 50  // DownSlopeTime form I1 (or I2) to Iend
#define DAT_IEND          ASK_IEND			// (unsigned char) 51  // Final current
#define DAT_TPOSTGAS      ASK_TPOSTGAS		// (unsigned char) 52  // Time of post gas-flowing
#define DAT_ACFREQ        ASK_ACFREQ		// (unsigned char) 53  // Frequency of AC welding
#define DAT_BALANCE       ASK_BALANCE		// (unsigned char) 54  // first byte amplitude balance, second byte time balance of AC welding  
#define DAT_SPPUFREQ      ASK_SPPUFREQ		// (unsigned char) 55  // SpeedPulse Frequency      // ?55

#define DAT_TURNON        0x55          // 85                     

#define DAT_JOBCHR_01     SET_JOBCHR_01		// (unsigned char) 160 // set first  two characters// ?160
#define DAT_JOBCHR_23     SET_JOBCHR_23		// (unsigned char) 161 // set second two characters// ?161
#define DAT_JOBCHR_45     SET_JOBCHR_45		// (unsigned char) 163 // set third  two characters// ?162
#define DAT_JOBCHR_67     SET_JOBCHR_67		// (unsigned char) 164 // set fourth two characters// ?163
#define DAT_JOBCHR_89     SET_JOBCHR_89		// (unsigned char) 165 // set fifth  two characters// ?164

//                                         170 0xAA is reserved

#define DAT_NTC             ASK_NTC			// (unsigned char) 64  // actual vaule of NTC Temperature sensor
#define DAT_NTC_OFF         ASK_NTC_OFF		// (unsigned char) 65  // over temperature leve of turn off
#define DAT_NTC_BACK        ASK_NTC_BACK	// (unsigned char) 66  // temperature level off turn back
#define DAT_ISOLL           ASK_ISOLL		// (unsigned char) 67  // actual Isoll

#define DAT_IFSAMPREQUEST   (unsigned char) 240 // n.u.
#define POINT_TRANSFERSTART (unsigned char) 241 // n.u.
#define POINT_ARRAYRESET    (unsigned char) 242 // n.u.
#define POINT_ISOLL         (unsigned char) 243 // n.u.
#define POINT_LET_DRAW      (unsigned char) 244 // n.u.

#define TX_BYTES            (unsigned char) 2   //
#define BYTESTO_TRANSFER    (TX_BYTES + 1)

//#define T_FORNEXT_TX        (unsigned char) 3

#define RTS_SET_MASK	(uint8_t) (0x02)
#define RTS_UNSET_MASK	(uint8_t) (~0x02)


const char* RS422_Task::TAG = "RS422_TASK";

RS422_Task::RS422_Task() : Task("RS422_Task", 10000, 5)
{
	hw_wm = new WeldingMachine();
}
	
void RS422_Task::run(void *data) 
{	
	//sc16is752_ir_queue_t queueIntr;
	//uint8_t* job_buf = (uint8_t*) malloc(69);			// 23 Parameter * 3 bytes rxdata = 69 bytes rxdata per job
	//uint8_t* rx_rxdata = (uint8_t*)malloc(3);
	uint8_t rxdata[3]; rxdata[0] = 0; rxdata[1] = 0; rxdata[2] = 0;
	uint8_t msg = 0;
	int16_t rxword = 0;
	uint8_t _rxlvl = 0;
	gpio_config_t gpioConf;

	gpioConf.pin_bit_mask	= GPIO_SEL_25;
	gpioConf.mode			= GPIO_MODE_INPUT;
	gpioConf.pull_up_en = GPIO_PULLUP_ENABLE;
	gpioConf.pull_down_en = GPIO_PULLDOWN_DISABLE;
	gpioConf.intr_type = GPIO_INTR_NEGEDGE;   //GPIO_INTR_LOW_LEVEL; GPIO_INTR_NEGEDGE;
	//gpio_config(&gpioConf);
	
	//gpio_install_isr_service(0);
	//gpio_isr_handler_add(SC16IS752_INTR_GPIO, RS422_Task::sc16is752_isr, NULL);
	
	SC16IS752_CH_B->begin(BAUD_RATE_B);
	//SC16IS752_CH_B->rxFIFOdisable();
	//vTaskDelay(1000 / portTICK_PERIOD_MS);
	
	ReadJob(3);
	//ComTo_TIG4(GET_COMMON);

	while (1)
	{		
		//ESP_LOGD(TAG, "Waiting on queue...");
		//BaseType_t rc = xQueueReceive(RS422_Task::sc16is752_ir_queue, &queueIntr, 1000 / portTICK_PERIOD_MS);
		//ESP_LOGD(TAG, "Woke from queue wait: %d, id: %d, intr: %d", rc, queueIntr.id, queueIntr.intr);
		//if (!SC16IS752_CH_B->ReadRegister(RXLVL)) {
		//	ComTo_TIG4(GET_COMMON);
		//}
		_rxlvl = SC16IS752_CH_B->ReadRegister(RXLVL);
		if (_rxlvl > 2 && _rxlvl < 65 ) {
			rxdata[0] = SC16IS752_CH_B->read();
			//rxdata[1] = SC16IS752_CH_B->read();
			//rxdata[2] = SC16IS752_CH_B->read();
			//if (SC16IS752_CH_B->ReadRegister(RXLVL) > 0) SC16IS752_CH_B->resetRXfifo();
			if (rxdata[0] < DAT_IFSAMPREQUEST) {
				msg = rxdata[0];			//Command
				rxword = rxdata[1] * 256;		//High byte
				rxword = rxword + rxdata[2];	//Low byte	

				switch (msg) {
				case DAT_INVSTATUS:
					ESP_LOGI(TAG, "DAT_INVSTATUS received...");
					rxdata[1] = SC16IS752_CH_B->read();
					rxdata[2] = SC16IS752_CH_B->read();
					break;
				case DAT_SW_VERS:
					ESP_LOGI(TAG, "DAT_SW_VERS received...");
					rxdata[1] = SC16IS752_CH_B->read();
					rxdata[2] = SC16IS752_CH_B->read();
					break;
					//case DAT_WMODE: break;
				case DAT_FAULTCODE:
					ESP_LOGI(TAG, "DAT_FAULTCODE received...");
					rxdata[1] = SC16IS752_CH_B->read();
					rxdata[2] = SC16IS752_CH_B->read();
					break;
				case DAT_MODSET:			//JOB-PARAMETER 1
					ESP_LOGI(TAG, "DAT_MODSET received...");
					rxdata[1] = SC16IS752_CH_B->read();
					rxdata[2] = SC16IS752_CH_B->read();
					rxword = rxdata[1] * 256;		//High byte
					rxword = rxword + rxdata[2];	//Low byte	
					ESP_LOGI(TAG, "rxword is: %d", rxword);
					break;
				case DAT_HF_DIA:				//JOB-PARAMETER 2
					ESP_LOGI(TAG, "DAT_HF_DIA received...");
					rxdata[1] = SC16IS752_CH_B->read();
					rxdata[2] = SC16IS752_CH_B->read();
					rxword = rxdata[1] * 256;		//High byte
					rxword = rxword + rxdata[2];	//Low byte	
					ESP_LOGI(TAG, "rxword is: %d", rxword);
					break;
				case DAT_TPOINT:			//JOB-PARAMETER 3
					ESP_LOGI(TAG, "DAT_TPOINT received...");
					rxdata[1] = SC16IS752_CH_B->read();
					rxdata[2] = SC16IS752_CH_B->read();
					rxword = rxdata[1] * 256;		//High byte
					rxword = rxword + rxdata[2];	//Low byte	
					ESP_LOGI(TAG, "rxword is: %d", rxword);
					break;
				case DAT_ACFORM:			//JOB-PARAMETER 4
					ESP_LOGI(TAG, "DAT_ACFORM received...");
					rxdata[1] = SC16IS752_CH_B->read();
					rxdata[2] = SC16IS752_CH_B->read();
					rxword = rxdata[1] * 256;		//High byte
					rxword = rxword + rxdata[2];	//Low byte	
					ESP_LOGI(TAG, "rxword is: %d", rxword);
					break;
				case DAT_IFRO1:				//JOB-PARAMETER 5
					ESP_LOGI(TAG, "DAT_IFRO1 received...");
					rxdata[1] = SC16IS752_CH_B->read();
					rxdata[2] = SC16IS752_CH_B->read();
					rxword = rxdata[1] * 256;		//High byte
					rxword = rxword + rxdata[2];	//Low byte	
					ESP_LOGI(TAG, "rxword is: %d", rxword);
					break;
				case DAT_I2_PERC:			//JOB-PARAMETER 6
					ESP_LOGI(TAG, "DAT_I2_PERC received...");
					rxdata[1] = SC16IS752_CH_B->read();
					rxdata[2] = SC16IS752_CH_B->read();
					rxword = rxdata[1] * 256;		//High byte
					rxword = rxword + rxdata[2];	//Low byte	
					ESP_LOGI(TAG, "rxword is: %d", rxword);
					break;
				case DAT_T_TUWARMPULS:		//JOB-PARAMETER 7
					ESP_LOGI(TAG, "DAT_T_TUWARMPULS received...");
					rxdata[1] = SC16IS752_CH_B->read();
					rxdata[2] = SC16IS752_CH_B->read();
					rxword = rxdata[1] * 256;		//High byte
					rxword = rxword + rxdata[2];	//Low byte	
					ESP_LOGI(TAG, "rxword is: %d", rxword);
					break;
				case DAT_I_TUWARMPULS:		//JOB-PARAMETER 8
					ESP_LOGI(TAG, "DAT_I_TUWARMPULS received...");
					rxdata[1] = SC16IS752_CH_B->read();
					rxdata[2] = SC16IS752_CH_B->read();
					rxword = rxdata[1] * 256;		//High byte
					rxword = rxword + rxdata[2];	//Low byte	
					ESP_LOGI(TAG, "rxword is: %d", rxword);
					break;
				case DAT_T_WPWARMPULS:		//JOB-PARAMETER 9
					ESP_LOGI(TAG, "DAT_T_WPWARMPULS received...");
					rxdata[1] = SC16IS752_CH_B->read();
					rxdata[2] = SC16IS752_CH_B->read();
					rxword = rxdata[1] * 256;		//High byte
					rxword = rxword + rxdata[2];	//Low byte	
					ESP_LOGI(TAG, "rxword is: %d", rxword);
					break;
				case DAT_I_WPWARMPULS:		//JOB-PARAMETER 10
					ESP_LOGI(TAG, "DAT_I_TUWARMPULS received...");
					rxdata[1] = SC16IS752_CH_B->read();
					rxdata[2] = SC16IS752_CH_B->read();
					rxword = rxdata[1] * 256;		//High byte
					rxword = rxword + rxdata[2];	//Low byte	
					ESP_LOGI(TAG, "rxword is: %d", rxword);
					break;
				case DAT_TPREGAS:			//JOB-PARAMETER 11
					ESP_LOGI(TAG, "DAT_TPREGAS received...");
					rxdata[1] = SC16IS752_CH_B->read();
					rxdata[2] = SC16IS752_CH_B->read();
					rxword = rxdata[1] * 256;		//High byte
					rxword = rxword + rxdata[2];	//Low byte	
					ESP_LOGI(TAG, "rxword is: %d", rxword);
					break;
				case DAT_ISTART:			//JOB-PARAMETER 12
					ESP_LOGI(TAG, "DAT_ISTART received...");
					rxdata[1] = SC16IS752_CH_B->read();
					rxdata[2] = SC16IS752_CH_B->read();
					rxword = rxdata[1] * 256;		//High byte
					rxword = rxword + rxdata[2];	//Low byte	
					ESP_LOGI(TAG, "rxword is: %d", rxword);
					break;
				case DAT_TUPSLOPE:			//JOB-PARAMETER 13
					ESP_LOGI(TAG, "DAT_TUPSLOPE received...");
					rxdata[1] = SC16IS752_CH_B->read();
					rxdata[2] = SC16IS752_CH_B->read();
					rxword = rxdata[1] * 256;		//High byte
					rxword = rxword + rxdata[2];	//Low byte	
					ESP_LOGI(TAG, "rxword is: %d", rxword);
					break;
				case DAT_T1:				//JOB-PARAMETER 14
					ESP_LOGI(TAG, "DAT_T1 received...");
					rxdata[1] = SC16IS752_CH_B->read();
					rxdata[2] = SC16IS752_CH_B->read();
					rxword = rxdata[1] * 256;		//High byte
					rxword = rxword + rxdata[2];	//Low byte	
					ESP_LOGI(TAG, "rxword is: %d", rxword);
					break;
				case DAT_IFRO3:				//JOB-PARAMETER 15
					ESP_LOGI(TAG, "DAT_IFRO3 received...");
					rxdata[1] = SC16IS752_CH_B->read();
					rxdata[2] = SC16IS752_CH_B->read();
					rxword = rxdata[1] * 256;		//High byte
					rxword = rxword + rxdata[2];	//Low byte	
					ESP_LOGI(TAG, "rxword is: %d", rxword);
					break;
				case DAT_T2:				//JOB-PARAMETER 16
					ESP_LOGI(TAG, "DAT_T2 received...");
					rxdata[1] = SC16IS752_CH_B->read();
					rxdata[2] = SC16IS752_CH_B->read();
					rxword = rxdata[1] * 256;		//High byte
					rxword = rxword + rxdata[2];	//Low byte	
					ESP_LOGI(TAG, "rxword is: %d", rxword);
					break;
				case DAT_TACDC:				//JOB-PARAMETER 17
					ESP_LOGI(TAG, "DAT_TACDC received...");
					rxdata[1] = SC16IS752_CH_B->read();
					rxdata[2] = SC16IS752_CH_B->read();
					rxword = rxdata[1] * 256;		//High byte
					rxword = rxword + rxdata[2];	//Low byte	
					ESP_LOGI(TAG, "rxword is: %d", rxword);
					break;
				case DAT_TDOWNSLOPE:		//JOB-PARAMETER 18
					ESP_LOGI(TAG, "DAT_TDOWNSLOPE received...");
					rxdata[1] = SC16IS752_CH_B->read();
					rxdata[2] = SC16IS752_CH_B->read();
					rxword = rxdata[1] * 256;		//High byte
					rxword = rxword + rxdata[2];	//Low byte	
					ESP_LOGI(TAG, "rxword is: %d", rxword);
					break;
				case DAT_IEND:				//JOB-PARAMETER 19
					ESP_LOGI(TAG, "DAT_IEND received...");
					rxdata[1] = SC16IS752_CH_B->read();
					rxdata[2] = SC16IS752_CH_B->read();
					rxword = rxdata[1] * 256;		//High byte
					rxword = rxword + rxdata[2];	//Low byte	
					ESP_LOGI(TAG, "rxword is: %d", rxword);
					break;
				case DAT_TPOSTGAS:			//JOB-PARAMETER 20
					ESP_LOGI(TAG, "DAT_TPOSTGAS received...");
					rxdata[1] = SC16IS752_CH_B->read();
					rxdata[2] = SC16IS752_CH_B->read();
					rxword = rxdata[1] * 256;		//High byte
					rxword = rxword + rxdata[2];	//Low byte	
					ESP_LOGI(TAG, "rxword is: %d", rxword);
					break;
				case DAT_ACFREQ:			//JOB-PARAMETER 21
					ESP_LOGI(TAG, "DAT_ACFREQ received...");
					rxdata[1] = SC16IS752_CH_B->read();
					rxdata[2] = SC16IS752_CH_B->read();
					rxword = rxdata[1] * 256;		//High byte
					rxword = rxword + rxdata[2];	//Low byte	
					ESP_LOGI(TAG, "rxword is: %d", rxword);
					break;
				case DAT_BALANCE:			//JOB-PARAMETER 22
					ESP_LOGI(TAG, "DAT_BALANCE received...");
					rxdata[1] = SC16IS752_CH_B->read();
					rxdata[2] = SC16IS752_CH_B->read();
					rxword = rxdata[1] * 256;		//High byte
					rxword = rxword + rxdata[2];	//Low byte	
					ESP_LOGI(TAG, "rxword is: %d", rxword);
					break;
				case DAT_SPPUFREQ:			//JOB-PARAMETER 23
					ESP_LOGI(TAG, "DAT_SPPUFREQ received...");
					rxdata[1] = SC16IS752_CH_B->read();
					rxdata[2] = SC16IS752_CH_B->read();
					rxword = rxdata[1] * 256;		//High byte
					rxword = rxword + rxdata[2];	//Low byte	
					ESP_LOGI(TAG, "rxword is: %d", rxword);
					break;
				case DAT_FOCUSEDJOB_NR:
					ESP_LOGI(TAG, "DAT_FOCUSEDJOB_NR received...");
					rxdata[1] = SC16IS752_CH_B->read();
					rxdata[2] = SC16IS752_CH_B->read();
					rxword = rxdata[1] * 256;		//High byte
					rxword = rxword + rxdata[2];	//Low byte	
					ESP_LOGI(TAG, "rxword is: %d", rxword);
					break;
				case DAT_ACTJOB_NR:
					ESP_LOGI(TAG, "DAT_ACTJOB_NR received...");
					rxdata[1] = SC16IS752_CH_B->read();
					rxdata[2] = SC16IS752_CH_B->read();
					rxword = rxdata[1] * 256;		//High byte
					rxword = rxword + rxdata[2];	//Low byte	
					ESP_LOGI(TAG, "rxword is: %d", rxword);
					break;
					//----------------------------------------------------------------------------------------------------
				case DAT_JOBCHR_01:
					ESP_LOGI(TAG, "DAT_JOBCHR_01 received...");
					rxdata[1] = SC16IS752_CH_B->read();
					rxdata[2] = SC16IS752_CH_B->read();
					rxword = rxdata[1] * 256;		//High byte
					rxword = rxword + rxdata[2];	//Low byte	
					ESP_LOGI(TAG, "rxword is: %d", rxword);
					break;
				case DAT_JOBCHR_23:
					ESP_LOGI(TAG, "DAT_JOBCHR_23 received...");
					rxdata[1] = SC16IS752_CH_B->read();
					rxdata[2] = SC16IS752_CH_B->read();
					rxword = rxdata[1] * 256;		//High byte
					rxword = rxword + rxdata[2];	//Low byte	
					ESP_LOGI(TAG, "rxword is: %d", rxword);// append string sequential
					break;
				case DAT_JOBCHR_45:
					ESP_LOGI(TAG, "DAT_JOBCHR_45 received...");
					rxdata[1] = SC16IS752_CH_B->read();
					rxdata[2] = SC16IS752_CH_B->read();
					rxword = rxdata[1] * 256;		//High byte
					rxword = rxword + rxdata[2];	//Low byte	
					ESP_LOGI(TAG, "rxword is: %d", rxword);
					break;
				case DAT_JOBCHR_67:
					ESP_LOGI(TAG, "DAT_JOBCHR_67 received...");
					rxdata[1] = SC16IS752_CH_B->read();
					rxdata[2] = SC16IS752_CH_B->read();
					rxword = rxdata[1] * 256;		//High byte
					rxword = rxword + rxdata[2];	//Low byte	
					ESP_LOGI(TAG, "rxword is: %d", rxword);
					break;
				case DAT_JOBCHR_89:
					ESP_LOGI(TAG, "DAT_JOBCHR_89 received...");
					rxdata[1] = SC16IS752_CH_B->read();
					rxdata[2] = SC16IS752_CH_B->read();
					rxword = rxdata[1] * 256;		//High byte
					rxword = rxword + rxdata[2];	//Low byte	
					ESP_LOGI(TAG, "rxword is: %d", rxword);
					break;
					//---------------------------------------------------------------------------------------------------
				case DAT_TURNON:
					ESP_LOGI(TAG, "DAT_TURNON received...");
					rxdata[1] = SC16IS752_CH_B->read();
					rxdata[2] = SC16IS752_CH_B->read();
					rxword = rxdata[1] * 256;		//High byte
					rxword = rxword + rxdata[2];	//Low byte	
					ESP_LOGI(TAG, "rxword is: %d", rxword);
					break;
					//----------
				case DAT_NTC:
					ESP_LOGI(TAG, "DAT_NTC received...");
					rxdata[1] = SC16IS752_CH_B->read();
					rxdata[2] = SC16IS752_CH_B->read();
					rxword = rxdata[1] * 256;		//High byte
					rxword = rxword + rxdata[2];	//Low byte	
					ESP_LOGI(TAG, "rxword is: %d", rxword);
					break;

				case DAT_ISOLL:
					ESP_LOGI(TAG, "DAT_ISOLL received...");
					rxdata[1] = SC16IS752_CH_B->read();
					rxdata[2] = SC16IS752_CH_B->read();
					rxword = rxdata[1] * 256;		//High byte
					rxword = rxword + rxdata[2];	//Low byte	
					ESP_LOGI(TAG, "rxword is: %d", rxword);
					break;
					//---------------------------------------------
				case DAT_NTC_BACK:
					ESP_LOGI(TAG, "DAT_NTC_BACK received...");
					rxdata[1] = SC16IS752_CH_B->read();
					rxdata[2] = SC16IS752_CH_B->read();
					rxword = rxdata[1] * 256;		//High byte
					rxword = rxword + rxdata[2];	//Low byte	
					ESP_LOGI(TAG, "rxword is: %d", rxword);
					break;
				case DAT_NTC_OFF:  // 
					ESP_LOGI(TAG, "DAT_NTC_OFF received...");
					rxdata[1] = SC16IS752_CH_B->read();
					rxdata[2] = SC16IS752_CH_B->read();
					rxword = rxdata[1] * 256;		//High byte
					rxword = rxword + rxdata[2];	//Low byte	
					ESP_LOGI(TAG, "rxword is: %d", rxword);
					break;
				default:
					ESP_LOGI(TAG, "NO MESSAGE received... msg: %d", msg);
					break;
				}
				rxdata[0] = 0; rxdata[1] = 0; rxdata[2] = 0;
				msg = 0;
				rxword = 0;
			}
		}
		
	}
}

UA_Tig4ErrorCode RS422_Task::getErrorCode(void) {
	UA_Tig4ErrorCode ret;
	//ret = RS422->ComTo_TIG4(ASK_FAULTCODE);
	ret = UA_TIG4ERRORCODE_F;
	return ret;
}

UA_Tig4ErrorCode RS422_Task::getSimulatedErrorCode(void) {
	UA_Tig4ErrorCode ret;
	static bool sign = false;
	if (sign) {
		ret = UA_TIG4ERRORCODE_C;
	}
	else ret = UA_TIG4ERRORCODE_F;
	sign = !sign;
	return ret;
}

UA_Boolean RS422_Task::getSimulatedIsArcOn(void) {
	UA_Boolean ret;
	static bool sign = false;
	if (sign) {
		ret = true;
	}
	else ret = false;
	sign = !sign;
	return ret;
}

esp_err_t RS422_Task::ReadJob(uint8_t JobNumber)
{
	esp_err_t ret;
	uint8_t txdata[2];
	txdata[0] = 0;
	txdata[1] = JobNumber;
	
	ESP_LOGI(TAG, "RXLVL is: %d", SC16IS752_CH_B->ReadRegister(RXLVL));
	ret = DataTo_TIG4(SET_FOCUSEDJOB_NR, txdata);
	vTaskDelay(500 / portTICK_PERIOD_MS);
	ret = ComTo_TIG4(GET_FOCUSED_FIELD);

	
	return ret;
}

esp_err_t RS422_Task::ComTo_TIG4(uint8_t cmd) 
{
	esp_err_t ret;
	ret = activateTX();
	ret = SC16IS752_CH_B->write(cmd);
	while (SC16IS752_CH_B->ReadRegister(LSR) >> 6 != 0x01);
	ret = activateRX();
	ESP_LOGI(TAG, "ComTo_TIG4 was called...");
	return ret;
}

esp_err_t RS422_Task::DataTo_TIG4(uint8_t cmd, uint8_t* txdata) 
{
	esp_err_t ret;
	ret = activateTX();
	ret = SC16IS752_CH_B->write(cmd);
	ret = SC16IS752_CH_B->write(txdata[0] / 256);
	ret = SC16IS752_CH_B->write(txdata[1] & 0xFF);
	while (SC16IS752_CH_B->ReadRegister(LSR) >> 6 != 0x01);
	ret = activateRX();
	ESP_LOGI(TAG, "DataTo_TIG4 was called...");
	return ret;
}

QueueHandle_t RS422_Task::sc16is752_ir_queue = xQueueCreate(20, sizeof(sc16is752_ir_queue_t));

void RS422_Task::sc16is752_isr(void* args)
{
	ESP_LOGD(TAG, "sc16is752_isr was called...");
	static uint32_t id = 0;
	sc16is752_ir_queue_t queue;
	queue.intr = (sc16is752_ir_t)(SC16IS752_CH_B->ReadRegister(IIR) & SC16IS752_IIR_MASK);
	queue.id = id;
	id++;
	xQueueSendToBackFromISR(RS422_Task::sc16is752_ir_queue, &queue, NULL);
}

int RS422_Task::receive(MultiSerial* channel)
{
	byte cs = 0;
	byte test_pi2_tg[19];
	while (channel->read() != START) ;
	test_pi2_tg[0] = START;
	
	for (int i = 1; i < 19; i++)
	{
		test_pi2_tg[i] = channel->read();		
	}
	
	for (int i = 0; i < 19; ++i)
	{
		ESP_LOGI(TAG, "array test_pi2_tg[%d]: %x", i, test_pi2_tg[i]);
	}
	
	
	if (test_pi2_tg[18] == END)
	{
		for (int i = 1; i < 17; ++i) 
		{
			cs += test_pi2_tg[i];
		}
	}
	else
	{
		ESP_LOGI(TAG, "receive: end character error..");
		hw_wm->set_c_current((rand() % 100) + 1);
		ESP_LOGI(TAG, "c_current: %d", hw_wm->get_c_current());
		hw_wm->set_c_voltage((rand() % 100) + 1);
		ESP_LOGI(TAG, "c_voltage: %d", hw_wm->get_c_voltage());
		
		channel->WriteRegister(FCR, channel->ReadRegister(FCR) | RS_RX_FIFO);
		ESP_LOGI(TAG, "RX FIFO reseted");
		
		return 0;
	}
	
	if (cs == test_pi2_tg[17])
	{
		uint16_t rc_val = ((0 | test_pi2_tg[4]) << 8) | test_pi2_tg[3];
		ESP_LOGI(TAG, "rc_val: %d", rc_val);
		
		float f_val = (float) rc_val / 65535.0f * 1000.0f;
		ESP_LOGI(TAG, "f_val after calculation: %f", f_val);
		
		hw_wm->set_c_current((uint16_t) f_val);
		//pri_wm.set_c_current((rand() % 100) + 1);
		ESP_LOGI(TAG, "c_current: %d", hw_wm->get_c_current());
		//c_voltage = ((c_voltage | test_pi2_tg[6]) << 8) | test_pi2_tg[5];
		hw_wm->set_c_voltage((rand() % 100) + 1);
		ESP_LOGI(TAG, "c_voltage: %d", hw_wm->get_c_voltage());
		
		channel->WriteRegister(FCR, channel->ReadRegister(FCR) | RS_RX_FIFO);
		ESP_LOGI(TAG, "RX FIFO reseted");
		
		if_wm->set_c_current(hw_wm->get_c_current());
		if_wm->set_c_voltage(hw_wm->get_c_voltage());		
	}
	else
	{
		ESP_LOGI(TAG, "receive: checksum error..");
		hw_wm->set_c_current((rand() % 100) + 1);
		ESP_LOGI(TAG, "c_current: %d", hw_wm->get_c_current());
		hw_wm->set_c_voltage((rand() % 100) + 1);
		ESP_LOGI(TAG, "c_voltage: %d", hw_wm->get_c_voltage());
		
		channel->WriteRegister(FCR, channel->ReadRegister(FCR) | RS_RX_FIFO);
		ESP_LOGI(TAG, "RX FIFO reseted");
		
		return 0;
	}
	
	return 1;
}

esp_err_t RS422_Task::activateRX() {
	esp_err_t ret;
	uint8_t val;
	val = SC16IS752_CH_B->ReadRegister(MCR);
	val = val | RTS_SET_MASK;
	ret = SC16IS752_CH_B->WriteRegister(MCR, val);
	//ESP_LOGI(TAG, "MCR is: %d", SC16IS752_CH_B->ReadRegister(MCR));
	return ret;
}

esp_err_t RS422_Task::activateTX() {
	esp_err_t ret;
	uint8_t val;
	val = SC16IS752_CH_B->ReadRegister(MCR);
	val = RTS_UNSET_MASK & val;
	ret = SC16IS752_CH_B->WriteRegister(MCR, val);
	//ESP_LOGI(TAG, "MCR is: %d", SC16IS752_CH_B->ReadRegister(MCR));
	return ret;
}

RS422_Task* RS422 = new RS422_Task();