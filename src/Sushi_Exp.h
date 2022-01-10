/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//(1)Header name
//            Sushi_Exp.h
//(2)Note
//            
//(3)History
//            Rev.0   2022/01/03   Keisuke Hamada
/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
#ifndef SUSHI_EXP_H
#define SUSHI_EXP_H


/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//
//	Include
//
/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
#include <Arduino.h>


/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//
//	Definition
//
/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//Signal infomation
#define SIGNAL_ON  (1)
#define SIGNAL_OFF (0)

//Control infomation
#define INIT_VALUE       (0)
#define THRESHOLD_NUMBER (-1)

//Delay infomation
#define DELAY_TIME (1)

//Pin infomation
#define IO_PINS_ARRAY_SIZE   (8)
#define CLOCK_PINS_NUMBER    (8)
#define DATA_BUS_PINS_NUMBER (8)

//Return value
#define PROCESSING_OK          (0)
#define PIN_NUMBER_ERROR       (-1)
#define CHANGE_STATE_ERROR     (-2)
#define ARGUMENT_ERROR         (-3)
#define NULL_SET_ERROR         (-2)
#define SERIAL_NOT_VALID_ERROR (-1)

//Action mode
#define SOURCE_MODE (0)
#define SINK_MODE   (1)

//Show message
#define SHOW_MESSAGE_1 ("/* CLOCK_PIN information */")
#define SHOW_MESSAGE_2 ("/* DATA_PIN information */")
#define SHOW_MESSAGE_3 ("/* RESET_PIN information */")
#define SHOW_MESSAGE_4 ("/* ACTION_SW information */")

/* Uncomment if you want to use */
/* Clock pin */
//#define CLK_A1  (15)
//#define CLK_A2  (2)
//#define CLK_B   (4)
//#define CLK_C   (5)
//#define CLK_D   (18)
//#define CLK_E   (19)
//#define CLK_F   (21)
//#define CLK_G   (22)

/* Data pin */
//#define DATA_0  (13)
//#define DATA_1  (12)
//#define DATA_2  (14)
//#define DATA_3  (27)
//#define DATA_4  (26)
//#define DATA_5  (25)
//#define DATA_6  (33)
//#define DATA_7  (32)

/* Reset pin */
//#define RESET   (23)


/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//
//	Struct
//
/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
typedef struct pin_info
{
	int   clk_pin_assignee[CLOCK_PINS_NUMBER];
	int   data_pin_assignee[DATA_BUS_PINS_NUMBER];
	
	char* clk_pin_name[CLOCK_PINS_NUMBER];
	char* data_pin_name[DATA_BUS_PINS_NUMBER];
} PIN_INFO;


/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//
//	Enum
//
/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
typedef enum data_pins
{
	DATA_0 = 0,
	DATA_1,
	DATA_2,
	DATA_3,
	DATA_4,
	DATA_5,
	DATA_6,
	DATA_7,
	DATA_MAX
} DATA_PINS;

typedef enum clock_pins
{
	CLOCK_A1 = 0,
	CLOCK_A2,
	CLOCK_B,
	CLOCK_C,
	CLOCK_D,
	CLOCK_E,
	CLOCK_F,
	CLOCK_G,
	CLOCK_MAX
} CLOCK_PINS;


/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//
//	Class
//
/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
class Sushi_exp
{
	public:
		/* Constructor */
		Sushi_exp();
		Sushi_exp(int);
		Sushi_exp(int, int, int, int, int, int, int, int, int,
				  int, int, int, int, int, int, int, int, int);
		
		/* Destructor */
		~Sushi_exp();
		
		/* Setter method */
		void Set_ClockPins(int, int, int, int, int, int, int, int);
		void Set_DataPins(int, int, int, int, int, int, int, int);
		void Set_ResetPin(int);
		void Set_ActionSw(int);
		
		/* Getter method */
		int Get_ClockPin(int);
		int Get_DataPin(int);
		int Get_ResetPin();
		int Get_ActionSw();
		char* Get_ClockPin_Name(int);
		char* Get_DataPin_Name(int);
		
		/* All Data pin control method */
		int On_DataPins();
		int Off_DataPins();
		
		/* Any Data pin control method */
		int On_DataPin(int);
		int Off_DataPin(int);
		
		/* Any Data pin control method for binary*/
		int On_DataPin_Binary(int);
		int Off_DataPin_Binary(int);
		
		/* Specific Data pin control method */
		int On_DataPin0();
		int On_DataPin1();
		int On_DataPin2();
		int On_DataPin3();
		int On_DataPin4();
		int On_DataPin5();
		int On_DataPin6();
		int On_DataPin7();
		int Off_DataPin0();
		int Off_DataPin1();
		int Off_DataPin2();
		int Off_DataPin3();
		int Off_DataPin4();
		int Off_DataPin5();
		int Off_DataPin6();
		int Off_DataPin7();
		
		/* Any Clock pin control method */
		void Output_ClockPin(int);
		
		/* Specific Clock pin control method */
		void Output_ClockPinA1();
		void Output_ClockPinA2();
		void Output_ClockPinB();
		void Output_ClockPinC();
		void Output_ClockPinD();
		void Output_ClockPinE();
		void Output_ClockPinF();
		void Output_ClockPinG();
		
		/* Reset IC method */
		int Reset_Ic();
		
		/* Show infomation method */
		int Show_Infomation();
	
	private:
		int clk_pin[IO_PINS_ARRAY_SIZE];
		int data_pin[IO_PINS_ARRAY_SIZE];
		int reset_pin;
		int action_sw;
		
		 /* Initialization method */
		void Pins_Init(int*, int, int, int, int, int, int, int, int);
		void Null_Set_Array();
		
		/* Pin control method */
		void Supply_Clock(int);
		int Change_PinState(int, int);
};

#endif