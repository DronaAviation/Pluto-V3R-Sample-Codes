
/* Name: ChuckToArm

 Author: DronaAviation */



// Do not remove the include below
#include "PlutoPilot.h"
#include "sensor.h"
#include "control.h"



//The setup function is called once at Pluto's hardware startup
void plutoInit()
{
// Add your hardware initialization code here
}



//The function is called once before plutoFly when you activate UserCode
void onPilotStart()
{
  // do your one time stuffs here

}



// The loop function is called in an endless loop
void plutoPilot()
{

//Add your repeated code here

	if(Accelerometer.getNetAcc()<2&&(!Control.checkFlightStatus(FS_Crash)))
		{


		Control.arm();

		}


}



//The function is called once after plutoFly when you deactivate UserCode
void onPilotFinish()
{

	 // do your cleanup stuffs here

}




