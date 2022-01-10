/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//
//  This sample program is an example for controlling SUSHI-Exp-Board.
//  The SUSHI-Exp-Board is manufactured by combining TC6381AF IC (GPIO
//  expander IC) and M63806KP IC (A "sink type" transistor array IC).
//  Therefore, it operates in SINK-MODE.
//  Port F and port G can be controlled up to 35V. 
//  However, due to the structure of the circuit, the output is inverted.
//
//  Follow the procedure below to control the output port.
//    (1) Enter the control pattern you want to output in the data pin.
//          ↓
//    (2) Call the clock supply function to output the control pattern
//        to the output port.
//
//  Example: HIGH (C0, C2, C4, C6)    LOW (C1, C3, C5, C7)
//        On_DataPin0();
//        On_DataPin2();
//        On_DataPin4();
//        On_DataPin6();
//        Off_DataPin1();
//        Off_DataPin3();
//        Off_DataPin5();
//        Off_DataPin7();
//        Output_ClockPinC();
//
/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/

#include <Sushi_Exp.h>

/* Clock pin */
#define CLK_A1  (15)
#define CLK_A2  (2)
#define CLK_B   (4)
#define CLK_C   (5)
#define CLK_D   (18)
#define CLK_E   (19)
#define CLK_F   (21)
#define CLK_G   (22)

/* Data pin */
#define DATA_0  (13)
#define DATA_1  (12)
#define DATA_2  (14)
#define DATA_3  (27)
#define DATA_4  (26)
#define DATA_5  (25)
#define DATA_6  (33)
#define DATA_7  (32)

/* Reset pin */
#define RESET   (23)

Sushi_exp sushi;
bool isSushi = true;


void setup()
{
  Serial.begin(115200);

  /* Init process */
  sushi.Set_ClockPins(CLK_A1, CLK_A2, CLK_B, CLK_C, CLK_D, CLK_E, CLK_F, CLK_G);
  sushi.Set_DataPins(DATA_0, DATA_1, DATA_2, DATA_3, DATA_4, DATA_5, DATA_6, DATA_7);
  sushi.Set_ResetPin(RESET);
  sushi.Set_ActionSw(SINK_MODE);    /* SOURCE_MODE or SINK_MODE */

  sushi.Off_DataPins();

  Serial.println("Initialization process completed!!");
}


void loop()
{
  if(isSushi)
  {
    sushi.On_DataPin0();
    sushi.On_DataPin2();
    sushi.On_DataPin4();
    sushi.On_DataPin6();

    sushi.Off_DataPin1();
    sushi.Off_DataPin3();
    sushi.Off_DataPin5();
    sushi.Off_DataPin7();
  }
  else
  {
    sushi.On_DataPin1();
    sushi.On_DataPin3();
    sushi.On_DataPin5();
    sushi.On_DataPin7();

    sushi.Off_DataPin0();
    sushi.Off_DataPin2();
    sushi.Off_DataPin4();
    sushi.Off_DataPin6();
  }

//sushi.Output_ClockPinA1();
//sushi.Output_ClockPinA2();
//sushi.Output_ClockPinB();
  sushi.Output_ClockPinC();
//sushi.Output_ClockPinD();
//sushi.Output_ClockPinE();
//sushi.Output_ClockPinF();
//sushi.Output_ClockPinG();

  isSushi = !isSushi;

  Serial.println("SUSHI!!");

  delay(1000);
}
