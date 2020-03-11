/*
#include "Robot.h"

float f = 1;
float KpAim = -0.1f;
float KpDistance = 0.1f;
float min_command = 0.05f;

void Robot::limelight() {
  
  double tx = limelighttable->GetNumber("tx",0.0);
  double ty = limelighttable->GetNumber("ty",0.0);
  double targetFound = limelighttable->GetNumber("tv", 0.0);
  int angle = 30;

  float distance = 64.25/(tan(ty+angle));
  float heading_error = -tx;
  float distance_error = distance - 24;
  float steering_adjust = 0;
  
  if (tx > 0.5) {
    float steering_ajust = KpAim*heading_error - min_command;
  }
  else if (tx < -0.5) {
    float steering_adjust = KpAim*heading_error - min_command;
  }

  float distance_adjust = KpDistance * distance_error;

  double left = distance_adjust + steering_adjust;
  double right = distance_adjust - steering_adjust;

  // Moves the motors
  FLMotor.Set(ControlMode::PercentOutput, -left);
  RLMotor.Set(ControlMode::PercentOutput, -left);
  FRMotor.Set(ControlMode::PercentOutput, right);
  RRMotor.Set(ControlMode::PercentOutput, right);
}
*/