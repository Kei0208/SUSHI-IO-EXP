/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//
//  This sample program is a modification of "Simple_Control_Output_Port"
//  to a control method using binary data.
//  The LSB corresponds to port 0 and the MSB corresponds to port 7.
//
//  Example: HIGH (C0, C2, C4, C6)    LOW (C1, C3, C5, C7)
//        On_DataPin_Binary(0x55);    /*(MSB) 0b01010101 (LSB)*/ ON
//        Off_DataPin_Binary(0xAA);   /*(MSB) 0b10101010 (LSB)*/ OFF
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
    sushi.On_DataPin_Binary(0x55);
    sushi.Off_DataPin_Binary(0xAA);
  }
  else
  {
    sushi.On_DataPin_Binary(0xAA);
    sushi.Off_DataPin_Binary(0x55);
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
