#ifndef ROBOT_H
#define ROBOT_H

class Robot: public IterativeRobot
{
private:
	LiveWindow* lw;
	Joystick* joystick;
	//all acceleration is measured in meters per second squared
	Robot* robot;
public:
	void RobotInit();
	void AutonomousInit();
	void AutonomousPeriodic();
	void TeleopInit();
	void TeleopPeriodic();
	void TestInit();
	void TestPeriodic();
	void DisabledInit();
	void DisabledPeriodic();

	//612 functions
	void TestPulley();
	//612 Objects
	RobotDrive* robotDrive;
};
#endif
