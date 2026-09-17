#include "vex.h"
#include <sys/wait.h>
  int a_vex=0;
    int flywheelV_vex=400;
    int k_vex=0;
using namespace vex;

void vexcodeInit(void) {

  // Optical1.setLightPower(100,percent);
  initializing = true;
  Inertial1.calibrate();
  Controller.Screen.clearScreen();
  Gyrobefore_rad=0.0;
  while (Inertial1.isCalibrating()) {           
    Brain.Screen.setFillColor(red);
    Brain.Screen.setPenColor(vex::color::white);
    Brain.Screen.setFont(vex::fontType::mono40);
    Brain.Screen.printAt(SCREEN_MAX_WIDTH/4, SCREEN_MAX_HEIGHT/2-8, "Initializing");
    Controller.Screen.setCursor(2, 8);
    Controller.Screen.print("Initializing");


    wait(100); 
  }
  
  Controller.Screen.clearScreen();
  Brain.Screen.clearScreen();
  IntakeReset();
  Controller.rumble(".");
  initializing = false;
     Optical1.setLightPower(100);
    
}

int batteryalert() {
  while (1) {
    if (Brain.Battery.capacity(pct) <= batteryalert_level) {
      Controller.Screen.clearScreen();
      Controller.rumble("-");
      sleep(250);
      Controller.rumble(".");
      Controller.Screen.print("LOW BATTERY");
    }
  }
}
vex::task batteryalert1 = vex::task(batteryalert);

int updateangle() {
  while (1) {
  
  return_angle = Inertial1.rotation(degrees);
   while(return_angle >= 180) {
     return_angle -= 360;
     }
   while(return_angle < -180){
     return_angle += 360;
     }
//  printf("%.2f\n", LeftMotor1.velocity(rpm));
   wait(10);
    }
  }

vex::task updateangle1 = vex::task(updateangle);

int updatelocation() {
  while (1) {
  UpdateXY();
  sleep(5);
    }
  }

vex::task updatelocation1 = vex::task(updatelocation);

int some_actions() {
  while (1) {
    sleep(10);
    switch (steps) {
      
      case 0:
      break;
    
    ////////////       1      ////////////////
    case 1:
      
    while (1) {
    if (Distance2.objectDistance(mm)<=10) {
    airpoweredB.set(1);
    wait(100);
    break;
    }
    }
   
       
       
     

     steps = 0;
    break; 


    ////////////       2      ////////////////
    case 2:
    
   IntakeVol(-100);
    
    steps = 0;
    break; 


    ////////////       3      ////////////////
    case 3:
airpoweredB.set(0);


    steps = 0;
    break; 


    ////////////       4      ////////////////
    case 4:
  UpDownencodeN(100, 1, 600, 1);
  waitUntil(Distance2.objectDistance(mm)<12);
  airpoweredB.set(1);
    steps = 0;
    break; 


    ////////////       5      ////////////////
    case 5:
   UpDownencodeN(60, 14, 1000, 1);

      

    steps = 0;
    break; 

    
    ////////////       6      ////////////////
    case 6:
    IntakeStop(0);

   

    steps = 0;
    break; 


    ////////////       7      ////////////////
    case 7:
UpDownencodeN(100, 240,500, 1);
    steps = 0;
    break; 


    ////////////       8      ////////////////
    case 8:
 IntakeStop(0);
 



    steps = 0;
    break;


    ////////////       9      ////////////////
    case 9:
airpoweredC.set(1);


    steps = 0;
    break; 


    ////////////       10     ////////////////
    case 10:
airpoweredC.set(0);
    steps = 0;
    break; 


    ////////////       11     ////////////////
    case 11:
  airpoweredC.set(1);
      
 

    steps = 0;
    break; 


    ////////////       12     ////////////////
    case 12:
    airpoweredB.set(0);
    airpoweredC.set(1);
IntakeVol(10);
wait(200);
airpoweredC.set(0);

    steps = 0;
    break; 
////////////       13     ////////////////
    case 13:
 UpDownencodeN(100, 1, 600, 1);
  waitUntil(Distance2.objectDistance(mm)<12);
  wait(100);
  airpoweredB.set(1);
    steps = 0;
    break; 
    
    //////////////////////////////////////////  
    case 14:
IntakeVol(-100);

    steps = 0;
    break; 

    case 15:
// IntakeVol(-100);
airpoweredB.set(0);
    steps = 0;
    break; 


 case 16:
// IntakeVol(100);

    steps = 0;
    break; 

     case 17:
// IntakeVol(-100);
 IntakeVol(100);
CatapultVol(100);
wait(900);
CatapultStop(0);

    steps = 0;
    break; 
 case 18:

 UpdownVol(-100);
    steps = 0;
    break; 
case 19:

  

    steps = 0;
    break; 
    default:
      steps = 0;
      break;
    
    case 20:
   airpoweredC.set(1);
     steps = 0;
    break; 
    case 21:
   airpoweredC.set(1);
   UpdownVol(-100);
   wait(1200);
   UpdownVol(-7);
     steps = 0;
    break; 
    case 22:
    UpdownVol(100);
    wait(300);
    UpdownVol(-100);
    wait(350);
  IntakeVol(100);
  
     steps = 0;
    break; 
    case 23:

  
     steps = 0;
    break; 
    
    case 24:

  
     steps = 0;
    break; 
    }
  }
  return 0;
}


vex::task Task10 = vex::task(some_actions);
