#include "Robot.h"

void Robot::shoot() {
  if (DriveStick.GetRawButton(1)) {
    FlyWheel.Set(1);
  }
  else {
    FlyWheel.Set(0);
  }
}

void Robot::load_unload() {
  if (Buttons.GetRawButton(1)) {
    BottomAndBack.Set(0.5);
    Front.Set(0.5);
  }
  else if (Buttons.GetRawButton(2)){
    BottomAndBack.Set(0.5);
    Front.Set(0.5);
  }
  else {
    BottomAndBack.Set(0);
    Front.Set(0);
  }
}


void Robot::pick_up() {



}

void Robot::raise_lower() {



}