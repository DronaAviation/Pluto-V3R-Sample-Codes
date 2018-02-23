
/* Name: FlipIt

 Author: DronaAviation */





// Do not remove the include below
#include "PlutoPilot.h"
#include "flight.h"
#include "print.h"
#include "control.h"
#include "led.h"
#include "sensor.h"
#include "utils.h"


Timer *flipTimer;

bool shouldFlip;
bool isFlipset;



//The setup function is called once at Pluto's hardware startup
void plutoInit()
{
// Add your hardware initialization code here
}



//The function is called once before plutoFly when you activate UserCode
void onPilotStart()
{
  // do your one time stuffs here
	flipTimer=new Timer();

	shouldFlip=false;
	isFlipset=false;


}



// The loop function is called in an endless loop
void plutoPilot()
{

//Add your repeated code here


	if(!shouldFlip)
		{


		if(flipTimer->start(2000)&&!shouldFlip)
		{

			shouldFlip=true;

		}



		}
		else
		{



			if(!isFlipset)
			{


				isFlipset=Flight.setFlip(BACK_FLIP);


			}


			else if(!isFlipset)
			{

	      Control.setRC(RC_PITCH, 50);
			}


		}





}



//The function is called once after plutoFly when you deactivate UserCode
void onPilotFinish()
{

	 // do your cleanup stuffs here

}




