#include "Robot.h"
// User control function for controlling parts of the robot.
void Robot::userControl() {
  // Fires the shooter.
  if (DriveStick.GetRawButton(1)) {
    FrontAndBack.Set(.25);
    Bottom.Set(.25);
    Grabber.Set(0);
    FlyWheel.Set(0.5);
    Raise_Lower.Set(0);
  }
  // Load the power cell
  else if (Buttons.GetRawButton(1)) {
    FrontAndBack.Set(1);
    Bottom.Set(1);
    Grabber.Set(1);
    FlyWheel.Set(0);
    Raise_Lower.Set(0);
  }
  // Lower the grabbing arm
  else if (Buttons.GetRawButton(12)) {
    FrontAndBack.Set(0);
    Bottom.Set(0);
    Grabber.Set(0);
    FlyWheel.Set(0);
    Raise_Lower.Set(0.5);
  }
  // Raise the grabbing arm
  else if (Buttons.GetRawButton(11)) {
    FrontAndBack.Set(0);
    Bottom.Set(0);
    Grabber.Set(0);
    FlyWheel.Set(0);
    Raise_Lower.Set(-1);
  }
  // Unload the robot. Can be used to help alliance members.
  else if (Buttons.GetRawButton(2)) {
    FrontAndBack.Set(-.5);
    Bottom.Set(-.5);
    Grabber.Set(-0.5);
    FlyWheel.Set(0);
    Raise_Lower.Set(0);
  }
  // If none of the functions are active, turn all motors off.
  else {
    FrontAndBack.Set(0);
    Bottom.Set(0);
    Grabber.Set(0);
    FlyWheel.Set(0);
    Raise_Lower.Set(0);
  }
}





