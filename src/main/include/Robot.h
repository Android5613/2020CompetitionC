/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2020 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <string>

#include <frc/TimedRobot.h>
#include <frc/smartdashboard/SendableChooser.h>
#include <frc/Timer.h>
#include <frc/Spark.h>
#include <frc/drive/DifferentialDrive.h>
#include <frc/Joystick.h>
#include <frc/SpeedControllerGroup.h>

class Robot : public frc::TimedRobot {
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

  void robot_drive(void);
  void shoot(void);
  void load_unload(void);
  void pick_up(void);
  void raise_lower(void);
  
  frc::Timer time;

  frc::Joystick DriveStick{0};
  frc::Joystick Buttons{1};

  frc::Spark Grabber{8};
  frc::Spark FlyWheel{7};
  frc::Spark BottomAndBack{6};
  frc::Spark Front{5};
  frc::Spark Raise_Lower{4};

  frc::Spark FLMotor{3};
  frc::Spark RLMotor{2};
  frc::Spark FRMotor{1};
  frc::Spark RRMotor{0};

  frc::SpeedControllerGroup left{FLMotor, RLMotor};
  frc::SpeedControllerGroup right{FRMotor, RRMotor};

  frc::DifferentialDrive drive{left, right};
};
