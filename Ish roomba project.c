#pragma config(Sensor, S2,     button2,        sensorNone)
#pragma config(Motor,  motorB,          right,         tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorC,          left,          tmotorEV3_Large, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	while(SensorValue(button2) ==0)
	{
		motor[left] = 50;
		motor[right] = 50;

	}
	while(true)
	{

		motor[left] = -50;
		motor[right] = -50;
		wait1Msec(1000);


		motor[left] = 0;
		motor[right] = 75;
		wait1Msec(750);

		while(SensorValue(button2) ==0)
	{
		motor[left] = 100;
		motor[right] = 40;
	}


	}



}
