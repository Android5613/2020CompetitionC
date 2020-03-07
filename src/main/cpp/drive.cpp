#include "Robot.h"

// This is the drive function to drive the robot.
void Robot::robot_drive() {
  // Sets the forward speed to be equal to the Y axis times .6
  double speed = DriveStick.GetY() * 0.6;
  // Sets the turn speed to the Z axis (twist) times .3
  double turn = (.7*DriveStick.GetZ()) * .3;
  
  // Sets the motors to be the speed with the turn value.
  double left = speed+turn;
  double right = speed-turn;
  
  // Moves the motors
  FLMotor.Set(ControlMode::PercentOutput, left);
  RLMotor.Set(ControlMode::PercentOutput, left);
  FRMotor.Set(ControlMode::PercentOutput, right);
  RRMotor.Set(ControlMode::PercentOutput, right);
}
// The commented code below does the same thing as the code above.
/*
void Robot::robot_drive() {

  drive.ArcadeDrive(DriveStick.GetY(), 0.7*DriveStick.GetZ(), false);

}
*/