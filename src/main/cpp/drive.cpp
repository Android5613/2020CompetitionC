#include "Robot.h"

void Robot::robot_drive() {

  drive.ArcadeDrive(DriveStick.GetY(), DriveStick.GetX(), true);

}
