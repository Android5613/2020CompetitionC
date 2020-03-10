#include "Robot.h"

void Robot::limelight() {
  
  double targetOffsetAngle_Horizontal = limelighttable->GetNumber("tx",0.0);
  double targetOffsetAngle_Vertical = limelighttable->GetNumber("ty",0.0);
  int angle = 30;

  float distance = 4.2083333/(tan(targetOffsetAngle_Vertical+angle));
  
  
  
}


