#ifndef ROBOTMAP_H
#define ROBOTMAP_H

#include "WPILib.h"

class RobotMap
{
public:
	const static int FRONTLEFTMOTOR = 0;
	const static int FRONTRIGHTMOTOR = 1;
	const static int REARLEFTMOTOR = 2;
	const static int REARRIGHTMOTOR = 3;
	const static int PADDLEMOTOR = 4;
	const static u_int32_t PADDLE_CHANNEL_A = 1;
	const static u_int32_t PADDLE_CHANNEL_B = 2;

};

/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */
 
// For example to map the left and right motors, you could define the
// following variables to use with your drivetrain subsystem.
//const int LEFTMOTOR = 1;
//const int RIGHTMOTOR = 2;

// If you are using multiple modules, make sure to define both the port
// number and the module. For example you with a rangefinder:
//const int RANGE_FINDER_PORT = 1;
//const int RANGE_FINDER_MODULE = 1;

#endif
