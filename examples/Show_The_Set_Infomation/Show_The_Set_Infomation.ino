/*_(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)__(:3｣∠)_*/
//
//  This sample program shows the information set for the instance on
//  the serial monitor.
//  Function "Show_Infomation" must enable serial communication before
//  it can be called.
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

/* Can be set at the same time as instantiation. */
Sushi_exp sushi(CLK_A1, CLK_A2, CLK_B, CLK_C, CLK_D, CLK_E, CLK_F, CLK_G,
                DATA_0, DATA_1, DATA_2, DATA_3, DATA_4, DATA_5, DATA_6, DATA_7,
                RESET, SINK_MODE);


void setup()
{
  Serial.begin(115200);

  while(!Serial)
  {
    /* none process */
  }

  sushi.Show_Infomation();
}


void loop()
{
  /* none process */
}
