#include "Drivetrain.h"
#include "../RobotMap.h"

Drivetrain::Drivetrain(CanTalonSRX* Talonfl, CanTalonSRX* Talonfr, CanTalonSRX* Talonbl, CanTalonSRX* Talonbr):
		Subsystem("Drivetrain"),
		RobotDrive(Talonfl, Talonfr, Talonbl, Talonbr)
{
	Talonfl = new CanTalonSRX(1);
	Talonfr = new CanTalonSRX(2);
	Talonbl = new CanTalonSRX(3);
	Talonbr = new CanTalonSRX(4);
}

void Drivetrain::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

void Drivetrain::move(float magnitude, float direction, float rotation)
{
	MecanumDrive_Polar(magnitude, direction, rotation);
}

void Drivetrain::stahp()
{
	MecanumDrive_Polar(0.0f, 0.0f, 0.0f);
}
