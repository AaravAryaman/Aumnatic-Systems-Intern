// Do not remove the include below
#include "PlutoPilot.h"
#include "Estimate.h" //gives access to drone rates, angles, velocities and positions
#include "Utils.h" //gives access to LED, Graphs and Print

//The setup function is called once at Pluto's hardware startup
void plutoInit()
{
//Add your hardware initialization code here

}




//The function is called once before plutoLoop() when you activate developer mode
void onLoopStart()
{
//Do your one time stuff here
	LED.flightStatus(DEACTIVATE); //Disable default LED behaviour
}



//The loop function is called in an endless loop
void plutoLoop()
{
//Add your repeated code here
	if(Velocity.get(Z) > 5) //If the drone is moving upwards (Velocity in the Z axis will be positive)
	{
		LED.set(RED, OFF); LED.set(GREEN, ON); LED.set(BLUE, OFF); }
	else if(Velocity.get(Z) < -5) //If the drone is moving downwards
	{
		LED.set(RED, ON); LED.set(GREEN, OFF); LED.set(BLUE, OFF); }
	else //A buffer value of 5 is kept to account for inconsistencies
	{
		LED.set(RED, OFF); LED.set(GREEN, OFF); LED.set(BLUE, TOGGLE); }

	Monitor.println("Velocity Z: ", Velocity.get(Z)); Graph.red(Velocity.get(Z), 1);
}



//The function is called once after plutoLoop() when you deactivate developer mode
void onLoopFinish()
{
//Do your cleanup stuff here
	LED.flightStatus(ACTIVATE); //Enable the default LED behaviour

}




