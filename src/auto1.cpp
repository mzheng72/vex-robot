#include "vex.h"
#include <sys/wait.h>
vex::task task_1_1;
  int task_auto_1_1(){
  {
    while(1){
    
 Optical1.setLightPower(100);
    if(Optical1.hue()<=20 && Optical1.hue()>=0 && Optical1.isNearObject()){
   IntakeVol(100);
    }
    else if(Optical1.hue()>=170 && Optical1.hue()<=270 && Optical1.isNearObject()){
   IntakeStop(1);
   wait(500);
   IntakeVol(100);
   
    }
    else {
    IntakeVol(100);
    }
}
}
    
  return 0;
  }
//////////////红方左边///////////////
void auto1()
{
  ////////////////////////////////////////////////
  //  Inertial1.setRotation(initial_degree,deg);
  // IntakeVol(60);
  // drive_to_point(-38, 30.5, 10, 80, 50, 1, 200, 900, 1, 1, 1, 4,50);
  RunpidTo(20,350,20,30,100,7,2,600,-33,43,0,2,1);
  RunpidStraightNTo(50,-1500,20,10,100,4,300,1700,-21,10);
  UpDownStop(0);
  TurnVolpidNTo(100,140,1,1000,27);
  IntakeVol(100);
  RunpidTo(60,900,20,5,50,0,0,800,135,43,0,2,1);
  RunpidTo(30,550,20,5,50,0,0,1000,101,43,5,2,1);
  IntakeVol(100);
    RunpidTo(45,-1100,20,5,50,0,0,900,105,43,50,2,1);
    TurnVolpidNTo(100,65,1,450,27);
  RunpidStraightNTo(55,500,20,6,60,0,10,850,64,10);
//   RunpidStraightNTo(50,-900,20,6,60,0,10,850,130,10);
  TurnVolpidNTo(100,31,1,550,25);
  RunpidStraightNTo(80,1850,20,10,100,0,10,1250,31,10);

// drive_to_point(22, -20, 5, 30, 20, 1, 100, 1000, 1, 1, 1, 0,50);
// TurnVolpidNTo(100,45,1,900,26);
// RunpidStraightNTo(50,1100,20,6,60,0,10,850,41,10);
IntakeVol(-100);
RunpidTo(60,500,20,5,50,0,0,600,45,43,0,2,1);
IntakeVol(100);
RunVol(5);
wait(500);
RunpidTo(15,-130,20,5,50,0,0,600,45,43,0,2,1);
airpoweredC.set(1);
IntakeVol(100);
RunpidTo(25,500,20,5,50,0,0,600,45,43,0,2,1);
airpoweredC.set(0);
wait(200);
IntakeVol(100);
RunpidTo(40,-750,20,5,50,0,0,800,45,43,0,2,1);
TurnVolpidNTo(100,-90,1,900,27);
airpoweredC.set(1);
  RunpidStraightNTo(70,1850,20,10,1400,20,200,1200,-89,10);
  airpoweredC.set(0);
  wait(200);
  RunpidTo(40,-400,20,5,50,0,0,800,-87,43,0,2,1); 
  RunpidTo(50,1300,20,5,50,0,0,800,-150,43,0,2,1);
wait(300);




// drive_to_point(-6, -16, 10, 80, 20, 1, 100, 1000, 1, 1, 1, 9,40);
// // airpoweredC.set(0);
// wait(300);
// TurnVolpidNTo(100,-170,1,900,26);
// airpoweredC.set(0);
// UpdownVol(100);
// wait(1000);


// RunVolAuto(20, 600);



  // TurnVolpidNTo(100,-155,1,550,26);
  // drive_to_point(-22, -5, 10, 40, 30, 2, 200, 1500, 1, 1, 1, 0,0);
  // TurnVolpidNTo(100,-93,1,550,26);
  // drive_to_point(-44, -4, 10, 40, 30, 2, 200, 1500, 1, 1, 1, 0,0);
  // TurnVolpidNTo(100,-135,1,550,26);
  // IntakeStop(0);
 
  // RunpidTo(25,360,20,15,100,0,500,550,-135,43,100,2,1);
  // TurnVolpidNTo(100,120,1,550,27);
  // TurnVolpidNTo(100,158,1,550,26);
  

  // IntakeVol(100);
  // drive_to_point(-36, -10, 0, 20, 20, 2, 200, 600, 1, 1, 9, 4,5);
  // RunpidTo(20,-200,20,15,100,1,500,300,0,43,100,2,1);
  // UpdownVol(-100);
  //   UpDownStop(0);
  //    wait(600);
  //    vex::task::stop(task_auto_1_1);
  //    UpdownVol(-100);
  // drive_to_point(-39, 28, 0, 40, 40, 2, 200, 1500, 1, 1, 10, 15,30);
 
  // UpDownStop(0);
  // airpoweredA.set(0);
  //    Optical1.setLightPower(0);




  
  // TurnVolpidNTo(100,79,1,550,27);
  // drive_to_point(11, 2, 0, 40, 40, 2, 200, 1500, 1, 1, 6, 13,20);
  // airpoweredC.set(1);
  // UpDownencode(100,400);
  // drive_to_point(25, 5, 0, 20, 20, 2, 200, 1500, 1, 1, 6, 0,0);
  // airpoweredC.set(0);
  // vex::task::stop(task_auto_1_1);
  // TurnVolpidNTo(100,-5,1,450,27);
  // RunpidTo(25,700,20,15,100,15,10,700,-5,43,100,2,1);
  // airpoweredA.set(0);
  // Optical1.setLightPower(0);
  // airpoweredA.set(0);
  ////////////////////////////////////////////////
  // IntakeVol(100);
  // drive_to_point(-37, 30.5, 10, 80, 50, 1, 200, 1000, 1, 1, 1, 0,0);
  // TurnVolpidNTo(80,-165,1,750,26);
  // IntakeStop(0);
  // RunpidTo(50,-730,20,15,100,1,620,900,-165,43,100,2,1);
  // IntakeVol(100);
  // RunpidTo(50,950,20,15,100,0,900,900,-180,43,100,2,1);
  // wait(300);
  // airpoweredA.set(0);
  // drive_to_point(-36, -5, 10, 80, 50, 1, 200, 1500, 1, 1, 1, 7,5);
  // wait(300);
  // TurnVolpidNTo(100,-135,1,550,26);
  // IntakeVol(-100);
  // RunVolAuto(50, 500);
  // UpDownStop(0);
  // RunpidStraightNTo(20,-700,10,4,10,2,700,1400,-135,11);
  // IntakeVol(100);
  // RunpidStraightNTo(30,500,10,4,10,0,0,800,-135,11);
  // RunpidStraightNTo(30,-300,10,4,10,0,800,500,-135,11);
  // RunpidStraightNTo(30,1000,10,4,10,0,0,1200,-135,11);
  // IntakeStop(0);
  // RunVolAuto(-40, 200);
  // TurnVolpidNTo(80,-150,1,650,26);
  // drive_to_point(-34, 20, 5, 50, 20, 1, 200, 900, 1, 1, 5, 8,10);
  // TurnVolpidNTo(80,-90,1,750,26);
  // RunpidStraightNTo(40,-1100,20,6,60,1,900,1500,-90,10);
  // TurnVolpidNTo(80,-180,1,750,26);
  // IntakeVol(100);
  // drive_to_point(0, 6, 10, 60, 40, 1, 200, 900, 1, 1, 1, 0,0);
  // wait(500);
  // drive_to_point(-3, 20, 10, 60, 40, 1, 200, 900, 1, 1, 1, 0,0);
  // airpoweredA.set(0);
  // drive_to_point(1, 30, 10, 60, 40, 1, 200, 900, 1, 1, 1, 0,0);
 
  
  //  RunpidStraightNTo(30,-400,10,4,10,0,0,1000,170,11);
  //  drive_to_point(14, -9, 10, 50, 30, 1, 200, 2000, 1, 1, 1, 0, 0);
  //  TurnVolpidNTo(100,180,1,550,25);
  //  RunpidStraightNTo(40,760,10,6,60,1,700,1000,180,10);
  //  drive_to_point(-9, -45, 10, 70, 5, 1, 200, 2000, 1, 1, 2, 0, 0);
  //  airpoweredA.set(0);
  //  IntakeVol(40);
  //   RunpidTo(60,1000,20,15,1000,0,0,900,-90,43,100,2,1);
  //   TurnVolpidNTo(100,0,1,550,26);
  //   RunpidStraightNTo(40,-900,10,6,60,1,700,1000,0,10);
  //   IntakeVol(-100);
  //   wait(200);
  //   IntakeVol(100);
  //   RunpidTo(80,2200,20,0,0,3,2000,1000,0,55,0,2,1);
    // RunpidStraightNTo(40,900,10,6,60,1,700,1000,0,10);
    
    // RunpidTo(60,-900,20,15,1000,1,750,900,0,43,100,2,1);
  //  TurnVolpidNTo(100,0,1,550,26);
   
  //  wait(500);
  // //  IntakeStop(0);
  //  RunpidTo(40,1400,20,20,1000,0,0,1000,-45,43,0,2,1);
  //  IntakeVol(100);
  //   RunpidTo(60,2200,20,50,2000,0,0,1450,-45,32,100,2,1);
  //  RunXY_Straight(100, -14, -2, 1, 3000,2);
  //////////////////////////////////////////////////////////////
  // RunpidStraightNTo(80,-1500,10,160,500,1,900,1000,-30,37);
  // RunXY_Straight(100, 16, -36, 0.2, 6000,2);
  // RunXY_Straight(70, 91, 91, 1.5, 3000,1);
  // RunXY(70, 95, 1, 1.5, 3000);
  // RunXY(70, 12, -3, 1.5, 3000);
  
  // drive_to_point(17, -33.5, 20, 70, 40, 1, 200, 1200, 1, 1, 1, 1, 4);
  
}