#ifndef ROBOT_H
#define ROBOT_H

class Robot: public IterativeRobot
{
private:
	LiveWindow* lw;
	Joystick* joystick;
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
};
#endif
