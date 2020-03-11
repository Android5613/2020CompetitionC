#include "Robot.h"

float Kp = -0.1;
float min_command = 0.05;

void Robot::limelight() {
  
  double tx = limelighttable->GetNumber("tx",0.0);
  double ty = limelighttable->GetNumber("ty",0.0);
  double targetFound = limelighttable->GetNumber("tv", 0.0);
  int angle = 30;

  float distance = 52.5/(tan(ty+angle));
  

  if (distance==24 and targetFound==1 and tx < -0.5 or tx > 0.5) {
     


  }
  else if (distance==24 and targetFound==1) {
     float adjust = 0;
     float heading_error = -tx;

     if (tx > .5) {
       
       adjust = Kp*heading_error - min_command;
       
     }
     else if (tx <-0.5) {
       adjust = Kp*heading_error +min_command
     }
    
    
  }
  else if (targetFound==1) {
    
    
    
  }
  else {

    

  }
}


