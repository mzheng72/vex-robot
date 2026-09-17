#include "vex.h"
using namespace vex;

int screenchoose() {

  while( initializing == false || SCREEN_ON == true ) {

    if (BSCREEN_ON == false||BSCREEN_ON == false){
    
    Brain.Screen.clearScreen();
    Brain.Screen.printAt( 0 , SCREEN_MAX_HEIGHT*1/12, "LeftMotor1");
    Brain.Screen.printAt( 0 , SCREEN_MAX_HEIGHT*2/12, "LeftMotor2");
    Brain.Screen.printAt( 0 , SCREEN_MAX_HEIGHT*3/12, "LeftMotor3");
    Brain.Screen.printAt( 0 , SCREEN_MAX_HEIGHT*4/12, "distance1");
    Brain.Screen.printAt( 0 , SCREEN_MAX_HEIGHT*5/12, "distance2");
    Brain.Screen.printAt( 0 , SCREEN_MAX_HEIGHT*6/12, "distance3");
    // Brain.Screen.printAt( 0 , SCREEN_MAX_HEIGHT*7/12, "catapult");
    Brain.Screen.printAt( 0 , SCREEN_MAX_HEIGHT*8/12, "intake");
    Brain.Screen.printAt( 0 , SCREEN_MAX_HEIGHT*9/12, "updown");
    Brain.Screen.printAt( 0 , SCREEN_MAX_HEIGHT*10/12, "color");

    Brain.Screen.printAt( SCREEN_MAX_WIDTH/4+20 , SCREEN_MAX_HEIGHT*1/12, "%.2lf", RightMotor1.position(deg));
    Brain.Screen.printAt( SCREEN_MAX_WIDTH/4+20 , SCREEN_MAX_HEIGHT*2/12, "%.2lf", RightMotor2.position(deg));
    Brain.Screen.printAt( SCREEN_MAX_WIDTH/4+20 , SCREEN_MAX_HEIGHT*3/12, "%.2lf", RightMotor3.position(deg));
    Brain.Screen.printAt( SCREEN_MAX_WIDTH/4+20 , SCREEN_MAX_HEIGHT*4/12, "%.2lf", Distance1.objectDistance(mm));
    Brain.Screen.printAt( SCREEN_MAX_WIDTH/4+20 , SCREEN_MAX_HEIGHT*5/12, "%.2lf", Distance2.objectDistance(mm));
    Brain.Screen.printAt( SCREEN_MAX_WIDTH/4+20 , SCREEN_MAX_HEIGHT*6/12, "%.2lf", Distance3.objectDistance(mm));
    // Brain.Screen.printAt( SCREEN_MAX_WIDTH/4+20 , SCREEN_MAX_HEIGHT*7/12, "%.2lf", Distance1.objectDistance(mm));
    Brain.Screen.printAt( SCREEN_MAX_WIDTH/4+20 , SCREEN_MAX_HEIGHT*8/12, "%.2lf", intake1.position(deg));
    Brain.Screen.printAt( SCREEN_MAX_WIDTH/4+20 , SCREEN_MAX_HEIGHT*9/12, "%.2lf", Updownrotation.position(deg));
    Brain.Screen.printAt( SCREEN_MAX_WIDTH/4+20 , SCREEN_MAX_HEIGHT*10/12, "%.2lf", Optical1.value());

    Brain.Screen.printAt( SCREEN_MAX_WIDTH/2 , SCREEN_MAX_HEIGHT*1/12, "L1Temperature");
    Brain.Screen.printAt( SCREEN_MAX_WIDTH/2 , SCREEN_MAX_HEIGHT*2/12, "L2Temperature");
    Brain.Screen.printAt( SCREEN_MAX_WIDTH/2 , SCREEN_MAX_HEIGHT*3/12, "L3Temperature");
    Brain.Screen.printAt( SCREEN_MAX_WIDTH/2 , SCREEN_MAX_HEIGHT*4/12, "R1Temperature");
    Brain.Screen.printAt( SCREEN_MAX_WIDTH/2 , SCREEN_MAX_HEIGHT*5/12, "R2Temperature");
    Brain.Screen.printAt( SCREEN_MAX_WIDTH/2 , SCREEN_MAX_HEIGHT*6/12, "R3Temperature");
    Brain.Screen.printAt( SCREEN_MAX_WIDTH/2 , SCREEN_MAX_HEIGHT*7/12, "CTTemperature");
    Brain.Screen.printAt( SCREEN_MAX_WIDTH/2 , SCREEN_MAX_HEIGHT*8/12, "INTemperature");
    Brain.Screen.printAt( SCREEN_MAX_WIDTH/2 , SCREEN_MAX_HEIGHT*9/12, "PHTemperature");
    Brain.Screen.printAt( SCREEN_MAX_WIDTH/2 , SCREEN_MAX_HEIGHT*10/12,"UDTemperature");

    Brain.Screen.printAt( SCREEN_MAX_WIDTH/4*3+20 , SCREEN_MAX_HEIGHT*1/12, "%.2lf", LeftMotor1.temperature(pct));
    Brain.Screen.printAt( SCREEN_MAX_WIDTH/4*3+20 , SCREEN_MAX_HEIGHT*2/12, "%.2lf", LeftMotor2.temperature(pct));
    Brain.Screen.printAt( SCREEN_MAX_WIDTH/4*3+20 , SCREEN_MAX_HEIGHT*3/12, "%2lf", LeftMotor3.temperature(pct));
    Brain.Screen.printAt( SCREEN_MAX_WIDTH/4*3+20 , SCREEN_MAX_HEIGHT*4/12, "%.2lf", RightMotor1.temperature(pct));
    Brain.Screen.printAt( SCREEN_MAX_WIDTH/4*3+20 , SCREEN_MAX_HEIGHT*5/12, "%.2lf", RightMotor2.temperature(pct));
    Brain.Screen.printAt( SCREEN_MAX_WIDTH/4*3+40 , SCREEN_MAX_HEIGHT*6/12, "%.2lf", RightMotor3.temperature(pct));
    Brain.Screen.printAt( SCREEN_MAX_WIDTH/4*3+20 , SCREEN_MAX_HEIGHT*7/12, "%.2lf", catapult.temperature(pct));
    // Brain.Screen.printAt( SCREEN_MAX_WIDTH/4*3+20 , SCREEN_MAX_HEIGHT*7/12, "%.2lf",flywheel1.rotation(deg));
    Brain.Screen.printAt( SCREEN_MAX_WIDTH/4*3+20 , SCREEN_MAX_HEIGHT*8/12, "%.2lf", intake1.temperature(pct));
    Brain.Screen.printAt( SCREEN_MAX_WIDTH/4*3+20 , SCREEN_MAX_HEIGHT*9/12, "%.2lf", updown1.temperature(pct));
    // Brain.Screen.printAt( SCREEN_MAX_WIDTH/4*3+20 , SCREEN_MAX_HEIGHT*10/12,"%.2lf", updown1.temperature(pct));
    //   Brain.Screen.printAt( SCREEN_MAX_WIDTH/4*3+20 , SCREEN_MAX_HEIGHT*8/12, "%d", auton);
    // Brain.Screen.printAt( SCREEN_MAX_WIDTH/4*3+20 , SCREEN_MAX_HEIGHT*9/12, "%d", controlmode);
    // Brain.Screen.printAt( SCREEN_MAX_WIDTH/4*3+20 , SCREEN_MAX_HEIGHT*10/12, "%d", Inertial1.rotation(deg));
    }

    // Controller.Screen.setCursor(1, 1);
    // Controller.Screen.print("Time: %d",Brain.Timer.time()/1000);

    if( CSCREEN_ON == true ){

    Controller.Screen.clearScreen();
    Controller.Screen.setCursor(1, 1);
    Controller.Screen.print("Drg: %.2lf",return_angle);
    Controller.Screen.setCursor(1, 12);
    Controller.Screen.print("BAT: %d", Brain.Battery.capacity());
  
    Controller.Screen.setCursor(2, 1);
    Controller.Screen.print("Base: %.0lf",LeftMotor1.position(degrees));

    Controller.Screen.setCursor(3, 1);
    Controller.Screen.print("X:%.2lf",X_position);
    //Controller.Screen.print("Tpct: %d",Pot1.value(pct));
  
    Controller.Screen.setCursor(2, 12);
   Controller.Screen.print("Y:%.2lf",Y_position);//("ZS:%.0lf",push.velocity(pct))
    Controller.Screen.setCursor(3, 12);
    Controller.Screen.print("AUTO: %d",auton);


     }
    sleep(5);




    
  //Brain.Screen.printAt(SCREEN_MAX_WIDTH / 2, 30, "Sensor Value");
  }



  return 0;
}