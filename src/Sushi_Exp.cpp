/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//(1)Source file name
//            Sushi_Exp.cpp
//(2)Note
//            
//(3)History
//            Rev.0   2022/01/03   Keisuke Hamada
/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/

#include "Sushi_Exp.h"


/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//(1)Function name
//            Sushi_exp
//(2)Process
//            Create an instance.
//(3)Argument
//            none
//(4)Return
//            none
//(5)Note
//            Constructor
//(6)History
//            Rev.0   2022/01/03   Keisuke Hamada
/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
	
	Sushi_exp::Sushi_exp()
	{
		Null_Set_Array();
		Set_ResetPin(NULL);
		Set_ActionSw(SOURCE_MODE);
	}


/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//(1)Function name
//            Sushi_exp
//(2)Process
//            Set action_sw at the same time.
//(3)Argument
//            action_sw		Action mode of IC(Source or Sink)
//(4)Return
//            none
//(5)Note
//            Constructor
//(6)History
//            Rev.0   2022/01/03   Keisuke Hamada
/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
	
	Sushi_exp::Sushi_exp(int action_sw)
	{
		Null_Set_Array();
		Set_ResetPin(NULL);
		Set_ActionSw(action_sw);
	}


/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//(1)Function name
//            Sushi_exp
//(2)Process
//            Set supply clock pins at the same time.
//(3)Argument
//            clk_pin_A1	Pin number that supplies the clock to A1 port.
//            clk_pin_A2	Pin number that supplies the clock to A2 port.
//            clk_pin_B		Pin number that supplies the clock to B port.
//            clk_pin_C		Pin number that supplies the clock to C port.
//            clk_pin_D		Pin number that supplies the clock to D port.
//            clk_pin_E		Pin number that supplies the clock to E port.
//            clk_pin_F		Pin number that supplies the clock to F port.
//            clk_pin_G		Pin number that supplies the clock to G port.
//            data_pin0		Pin number that controls bit 0.
//            data_pin1		Pin number that controls bit 1.
//            data_pin2		Pin number that controls bit 2.
//            data_pin3		Pin number that controls bit 3.
//            data_pin4		Pin number that controls bit 4.
//            data_pin5		Pin number that controls bit 5.
//            data_pin6		Pin number that controls bit 6.
//            data_pin7		Pin number that controls bit 7.
//            reset_pin		Pin number that reset the expander ic.
//            action_sw		Action mode of IC(Source or Sink)
//(4)Return
//            none
//(5)Note
//            Constructor
//(6)History
//            Rev.0   2022/01/03   Keisuke Hamada
/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
	
	Sushi_exp::Sushi_exp(int clk_pin_A1, int clk_pin_A2, int clk_pin_B, int clk_pin_C, int clk_pin_D, int clk_pin_E, int clk_pin_F, int clk_pin_G,
							int data_pin0, int data_pin1, int data_pin2, int data_pin3, int data_pin4, int data_pin5, int data_pin6, int data_pin7,
							int reset_pin, int action_sw)
	{
		Pins_Init(&clk_pin[0], clk_pin_A1, clk_pin_A2, clk_pin_B, clk_pin_C, clk_pin_D, clk_pin_E, clk_pin_F, clk_pin_G);
		Pins_Init(&data_pin[0], data_pin0, data_pin1, data_pin2, data_pin3, data_pin4, data_pin5, data_pin6, data_pin7);
		Set_ResetPin(reset_pin);
		Set_ActionSw(action_sw);
	}


/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//(1)Function name
//            Sushi_exp
//(2)Process
//            none
//(3)Argument
//            none
//(4)Return
//            none
//(5)Note
//            Destructor
//(6)History
//            Rev.0   2022/01/03   Keisuke Hamada
/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/

	Sushi_exp::~Sushi_exp()
	{
		/* none process */
	}


/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//(1)Function name
//            Set_ClockPins
//(2)Process
//            Set supply clock pins.
//(3)Argument
//            clk_pin_A1	Pin number that supplies the clock to A1 port.
//            clk_pin_A2	Pin number that supplies the clock to A2 port.
//            clk_pin_B		Pin number that supplies the clock to B port.
//            clk_pin_C		Pin number that supplies the clock to C port.
//            clk_pin_D		Pin number that supplies the clock to D port.
//            clk_pin_E		Pin number that supplies the clock to E port.
//            clk_pin_F		Pin number that supplies the clock to F port.
//            clk_pin_G		Pin number that supplies the clock to G port.
//(4)Return
//            none
//(5)Note
//            Setter method
//(6)History
//            Rev.0   2022/01/03   Keisuke Hamada
/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/

	void Sushi_exp::Set_ClockPins(int clk_pin_A1, int clk_pin_A2, int clk_pin_B, int clk_pin_C, int clk_pin_D, int clk_pin_E, int clk_pin_F, int clk_pin_G)
	{
		for(uint32_t uint32_t_loop = INIT_VALUE ; uint32_t_loop < CLOCK_PINS_NUMBER ; uint32_t_loop++)
		{
			if((this -> data_pin[uint32_t_loop]) != NULL)
			{
				digitalWrite(this -> clk_pin[uint32_t_loop], LOW);
			}
			else
			{
				/* none process */
			}
		}
		
		Pins_Init(&clk_pin[0], clk_pin_A1, clk_pin_A2, clk_pin_B, clk_pin_C, clk_pin_D, clk_pin_E, clk_pin_F, clk_pin_G);
		
		return;
	}


/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//(1)Function name
//            Set_DataPins
//(2)Process
//            Set data bus pins.
//(3)Argument
//            data_pin0		Pin number that controls bit 0.
//            data_pin1		Pin number that controls bit 1.
//            data_pin2		Pin number that controls bit 2.
//            data_pin3		Pin number that controls bit 3.
//            data_pin4		Pin number that controls bit 4.
//            data_pin5		Pin number that controls bit 5.
//            data_pin6		Pin number that controls bit 6.
//            data_pin7		Pin number that controls bit 7.
//(4)Return
//            none
//(5)Note
//            Setter method
//(6)History
//            Rev.0   2022/01/03   Keisuke Hamada
/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
	
	void Sushi_exp::Set_DataPins(int data_pin0, int data_pin1, int data_pin2, int data_pin3, int data_pin4, int data_pin5, int data_pin6, int data_pin7)
	{
		for(uint32_t uint32_t_loop = INIT_VALUE ; uint32_t_loop < DATA_BUS_PINS_NUMBER ; uint32_t_loop++)
		{
			if((this -> data_pin[uint32_t_loop]) != NULL)
			{
				digitalWrite(this -> data_pin[uint32_t_loop], LOW);
			}
			else
			{
				/* none process */
			}
		}
	
		Pins_Init(&data_pin[0], data_pin0, data_pin1, data_pin2, data_pin3, data_pin4, data_pin5, data_pin6, data_pin7);
		
		return;
	}


/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//(1)Function name
//            Set_ResetPin
//(2)Process
//            Set reset ic pin.
//(3)Argument
//            reset_pin		Pin number that reset the expander ic.
//(4)Return
//            none
//(5)Note
//            Setter method
//(6)History
//            Rev.0   2022/01/03   Keisuke Hamada
/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/

	void Sushi_exp::Set_ResetPin(int reset_pin)
	{
		(this -> reset_pin) = reset_pin;
		
		return;
	}


/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//(1)Function name
//            Set_ActionSw
//(2)Process
//            Set action_sw.
//(3)Argument
//            action_sw		Action mode of IC(Source or Sink)
//(4)Return
//            none
//(5)Note
//            Setter method
//(6)History
//            Rev.0   2022/01/03   Keisuke Hamada
/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/

	void Sushi_exp::Set_ActionSw(int action_sw)
	{
		if(action_sw == SOURCE_MODE || action_sw == SINK_MODE)
		{
			(this -> action_sw) = action_sw;
		}
		else
		{
			/* none process */
		}
		
		return;
	}


/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//(1)Function name
//            Get_ClockPin
//(2)Process
//            Returns the number of the pin that supplies the clock.
//(3)Argument
//            assign_port	Port number for which you want to know the set pin number.
//(4)Return
//            Result of operation.
//            pin_value			Pin number.
//            NULL_SET_ERROR	Returned when the information of clk_pin is not set.
//            PIN_NUMBER_ERROR	Returned when the argument was invalid.
//(5)Note
//            Getter method
//(6)History
//            Rev.0   2022/01/03   Keisuke Hamada
/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/

	int Sushi_exp::Get_ClockPin(int assign_port)
	{
		int pin_value;
	
		if(assign_port > THRESHOLD_NUMBER && assign_port < CLOCK_PINS_NUMBER)
		{
			pin_value = (this -> clk_pin[assign_port]);
			
			if(pin_value == NULL)
			{
				pin_value = NULL_SET_ERROR;
			}
			else
			{
				/* none process */
			}
		}
		else
		{
			pin_value = PIN_NUMBER_ERROR;
		}
		
		return pin_value;
	}


/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//(1)Function name
//            Get_DataPin
//(2)Process
//            Returns the number of the pin that controls the data bus.
//(3)Argument
//            assign_port	Port number for which you want to know the set pin number.
//(4)Return
//            Result of operation.
//            pin_value			Pin number.
//            NULL_SET_ERROR	Returned when the information of data_pin is not set.
//            PIN_NUMBER_ERROR	Returned when the argument was invalid.
//(5)Note
//            Getter method
//(6)History
//            Rev.0   2022/01/03   Keisuke Hamada
/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/

	int Sushi_exp::Get_DataPin(int assign_port)
	{
		int pin_value;
	
		if(assign_port > THRESHOLD_NUMBER && assign_port < DATA_BUS_PINS_NUMBER)
		{
			pin_value = (this -> data_pin[assign_port]);
			
			if(pin_value == NULL)
			{
				pin_value = NULL_SET_ERROR;
			}
			else
			{
				/* none process */
			}
		}
		else
		{
			pin_value = PIN_NUMBER_ERROR;
		}
		
		return pin_value;
	}


/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//(1)Function name
//            Get_ResetPin
//(2)Process
//            Returns the number of the pin that reset the expander ic.
//(3)Argument
//            none
//(4)Return
//            Result of operation.
//            pin_value			Pin number.
//            NULL_SET_ERROR	Returned when the information of reset_pin is not set.
//(5)Note
//            Getter method
//(6)History
//            Rev.0   2022/01/03   Keisuke Hamada
/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/

	int Sushi_exp::Get_ResetPin()
	{
		int pin_value;
	
		if((this -> reset_pin) == NULL)
		{
			pin_value = NULL_SET_ERROR;
		}
		else
		{
			pin_value = (this -> reset_pin);
		}
		
		return pin_value;
	}


/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//(1)Function name
//            Get_ActionSw
//(2)Process
//            Get action_sw.
//(3)Argument
//            none
//(4)Return
//            Result of operation.
//            mode_value		Action mode of IC(Source = 0 or Sink = 1)
//            NULL_SET_ERROR	Returned when the information of reset_pin is not set.
//(5)Note
//            Getter method
//(6)History
//            Rev.0   2022/01/03   Keisuke Hamada
/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/

	int Sushi_exp::Get_ActionSw()
	{
		int mode_value;
	
		if((this -> action_sw) == NULL)
		{
			mode_value = NULL_SET_ERROR;
		}
		else
		{
			mode_value = (this -> action_sw);
		}
		
		return mode_value;
	}


/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//(1)Function name
//            Get_ClockPin_Name
//(2)Process
//            Returns the pin name that supplies the clock.
//(3)Argument
//            assign_port	Port number for which you want to know the pin name.
//(4)Return
//            Result of operation.
//            pin_value		Pin name.
//(5)Note
//            Getter method
//(6)History
//            Rev.0   2022/01/03   Keisuke Hamada
/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/

	char* Sushi_exp::Get_ClockPin_Name(int assign_port)
	{
		char* pin_value;
		char* pin_name[CLOCK_PINS_NUMBER] =
		{
			"CLOCK_A1", "CLOCK_A2", "CLOCK_B", "CLOCK_C",
			"CLOCK_D",  "CLOCK_E",  "CLOCK_F", "CLOCK_G"
		};
	
		if(assign_port > THRESHOLD_NUMBER && assign_port < CLOCK_PINS_NUMBER)
		{
			pin_value = pin_name[assign_port];
		}
		else
		{
			pin_value = "PIN_NUMBER_ERROR";
		}
		
		return pin_value;
	}


/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//(1)Function name
//            Get_DataPin_Name
//(2)Process
//            Returns the pin name that controls the data bus.
//(3)Argument
//            assign_port	Port number for which you want to know the pin name.
//(4)Return
//            Result of operation.
//            pin_value		Pin name.
//(5)Note
//            Getter method
//(6)History
//            Rev.0   2022/01/03   Keisuke Hamada
/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/

	char* Sushi_exp::Get_DataPin_Name(int assign_port)
	{
		char* pin_value;
		char* pin_name[DATA_BUS_PINS_NUMBER] =
		{
			"DATA_0", "DATA_1", "DATA_2", "DATA_3",
			"DATA_4", "DATA_5", "DATA_6", "DATA_7"
		};
	
		if(assign_port > THRESHOLD_NUMBER && assign_port < DATA_BUS_PINS_NUMBER)
		{
			pin_value = pin_name[assign_port];
		}
		else
		{
			pin_value = "PIN_NUMBER_ERROR";
		}
		
		return pin_value;
	}


/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//(1)Function name
//            On_DataPins
//(2)Process
//            Set all pins to HIGH.
//            If an error occurs, the process will be interrupted.
//(3)Argument
//            none
//(4)Return
//            Result of operation.
//            PROCESSING_OK			Returned when processing ends normally.
//            CHANGE_STATE_ERROR	Returned when the pin state can't be changeed.
//            PIN_NUMBER_ERROR		Returned when the argument was invalid.
//(5)Note
//            
//(6)History
//            Rev.0   2022/01/03   Keisuke Hamada
/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/

	int Sushi_exp::On_DataPins()
	{
		int return_value = PROCESSING_OK;
		
		for(uint32_t uint32_t_loop = INIT_VALUE ; uint32_t_loop < DATA_BUS_PINS_NUMBER ; uint32_t_loop++)
		{
			if(return_value == PROCESSING_OK){
				return_value = Change_PinState(uint32_t_loop, SIGNAL_ON);
			}
			else
			{
				break;
			}
		}
		
		return return_value;
	}


/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//(1)Function name
//            Off_DataPins
//(2)Process
//            Set all pins to LOW.
//            If an error occurs, the process will be interrupted.
//(3)Argument
//            none
//(4)Return
//            Result of operation.
//            PROCESSING_OK			Returned when processing ends normally.
//            CHANGE_STATE_ERROR	Returned when the pin state can't be changeed.
//            PIN_NUMBER_ERROR		Returned when the argument was invalid.
//(5)Note
//            
//(6)History
//            Rev.0   2022/01/03   Keisuke Hamada
/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/

	int Sushi_exp::Off_DataPins()
	{
		int return_value = PROCESSING_OK;
		
		for(uint32_t uint32_t_loop = INIT_VALUE ; uint32_t_loop < DATA_BUS_PINS_NUMBER ; uint32_t_loop++)
		{
			if(return_value == PROCESSING_OK){
				return_value = Change_PinState(uint32_t_loop, SIGNAL_OFF);
			}
			else
			{
				break;
			}
		}
		
		return return_value;
	}


/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//(1)Function name
//            On_DataPin
//(2)Process
//            Puts the specified pin in the HIGH state.
//(3)Argument
//            on_data_pin	Pin number that you want to be in HIGH state.
//            Specify from 0 to 7.
//(4)Return
//            Result of operation.
//            PROCESSING_OK			Returned when processing ends normally.
//            CHANGE_STATE_ERROR	Returned when the pin state can't be changeed.
//            PIN_NUMBER_ERROR		Returned when the argument was invalid.
//            ARGUMENT_ERROR		Return when the argument is an invalid value.
//(5)Note
//            
//(6)History
//            Rev.0   2022/01/03   Keisuke Hamada
/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/

	int Sushi_exp::On_DataPin(int on_data_pin)
	{
		int return_value;
		
		if(THRESHOLD_NUMBER < on_data_pin && on_data_pin < DATA_BUS_PINS_NUMBER)
		{
			return_value = Change_PinState(on_data_pin, SIGNAL_ON);
		}
		else
		{
			return_value = ARGUMENT_ERROR;
		}
		
		return return_value;
	}


/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//(1)Function name
//            Off_DataPin
//(2)Process
//            Puts the specified pin in the LOW state.
//(3)Argument
//            off_data_pin	Pin number that you want to be in LOW state.
//            Specify from 0 to 7.
//(4)Return
//            Result of operation.
//            PROCESSING_OK			Returned when processing ends normally.
//            CHANGE_STATE_ERROR	Returned when the pin state can't be changeed.
//            PIN_NUMBER_ERROR		Returned when the argument was invalid.
//            ARGUMENT_ERROR		Return when the argument is an invalid value.
//(5)Note
//            
//(6)History
//            Rev.0   2022/01/03   Keisuke Hamada
/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/

	int Sushi_exp::Off_DataPin(int off_data_pin)
	{
		int return_value;
		
		if(THRESHOLD_NUMBER < off_data_pin && off_data_pin < DATA_BUS_PINS_NUMBER)
		{
			return_value = Change_PinState(off_data_pin, SIGNAL_OFF);
		}
		else
		{
			return_value = ARGUMENT_ERROR;
		}
		
		return return_value;
	}


/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//(1)Function name
//            On_DataPin_Binary
//(2)Process
//            Puts the specified pin in the HIGH state.
//(3)Argument
//            on_data_pin	Binary data that you want to be in HIGH state.
//(4)Return
//            Result of operation.
//            PROCESSING_OK			Returned when processing ends normally.
//            CHANGE_STATE_ERROR	Returned when the pin state can't be changeed.
//            PIN_NUMBER_ERROR		Returned when the argument was invalid.
//(5)Note
//            For example, if 0xA2 is given, data bus pin1, data bus pin5,
//            and data bus pin7 will be HIGH state.
//(6)History
//            Rev.0   2022/01/03   Keisuke Hamada
/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/

	int Sushi_exp::On_DataPin_Binary(int on_data_pin)
	{
		int return_value = PROCESSING_OK;
		int pick_out_bit = 0;
		
		for(uint32_t uint32_t_loop = INIT_VALUE ; uint32_t_loop < DATA_BUS_PINS_NUMBER ; uint32_t_loop++)
		{
			if(return_value == PROCESSING_OK)
			{
				pick_out_bit = on_data_pin & (0x01);
				
				if(pick_out_bit == 1)
				{
					return_value = Change_PinState(uint32_t_loop, SIGNAL_ON);
				}
				else
				{
					/* none process */
				}
			}
			else
			{
				break;
			}
			
			on_data_pin >>= 1;
		}
		
		return return_value;
	}


/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//(1)Function name
//            Off_DataPin_Binary
//(2)Process
//            Puts the specified pin in the LOW state.
//(3)Argument
//            off_data_pin	Pin number that you want to be in LOW state.
//(4)Return
//            Result of operation.
//            PROCESSING_OK			Returned when processing ends normally.
//            CHANGE_STATE_ERROR	Returned when the pin state can't be changeed.
//            PIN_NUMBER_ERROR		Returned when the argument was invalid.
//(5)Note
//            For example, if 0xA2 is given, data bus pin1, data bus pin5,
//            and data bus pin7 will be HIGH state.
//(6)History
//            Rev.0   2022/01/03   Keisuke Hamada
/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/

	int Sushi_exp::Off_DataPin_Binary(int off_data_pin)
	{
		int return_value = PROCESSING_OK;
		int pick_out_bit = 0;
		
		for(uint32_t uint32_t_loop = INIT_VALUE ; uint32_t_loop < DATA_BUS_PINS_NUMBER ; uint32_t_loop++)
		{
			if(return_value == PROCESSING_OK)
			{
				pick_out_bit = off_data_pin & (0x01);
				
				if(pick_out_bit == 1)
				{
					return_value = Change_PinState(uint32_t_loop, SIGNAL_OFF);
				}
				else
				{
					/* none process */
				}
			}
			else
			{
				break;
			}
			
			off_data_pin >>= 1;
		}
		
		return return_value;
	}


/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//(1)Function name
//            On_DataPin0
//(2)Process
//            Puts the data bus pin0 in the HIGH state.
//(3)Argument
//            none
//(4)Return
//            Result of operation.
//            PROCESSING_OK			Returned when processing ends normally.
//            CHANGE_STATE_ERROR	Returned when the pin state can't be changeed.
//            PIN_NUMBER_ERROR		Returned when the argument was invalid.
//(5)Note
//            
//(6)History
//            Rev.0   2022/01/03   Keisuke Hamada
/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/

	int Sushi_exp::On_DataPin0()
	{
		int return_value;
		
		return_value = Change_PinState(DATA_0, SIGNAL_ON);
		
		return return_value;
	}


/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//(1)Function name
//            On_DataPin1
//(2)Process
//            Puts the data bus pin1 in the HIGH state.
//(3)Argument
//            none
//(4)Return
//            Result of operation.
//            PROCESSING_OK			Returned when processing ends normally.
//            CHANGE_STATE_ERROR	Returned when the pin state can't be changeed.
//            PIN_NUMBER_ERROR		Returned when the argument was invalid.
//(5)Note
//            
//(6)History
//            Rev.0   2022/01/03   Keisuke Hamada
/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/

	int Sushi_exp::On_DataPin1()
	{
		int return_value;
		
		return_value = Change_PinState(DATA_1, SIGNAL_ON);
		
		return return_value;
	}


/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//(1)Function name
//            On_DataPin2
//(2)Process
//            Puts the data bus pin2 in the HIGH state.
//(3)Argument
//            none
//(4)Return
//            Result of operation.
//            PROCESSING_OK			Returned when processing ends normally.
//            CHANGE_STATE_ERROR	Returned when the pin state can't be changeed.
//            PIN_NUMBER_ERROR		Returned when the argument was invalid.
//(5)Note
//            
//(6)History
//            Rev.0   2022/01/03   Keisuke Hamada
/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/

	int Sushi_exp::On_DataPin2()
	{
		int return_value;
		
		return_value = Change_PinState(DATA_2, SIGNAL_ON);
		
		return return_value;
	}


/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//(1)Function name
//            On_DataPin3
//(2)Process
//            Puts the data bus pin3 in the HIGH state.
//(3)Argument
//            none
//(4)Return
//            Result of operation.
//            PROCESSING_OK			Returned when processing ends normally.
//            CHANGE_STATE_ERROR	Returned when the pin state can't be changeed.
//            PIN_NUMBER_ERROR		Returned when the argument was invalid.
//(5)Note
//            
//(6)History
//            Rev.0   2022/01/03   Keisuke Hamada
/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/

	int Sushi_exp::On_DataPin3()
	{
		int return_value;
		
		return_value = Change_PinState(DATA_3, SIGNAL_ON);
		
		return return_value;
	}


/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//(1)Function name
//            On_DataPin4
//(2)Process
//            Puts the data bus pin4 in the HIGH state.
//(3)Argument
//            none
//(4)Return
//            Result of operation.
//            PROCESSING_OK			Returned when processing ends normally.
//            CHANGE_STATE_ERROR	Returned when the pin state can't be changeed.
//            PIN_NUMBER_ERROR		Returned when the argument was invalid.
//(5)Note
//            
//(6)History
//            Rev.0   2022/01/03   Keisuke Hamada
/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/

	int Sushi_exp::On_DataPin4()
	{
		int return_value;
		
		return_value = Change_PinState(DATA_4, SIGNAL_ON);
		
		return return_value;
	}


/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//(1)Function name
//            On_DataPin5
//(2)Process
//            Puts the data bus pin5 in the HIGH state.
//(3)Argument
//            none
//(4)Return
//            Result of operation.
//            PROCESSING_OK			Returned when processing ends normally.
//            CHANGE_STATE_ERROR	Returned when the pin state can't be changeed.
//            PIN_NUMBER_ERROR		Returned when the argument was invalid.
//(5)Note
//            
//(6)History
//            Rev.0   2022/01/03   Keisuke Hamada
/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/

	int Sushi_exp::On_DataPin5()
	{
		int return_value;
		
		return_value = Change_PinState(DATA_5, SIGNAL_ON);
		
		return return_value;
	}


/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//(1)Function name
//            On_DataPin6
//(2)Process
//            Puts the data bus pin6 in the HIGH state.
//(3)Argument
//            none
//(4)Return
//            Result of operation.
//            PROCESSING_OK			Returned when processing ends normally.
//            CHANGE_STATE_ERROR	Returned when the pin state can't be changeed.
//            PIN_NUMBER_ERROR		Returned when the argument was invalid.
//(5)Note
//            
//(6)History
//            Rev.0   2022/01/03   Keisuke Hamada
/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/

	int Sushi_exp::On_DataPin6()
	{
		int return_value;
		
		return_value = Change_PinState(DATA_6, SIGNAL_ON);
		
		return return_value;
	}


/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//(1)Function name
//            On_DataPin7
//(2)Process
//            Puts the data bus pin7 in the HIGH state.
//(3)Argument
//            none
//(4)Return
//            Result of operation.
//            PROCESSING_OK			Returned when processing ends normally.
//            CHANGE_STATE_ERROR	Returned when the pin state can't be changeed.
//            PIN_NUMBER_ERROR		Returned when the argument was invalid.
//(5)Note
//            
//(6)History
//            Rev.0   2022/01/03   Keisuke Hamada
/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/

	int Sushi_exp::On_DataPin7()
	{
		int return_value;
		
		return_value = Change_PinState(DATA_7, SIGNAL_ON);
		
		return return_value;
	}


/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//(1)Function name
//            Off_DataPin0
//(2)Process
//            Puts the data bus pin0 in the LOW state.
//(3)Argument
//            none
//(4)Return
//            Result of operation.
//            PROCESSING_OK			Returned when processing ends normally.
//            CHANGE_STATE_ERROR	Returned when the pin state can't be changeed.
//            PIN_NUMBER_ERROR		Returned when the argument was invalid.
//(5)Note
//            
//(6)History
//            Rev.0   2022/01/03   Keisuke Hamada
/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/

	int Sushi_exp::Off_DataPin0()
	{
		int return_value;
		
		return_value = Change_PinState(DATA_0, SIGNAL_OFF);
		
		return return_value;
	}


/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//(1)Function name
//            Off_DataPin1
//(2)Process
//            Puts the data bus pin1 in the LOW state.
//(3)Argument
//            none
//(4)Return
//            Result of operation.
//            PROCESSING_OK			Returned when processing ends normally.
//            CHANGE_STATE_ERROR	Returned when the pin state can't be changeed.
//            PIN_NUMBER_ERROR		Returned when the argument was invalid.
//(5)Note
//            
//(6)History
//            Rev.0   2022/01/03   Keisuke Hamada
/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/

	int Sushi_exp::Off_DataPin1()
	{
		int return_value;
		
		return_value = Change_PinState(DATA_0, SIGNAL_OFF);
		
		return return_value;
	}


/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//(1)Function name
//            Off_DataPin2
//(2)Process
//            Puts the data bus pin2 in the LOW state.
//(3)Argument
//            none
//(4)Return
//            Result of operation.
//            PROCESSING_OK			Returned when processing ends normally.
//            CHANGE_STATE_ERROR	Returned when the pin state can't be changeed.
//            PIN_NUMBER_ERROR		Returned when the argument was invalid.
//(5)Note
//            
//(6)History
//            Rev.0   2022/01/03   Keisuke Hamada
/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/

	int Sushi_exp::Off_DataPin2()
	{
		int return_value;
		
		return_value = Change_PinState(DATA_0, SIGNAL_OFF);
		
		return return_value;
	}


/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//(1)Function name
//            Off_DataPin3
//(2)Process
//            Puts the data bus pin3 in the LOW state.
//(3)Argument
//            none
//(4)Return
//            Result of operation.
//            PROCESSING_OK			Returned when processing ends normally.
//            CHANGE_STATE_ERROR	Returned when the pin state can't be changeed.
//            PIN_NUMBER_ERROR		Returned when the argument was invalid.
//(5)Note
//            
//(6)History
//            Rev.0   2022/01/03   Keisuke Hamada
/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/

	int Sushi_exp::Off_DataPin3()
	{
		int return_value;
		
		return_value = Change_PinState(DATA_0, SIGNAL_OFF);
		
		return return_value;
	}


/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//(1)Function name
//            Off_DataPin4
//(2)Process
//            Puts the data bus pin4 in the LOW state.
//(3)Argument
//            none
//(4)Return
//            Result of operation.
//            PROCESSING_OK			Returned when processing ends normally.
//            CHANGE_STATE_ERROR	Returned when the pin state can't be changeed.
//            PIN_NUMBER_ERROR		Returned when the argument was invalid.
//(5)Note
//            
//(6)History
//            Rev.0   2022/01/03   Keisuke Hamada
/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/

	int Sushi_exp::Off_DataPin4()
	{
		int return_value;
		
		return_value = Change_PinState(DATA_0, SIGNAL_OFF);
		
		return return_value;
	}


/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//(1)Function name
//            Off_DataPin5
//(2)Process
//            Puts the data bus pin5 in the LOW state.
//(3)Argument
//            none
//(4)Return
//            Result of operation.
//            PROCESSING_OK			Returned when processing ends normally.
//            CHANGE_STATE_ERROR	Returned when the pin state can't be changeed.
//            PIN_NUMBER_ERROR		Returned when the argument was invalid.
//(5)Note
//            
//(6)History
//            Rev.0   2022/01/03   Keisuke Hamada
/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/

	int Sushi_exp::Off_DataPin5()
	{
		int return_value;
		
		return_value = Change_PinState(DATA_0, SIGNAL_OFF);
		
		return return_value;
	}


/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//(1)Function name
//            Off_DataPin6
//(2)Process
//            Puts the data bus pin6 in the LOW state.
//(3)Argument
//            none
//(4)Return
//            Result of operation.
//            PROCESSING_OK			Returned when processing ends normally.
//            CHANGE_STATE_ERROR	Returned when the pin state can't be changeed.
//            PIN_NUMBER_ERROR		Returned when the argument was invalid.
//(5)Note
//            
//(6)History
//            Rev.0   2022/01/03   Keisuke Hamada
/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/

	int Sushi_exp::Off_DataPin6()
	{
		int return_value;
		
		return_value = Change_PinState(DATA_0, SIGNAL_OFF);
		
		return return_value;
	}


/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//(1)Function name
//            Off_DataPin7
//(2)Process
//            Puts the data bus pin7 in the LOW state.
//(3)Argument
//            none
//(4)Return
//            Result of operation.
//            PROCESSING_OK			Returned when processing ends normally.
//            CHANGE_STATE_ERROR	Returned when the pin state can't be changeed.
//            PIN_NUMBER_ERROR		Returned when the argument was invalid.
//(5)Note
//            
//(6)History
//            Rev.0   2022/01/03   Keisuke Hamada
/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/

	int Sushi_exp::Off_DataPin7()
	{
		int return_value;
		
		return_value = Change_PinState(DATA_0, SIGNAL_OFF);
		
		return return_value;
	}


/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//(1)Function name
//            Output_ClockPin
//(2)Process
//            Supply clock to the specified port.
//(3)Argument
//            clk_pin	Pin number to which you want to supply the clock.
//(4)Return
//            none
//(5)Note
//            
//(6)History
//            Rev.0   2022/01/03   Keisuke Hamada
/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/

	void Sushi_exp::Output_ClockPin(int clk_pin)
	{
		Supply_Clock(clk_pin);
		
		return;
	}


/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//(1)Function name
//            Output_ClockPinA1
//(2)Process
//            Supply clock to A1 port.
//(3)Argument
//            none
//(4)Return
//            none
//(5)Note
//            The state of DATA0-DATA8 is taken into the register.
//(6)History
//            Rev.0   2022/01/03   Keisuke Hamada
/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/

	void Sushi_exp::Output_ClockPinA1()
	{
		Supply_Clock(CLOCK_A1);
		
		return;
	}


/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//(1)Function name
//            Output_ClockPinA2
//(2)Process
//            Supply clock to A2 port.
//(3)Argument
//            none
//(4)Return
//            none
//(5)Note
//            The state of DATA0-8 and the state of being captured in the register are
//            output at the same time.
//(6)History
//            Rev.0   2022/01/03   Keisuke Hamada
/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/

	void Sushi_exp::Output_ClockPinA2()
	{
		Supply_Clock(CLOCK_A2);
		
		return;
	}


/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//(1)Function name
//            Output_ClockPinB
//(2)Process
//            Supply clock to B port.
//(3)Argument
//            none
//(4)Return
//            none
//(5)Note
//            
//(6)History
//            Rev.0   2022/01/03   Keisuke Hamada
/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/

	void Sushi_exp::Output_ClockPinB()
	{
		Supply_Clock(CLOCK_B);
		
		return;
	}


/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//(1)Function name
//            Output_ClockPinC
//(2)Process
//            Supply clock to C port.
//(3)Argument
//            none
//(4)Return
//            none
//(5)Note
//            
//(6)History
//            Rev.0   2022/01/03   Keisuke Hamada
/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/

	void Sushi_exp::Output_ClockPinC()
	{
		Supply_Clock(CLOCK_C);
		
		return;
	}


/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//(1)Function name
//            Output_ClockPinD
//(2)Process
//            Supply clock to D port.
//(3)Argument
//            none
//(4)Return
//            none
//(5)Note
//            
//(6)History
//            Rev.0   2022/01/03   Keisuke Hamada
/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/

	void Sushi_exp::Output_ClockPinD()
	{
		Supply_Clock(CLOCK_D);
		
		return;
	}


/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//(1)Function name
//            Output_ClockPinE
//(2)Process
//            Supply clock to E port.
//(3)Argument
//            none
//(4)Return
//            none
//(5)Note
//            
//(6)History
//            Rev.0   2022/01/03   Keisuke Hamada
/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/

	void Sushi_exp::Output_ClockPinE()
	{
		Supply_Clock(CLOCK_E);
		
		return;
	}


/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//(1)Function name
//            Output_ClockPinF
//(2)Process
//            Supply clock to F port.
//(3)Argument
//            none
//(4)Return
//            none
//(5)Note
//            
//(6)History
//            Rev.0   2022/01/03   Keisuke Hamada
/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/

	void Sushi_exp::Output_ClockPinF()
	{
		Supply_Clock(CLOCK_F);
		
		return;
	}


/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//(1)Function name
//            Output_ClockPinG
//(2)Process
//            Supply clock to G port.
//(3)Argument
//            none
//(4)Return
//            none
//(5)Note
//            
//(6)History
//            Rev.0   2022/01/03   Keisuke Hamada
/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/

	void Sushi_exp::Output_ClockPinG()
	{
		Supply_Clock(CLOCK_G);
		
		return;
	}


/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//(1)Function name
//            Reset_Ic
//(2)Process
//            Reset the expander IC.
//(3)Argument
//            none
//(4)Return
//            Result of operation.
//            PROCESSING_OK		Returned when processing ends normally.
//            NULL_SET_ERROR	Returned when the reset pin was not set.
//(5)Note
//            
//(6)History
//            Rev.0   2022/01/03   Keisuke Hamada
/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/

	int Sushi_exp::Reset_Ic()
	{
		int return_value = PROCESSING_OK;
	
		if((this -> reset_pin) != NULL)
		{
			digitalWrite(this -> reset_pin, LOW);
			delay(DELAY_TIME);
			digitalWrite(this -> reset_pin, HIGH);
		}
		else
		{
			return_value = NULL_SET_ERROR;
		}
		
		return return_value;
	}


/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//(1)Function name
//            Show_Infomation
//(2)Process
//            Show the information set for the instance.
//(3)Argument
//            none
//(4)Return
//            Result of operation.
//            PROCESSING_OK				Returned when processing ends normally.
//            SERIAL_NOT_VALID_ERROR	Returned when serial communication is
//                                  	not valid.
//(5)Note
//            Enable serial communication before calling this function.
//(6)History
//            Rev.0   2022/01/03   Keisuke Hamada
/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/

	int Sushi_exp::Show_Infomation()
	{
		int return_value = PROCESSING_OK;
		
		PIN_INFO info;
		int rst_pin;
		int act_sw;
		
		if(!Serial)
		{
			return_value = SERIAL_NOT_VALID_ERROR;
		}
		else
		{
			/* Get the set information */
			for(uint32_t uint32_t_loop = INIT_VALUE ; uint32_t_loop < IO_PINS_ARRAY_SIZE ; uint32_t_loop++)
			{
				info.clk_pin_name[uint32_t_loop]      = (this -> Get_ClockPin_Name(uint32_t_loop));
				info.clk_pin_assignee[uint32_t_loop]  = (this -> Get_ClockPin(uint32_t_loop));
				
				info.data_pin_name[uint32_t_loop]     = (this -> Get_DataPin_Name(uint32_t_loop));
				info.data_pin_assignee[uint32_t_loop] = (this -> Get_DataPin(uint32_t_loop));
			}
			rst_pin = (this -> Get_ResetPin());
			act_sw  = (this -> Get_ActionSw());
			
			/* Show information */
			Serial.println(SHOW_MESSAGE_1);
			for(uint32_t uint32_t_loop = INIT_VALUE ; uint32_t_loop < CLOCK_PINS_NUMBER ; uint32_t_loop++)
			{
				Serial.print(info.clk_pin_name[uint32_t_loop]);
				
				if(uint32_t_loop < 2)
				{
					Serial.print("\t");
				}
				else
				{
					Serial.print("\t\t");
				}
				
				Serial.println(info.clk_pin_assignee[uint32_t_loop]);
			}
			
			Serial.println();

			Serial.println(SHOW_MESSAGE_2);
			for(uint32_t uint32_t_loop = INIT_VALUE ; uint32_t_loop < DATA_BUS_PINS_NUMBER ; uint32_t_loop++)
			{
				Serial.print(info.data_pin_name[uint32_t_loop]);
				Serial.print("\t\t");
				Serial.println(info.data_pin_assignee[uint32_t_loop]);
			}
			
			Serial.println();
			
			Serial.println(SHOW_MESSAGE_3);
			Serial.print("RESET\t\t");
			Serial.println(rst_pin);
			
			Serial.println();
			
			Serial.println(SHOW_MESSAGE_4);
			Serial.print("MODE\t\t");
			if(act_sw == SOURCE_MODE)
			{
				Serial.println("SOURCE_MODE");
			}
			else if(act_sw == SINK_MODE)
			{
				Serial.println("SINK_MODE");
			}
			else
			{
				/* none process */
			}
		}
		
		return return_value;
	}


/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//(1)Function name
//            Pins_Init
//(2)Process
//            Set and initialize pins.
//(3)Argument
//            pin_ptr	Pointer indicating the storage location.
//            pin0		Pin number to set 1/8.
//            pin1		Pin number to set 2/8..
//            pin2		Pin number to set 3/8..
//            pin3		Pin number to set 4/8..
//            pin4		Pin number to set 5/8..
//            pin5		Pin number to set 6/8..
//            pin6		Pin number to set 7/8..
//            pin7		Pin number to set 8/8..
//(4)Return
//            none
//(5)Note
//            Setter method
//(6)History
//            Rev.0   2022/01/03   Keisuke Hamada
/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/

	void Sushi_exp::Pins_Init(int* pin_ptr, int pin0, int pin1, int pin2, int pin3, int pin4, int pin5, int pin6, int pin7)
	{
		*pin_ptr = pin0;
		*(pin_ptr + 1) = pin1;
		*(pin_ptr + 2) = pin2;
		*(pin_ptr + 3) = pin3;
		*(pin_ptr + 4) = pin4;
		*(pin_ptr + 5) = pin5;
		*(pin_ptr + 6) = pin6;
		*(pin_ptr + 7) = pin7;
		
		for(uint32_t uint32_t_loop = INIT_VALUE ; uint32_t_loop < IO_PINS_ARRAY_SIZE ; uint32_t_loop++)
		{
			pinMode(*(pin_ptr + uint32_t_loop), OUTPUT);
			digitalWrite(*(pin_ptr + uint32_t_loop), LOW);
		}
		
		return;
	}


/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//(1)Function name
//            Null_Set_Array
//(2)Process
//            Set "NULL" to all the elements of arrays clk_pin and data_pin.
//(3)Argument
//            none
//(4)Return
//            none
//(5)Note
//            
//(6)History
//            Rev.0   2022/01/03   Keisuke Hamada
/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
	
	void Sushi_exp::Null_Set_Array()
	{
		for(uint32_t uint32_t_loop = INIT_VALUE ; uint32_t_loop < IO_PINS_ARRAY_SIZE ; uint32_t_loop++)
		{
			(this -> clk_pin[uint32_t_loop])  = NULL;
			(this -> data_pin[uint32_t_loop]) = NULL;
		}
		
		return;
	}


/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//(1)Function name
//            Supply_Clock
//(2)Process
//            Supply 1 clock to the specified port.
//(3)Argument
//            pin_number	Pin number to supply the clock.
//(4)Return
//            none
//(5)Note
//            
//(6)History
//            Rev.0   2022/01/03   Keisuke Hamada
/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/

	void Sushi_exp::Supply_Clock(int pin_number)
	{
		digitalWrite(this -> clk_pin[pin_number], HIGH);
		delay(DELAY_TIME);
		digitalWrite(this -> clk_pin[pin_number], LOW);
		
		return;
	}


/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//(1)Function name
//            Change_PinState
//(2)Process
//            Change the state of the specified pin
//(3)Argument
//            pin_number	The number of the pin whose state you want to change.
//            pin_state		State after change (HIGH or LOW).
//(4)Return
//            Result of operation.
//            PROCESSING_OK			Returned when processing ends normally.
//            CHANGE_STATE_ERROR	Returned when the pin state can't be changeed.
//            PIN_NUMBER_ERROR		Returned when the argument was invalid.
//(5)Note
//            
//(6)History
//            Rev.0   2022/01/03   Keisuke Hamada
/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/

	int Sushi_exp::Change_PinState(int pin_number, int pin_state)
	{
		int return_value = PROCESSING_OK;
		
		if((this -> action_sw) == SOURCE_MODE)
		{
			/* none process */
		}
		else if((this -> action_sw) == SINK_MODE)
		{
			if(pin_state == SIGNAL_ON)
			{
				pin_state = SIGNAL_OFF;
			}
			else if(pin_state == SIGNAL_OFF)
			{
				pin_state = SIGNAL_ON;
			}
			else
			{
				/* none process */
			}
		}
		else
		{
			/* none process */
		}
		
		if(pin_state == SIGNAL_ON || pin_state == SIGNAL_OFF)
		{
			if(pin_number > THRESHOLD_NUMBER && pin_number < IO_PINS_ARRAY_SIZE)
			{
				digitalWrite(this -> data_pin[pin_number], pin_state);
			}
			else
			{
				return_value = PIN_NUMBER_ERROR;
			}
		}
		else
		{
			return_value = CHANGE_STATE_ERROR;
		}
		
		return return_value;
	}
