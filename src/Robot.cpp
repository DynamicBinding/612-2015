#include "WPILib.h"
#include <Joystick.h>
#include <Talon.h>
#include "Robot.h"
#include "RobotMap.h"


void Robot::RobotInit()
{
	robotDrive = new RobotDrive(MOTOR_LF,MOTOR_LR,MOTOR_RF,MOTOR_RR);//The 4 talons
	joystick = new Joystick(1);//Right hand joystick
	robot = this;
}

void Robot::DisabledInit()
{

}

void DisabledPeriodic()
{

}

void Robot::DisabledPeriodic()
{

}

void Robot::AutonomousInit()
{

}

void Robot::AutonomousPeriodic()
{

}

void Robot::TeleopInit()
{

}

void Robot::TeleopPeriodic()
{
	float l = joystick->GetRawAxis(1);
	float r = joystick->GetRawAxis(5);
	robotDrive->TankDrive(l,r);
}

void Robot::TestInit()
{

}
void Robot::TestPeriodic()
{

}


START_ROBOT_CLASS(Robot);

