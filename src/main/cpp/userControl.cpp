#include "Robot.h"

void Robot::userControl() {
  if (DriveStick.GetRawButton(1)) {
    Flywheel.Set(0.9);
  }
  else {
    Flywheel.Set(0);
  }
  if (Buttons.GetRawButton(1)) {
    Grabber.Set(-1);
  }
  else if (Buttons.GetRawButton(2)) {
    Grabber.Set(1);
  }
  else {
    Grabber.Set(0);
  }
  if (Buttons.GetRawButton(3)) {
    Up_Down.Set(1);
  }
  else if (Buttons.GetRawButton(6)) {
    Up_Down.Set(-1);
  }
  else if (Buttons.GetRawButton(4)) {
    Transition.Set(1);
    High_Conveyor.Set(-1);
    Low_Conveyor.Set(1);
  }
  else if (Buttons.GetRawButton(5)) {
    Transition.Set(-1);
    High_Conveyor.Set(1);
    Low_Conveyor.Set(-1);
  }
  else {
    Up_Down.Set(0);
    Low_Conveyor.Set(0);
    High_Conveyor.Set(0);
    Transition.Set(0);
  }
}

