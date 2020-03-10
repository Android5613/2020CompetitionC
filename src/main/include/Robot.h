/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2020 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <string>
// Imports needed items for use.
#include <frc/TimedRobot.h>
#include <frc/smartdashboard/SendableChooser.h>
#include "cscore_cpp.h"
#include <frc/Timer.h>
#include <frc/Spark.h>
#include <frc/Joystick.h>
#include "networktables/NetworkTable.h"
#include "networktables/NetworkTableEntry.h"
#include "networktables/NetworkTableInstance.h"
#include "frc/smartdashboard/SmartDashboard.h"

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
  void limelight(void);
  
  // Defines a timer
  frc::Timer time;

  std::shared_ptr<NetworkTable> limelighttable = nt::NetworkTableInstance::GetDefault().GetTable("limelight");
  
  // Defines our joystick. We have a custom controller which includes a partailly dismantled joystick
  // and an array of buttons. You should customize this to fit your controller
  frc::Joystick DriveStick{0};
  frc::Joystick Buttons{1};
  
  // Defines our Spark motor controllers.

  frc::Spark Flywheel{0};
  frc::Spark Grabber{1};
  frc::Spark Up_Down{2};
  frc::Spark Transition{3};
  frc::Spark Low_Conveyor{4};
  frc::Spark High_Conveyor{5};

  frc::Spark Telescope{6};
  frc::Spark Winch{7};
  
  // Defines our TalonSRX drive motor controllers from ctre.
  // ctre motor controllers cannot be put into speedcontrollergroups, so create your own drive function.
  // It is simpler than you think.
  TalonSRX FLMotor{0};
  TalonSRX RLMotor{1};
  TalonSRX FRMotor{2};
  TalonSRX RRMotor{3};
};
