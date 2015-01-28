#include "WPILib.h"
#include "Commands/Command.h"
#include "Commands/ExampleCommand.h"
#include "CommandBase.h"
#include <cstdio>
#include <Joystick.h>
#include <Talon.h>
#include "Subsystems/MecanumDrivetrain.h"
#include "Robot.h"
#include "RobotMap.h"


void Robot::RobotInit()
{
	CommandBase::init();
	autonomousCommand = new ExampleCommand();
	lw = LiveWindow::GetInstance();
	joystick = new Joystick(1);//Right hand joystick
	robot = this;
}

void Robot::DisabledInit()
{

}

void DisabledPeriodic()
{
	Scheduler::GetInstance()->Run();
}

void Robot::DisabledPeriodic()
{
	Scheduler::GetInstance()->Run();
}

void Robot::AutonomousInit()
{

}

void Robot::AutonomousPeriodic()
{
	Scheduler::GetInstance()->Run();
}

void Robot::TeleopInit()
{

}

void Robot::TeleopPeriodic()
{
	Scheduler::GetInstance()->Run();
}

void Robot::TestInit()
{

}
void Robot::TestPeriodic()
{
	lw->Run();
}


START_ROBOT_CLASS(Robot);

