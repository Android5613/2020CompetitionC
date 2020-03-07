/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2020 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <string>
// Impports needed items for use.
#include <frc/TimedRobot.h>
#include <frc/smartdashboard/SendableChooser.h>
#include <frc/Timer.h>
#include <frc/Spark.h>
#include <frc/drive/DifferentialDrive.h>
#include <frc/Joystick.h>
#include <frc/SpeedControllerGroup.h>

// Import ctre libraries. Requires the ctre libraries to be set up.
#include "ctre/Phoenix.h"

class Robot : public frc::TimedRobot {
 // everything in the public section is accessable to things outside the class.
 public:
  Robot();
  void RobotInit() override;
  void RobotPeriodic() override;
  void AutonomousInit() override;
  void AutonomousPeriodic() override;
  void TeleopInit() override;
  void TeleopPeriodic() override;
  void DisabledInit() override;
  void DisabledPeriodic() override;
  void TestInit() override;
  void TestPeriodic() override;

 private:
  // Includes the functions in the private section so they can use the variables.
  void robot_drive(void);
  void userControl(void);
  
  // Defines a timer
  frc::Timer time;
  
  // Defines our joystick. We have a custom controller which includes a partailly dismantled joystick
  // and an array of buttons. You should customize this to fit your controller
  frc::Joystick DriveStick{0};
  frc::Joystick Buttons{1};
  
  // Defines our Spark motor controllers.
  frc::Spark spark3 {7};
  frc::Spark spark2{6};
  frc::Spark spark{5};
  frc::Spark Grabber{1};
  frc::Spark FlyWheel{0};
  frc::Spark FrontAndBack{3};
  frc::Spark Bottom{1};
  frc::Spark Raise_Lower{2};
  
  // Defines our TalonSRX drive motor controllers from ctre.
  // ctre motor controllers cannot be put into speedcontrollergroups, so create your own drive function.
  // It is simpler than you think.
  TalonSRX FLMotor{0};
  TalonSRX RLMotor{1};
  TalonSRX FRMotor{2};
  TalonSRX RRMotor{3};
};
