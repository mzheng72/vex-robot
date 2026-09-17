#include "vex.h"
#include <sys/wait.h>
////蓝方右边///
vex::task task_2_1;
  int task_auto_2_1()
  {
    while(1){
    
 Optical1.setLightPower(100);
if(Optical1.value()<=10){
  airpoweredC.set(1);
}
else if(Optical1.value()>=200){
    airpoweredC.set(0);
}
}
    
  return 0;
  }

void auto2() 
{
  RunpidTo(20,400,20,30,100,7,2,600,35,43,0,2,1);
  RunpidStraightNTo(56,-1820,20,11,100,4,300,2000,21,10);
  UpDownStop(0);
  TurnVolpidNTo(100,-137,1,1000,27);
  IntakeVol(100);
  RunpidTo(60,780,20,5,50,0,0,950,-133,43,0,2,1);
  RunpidTo(30,750,20,5,50,0,0,1000,-100,43,5,2,1);
  IntakeVol(100);
    RunpidTo(45,-900,20,5,50,0,0,900,-110,43,50,2,1);
    TurnVolpidNTo(100,-67,1,450,27);
    IntakeVol(100);
  RunpidStraightNTo(80,600,20,6,60,0,10,950,-65,10);
//   RunpidStraightNTo(50,-900,20,6,60,0,10,850,130,10);
  TurnVolpidNTo(100,-20,1,550,25);
  RunpidStraightNTo(80,1850,20,10,100,0,10,1250,-27,10);

// drive_to_point(22, -20, 5, 30, 20, 1, 100, 1000, 1, 1, 1, 0,50);
// TurnVolpidNTo(100,45,1,900,26);
// RunpidStraightNTo(50,1100,20,6,60,0,10,850,41,10);
IntakeVol(-100);
RunpidTo(60,500,20,5,50,0,0,600,-45,43,0,2,1);
IntakeVol(100);
RunVol(5);
wait(500);
RunpidTo(15,-130,20,5,50,0,0,600,-45,43,0,2,1);
airpoweredC.set(1);
IntakeVol(100);
RunpidTo(25,500,20,5,50,0,0,600,-45,43,0,2,1);
airpoweredC.set(0);
wait(200);
IntakeVol(100);
RunpidTo(40,-750,20,5,50,0,0,800,-45,43,0,2,1);
TurnVolpidNTo(100,90,1,900,27);
airpoweredC.set(1);
  RunpidStraightNTo(70,1850,20,10,1400,20,200,1200,89,10);
  airpoweredC.set(0);
  wait(200);
  RunpidTo(40,-400,20,5,50,0,0,800,87,43,0,2,1); 
  RunpidTo(50,1500,20,5,50,0,0,1000,87,43,0,2,1);
 wait(300);
//////////////////////////////////////////
// drive_to_point(41, -5, 10, 50, 40, 1, 200, 1200, 1, 1, 4, 0, 0);
// drive_to_point(20, 24, 10, 50, 40, 1, 200, 1200, 1, 1, 1, 0, 0);
// TurnVolpidNTo(100,50,1,600,25);
// drive_to_point(11, 44, 10, 50, 40, 1, 200, 1200, 1, 1, 1, 0, 0);
// airpoweredA.set(0);
  // RunpidTo(73,-1500,20,20,160,1,1000,1100,22,37,0,2);//(1440)
  // IntakeVol(100);
  // drive_to_point(2, -31, 10, 60, 45, 1, 200, 2000, 1, 1, 1, 0, 0);
  // TurnVolpidNTo(100,157,1,550,26);
  // drive_to_point(4, -49, 10, 50, 40, 1, 200, 2000, 1, 1, 1, 0, 0);
  //  RunpidStraightNTo(30,-350,10,4,10,0,0,500,160,11);
  //  drive_to_point(11, -49, 10, 50, 40, 1, 200, 2000, 1, 1, 1, 0, 0);
   
//   IntakeVol(100);
//  RunpidTo(100,2300,20,100,1000,16,1,1000,-13,55,0,2,1);
//   RunpidTo(100,-2400,20,0,0,0,20,1000,0,55,1950,2,1);
//   RunVolAuto(-30, 300);
//   IntakeVol(-20);
//   TurnVolpidNTo(100,56,1,550,26);
//   IntakeVol(-100);
//   wait(250);
//   TurnVolpidNTo(90,-90,1,500,26);
//   IntakeVol(100);
//   RunpidTo(60,1150,20,15,1000,3,200,900,-90,43,100,2,1);
//   RunVol(30);
// waitUntil(Distance1.objectDistance(mm)<=260);
//   RunpidStraightNTo(80,-1350,10,160,500,0,0,1000,-90,37);
//   TurnVolpidNTo(100,58,1,750,26); 
//   RunpidTo(100,1000,20,0,0,5,300,700,58,36,0,1);
//   TurnVolpidNTo(100,100-90,1,500,22); 
//   TurnVolpidNTo(100,130-90,1,500,22); 
//   IntakeVol(100);
//   RunpidTo(100,1500,20,100,1000,12,200,900,95-90,37,0,2);
//   IntakeStop(0);
//   IntakeVol(-100);
//   RunpidTo(60,-600,20,20,1000,3,200,1000,10,43,0,2,1);

//     RunpidTo(100,1500,20,100,1000,0,200,900,15,37,0,2);
//     // RunVolAuto(-40,500);
//     // IntakeVol(-100);
//     // RunpidTo(100,1400,20,100,1000,3,200,1000,00,43,300,2,1);
// // RunpidStraightNTo(100,1400,10,100,500,6,1000,650,93-90,37);
// RunpidStraightNTo(35,-450,10,4,10,0,0,600,0,11);
// TurnVolpidNTo(90,0-90,1,600,26);
// // RunVolAuto(-50, 250);
// RunpidTo(70,2500,20,40,1000,3,1700,1350,30-90,41,200,1,0);
// // RunVolAuto(-40,100);
// TurnVolpidNTo(90,25,1,600,21);
// RunpidTo(70,2700,20,700,1000,5,1000,1350,90,41,100,2,0);
// RunVolAuto(-40,200);
//  airpoweredA.set(0);
//      airpoweredC.set(0);
  /////////////////////////////////////////////////////
//   RunpidTo(100,2600,20,100,2000,7,1,950,-12.8,41,700,1,0);
//   RunpidTo(100,-3000,20,100,2000,0,0,1150,-14,41,300,1,0);
//   RunVolAuto(-30, 300);
//   IntakeVol(-20);
//   TurnVolpidNTo(100,56,1,600,25);
//   Intake(-100);
//   wait(200);
//   // IntakeStop(0);
//   TurnVolpidNTo(80,-90,1,600,21);
//   IntakeVol(100);
//   // RunpidStraightNTo(50,1200,12,45,1000,3,700,1000,-90,3);
//   RunpidTo(50,1200,20,20,1000,3,200,1000,-90,43,300,2,1);
// RunVol(30);
//   waitUntil(Distance1.objectDistance(mm)<=130);
//   // BaseMotorStop(2);
//   // wait(100);
//   // BaseMotorStop(0);
//   // BaseMotorStop(2);
//   // BaseMotorStop(0);
//   RunpidTo(80,-3200,20,40,2000,1,1500,1250,-45-90,41,800,1,0);
// vex::task task_auto2_1 = vex::task(task_auto_2_1);
//   TurnVolpidNTo(80,-300,1,700,21);
// IntakeVol(-50);
//   RunpidTo(100,1200,20,100,1000,14,10,1000,-357,43,300,2,0);
//   RunpidStraightNTo(47,-700,10,0,15,15,10,600,-340,37);
//   RunpidStraightNTo(100,2000,100,100,500,0,0,950,-360,37);
//   /////////////////////////////////////////////
// //   TurnVolpidNTo(100,-48-90,1,300,25);
// // RunpidTo(40,-1400,20,25,1000,2,10,1200,-84-90,43,600,2,0);
// //  RunVolAuto(30, 100);
// //  TurnVolpidNTo(90,110-90,1,900,26); 
// //  IntakeStop(0);
// // RunpidStraightNTo(100,1300,10,100,500,0,0,750,100-90,37);
// RunpidStraightNTo(47,-700,10,0,0,0,0,650,92-90-360,37);
// TurnVolpidNTo(90,0-90-360,1,600,25);
// RunVolAuto(-40, 250);
// RunpidTo(80,3250,20,50,1500,3,1000,1150,30-90-360,41,200,2,0);
// // wait(200);
// TurnVolpidNTo(90,-320,1,600,23); 
// RunpidTo(100,3200,20,100,1000,5,200,1100,-270,55,200,2,1);
// RunpidTo(60,-1500,20,0,0,6,10,1300,-360,55,0,2,1);
////////////////////////////////////////////////////////////////////
// RunpidTo(60,600,20,0,0,4,100,800,160-90-360,55,0,2,1);
// // wait(100);
// TurnVolpidNTo(100,56-90-360,1,550,25);
// RunpidTo(70,1300,20,6,60,3,400,700,50-90-360,36,0,1);
// TurnVolpidNTo(100,180-90-360,1,600,25);
// RunpidTo(100,2000,20,0,0,5,200,900,180-90-360,55,0,2,1);
// RunVolAuto(-50, 100);
//  airpoweredA.set(0);
//      airpoweredG.set(0);
////////////////////////////////////
// RunpidTo(60,-2400,20,0,0,3,300,1300,90-90,55,0,2,1);
  ///////////////////////////////////////
//   task_auto2_1= vex::task(task_auto_2_1);
//   RunpidTo(60,1700,20,50,1400,9,500,1300,-90,65,0,2,1);
//    vex::task::stop(task_auto_2_1);
//   TurnVolpidNTo(100,28,1,600,25);
// //  RunpidStraightNTo(47,700,10,0,0,0,0,600,115,37);
// //  TurnVolpidNTo(100,115,1,600,25);
//  RunpidTo(50,1500,10,20,500,6,600,1100,90,44,500,2,1);
//  RunpidTo(60,1200,10,65,1000,11,500,800,91,40,0,0,0);
//   RunpidTo(30,-400,10,0,0,5,100,600,90,11,400,0,0);
//  RunpidTo(60,820,20,0,0,0,0,1200,-87,55,0,2,1);
//   RunVol(30);
//   waitUntil(Inertial1.roll()<=-5);
//   AllMotorStop(0);
//   RunpidTo(30,-500,10,0,0,3,100,600,-90,11,400,0,0);
//     TurnVolpidNTo(100,-195,1,700,25);
//     RunpidTo(80,2600,20,50,1400,3,200,1400,-205,64,0,2,1);
//     RunpidTo(50,570,20,0,0,4,100,1200,-290,55,0,2,1);
//     TurnpidNTo(100,-350,1,400);
// TurnpidNTo(100,-290,1,400);
//  RunpidTo(100,1500,20,100,1000,5,200,900,-360,43,10,2,0);
//  RunpidStraightNTo(47,-700,10,0,0,0,0,600,-358,37);
//  RunpidStraightNTo(100,900,10,80,500,0,0,650,-360,37);

//  RunVolAuto(-30, 400);
////////////////////////////////////
//   IntakeVol(100);
// // RunpidStraightNTo(47,550,10,0,0,0,0,600,0,37);
// RunpidStraightNTo(85,2350,10,65,1000,0,0,1200,9,32);
// // RunpidStraightNTo(30,-300,10,0,0,0,0,600,9,11);
// TurnVolpidNTo(100,95,1,800,21);
// // IntakeVol(-100);
//     airpoweredB.set(1);
 
//  RunpidStraightNTo(40,1000,20,6,60,0,0,1500,95,36);
//   RunpidStraightNTo(30,-300,10,0,0,0,0,500,90,11);
//   IntakeVol(-100);
//     RunpidStraightNTo(50,300,10,0,0,0,0,800,90,11);
//  RunpidTo(80,-2100,10,65,1000,5,100,1500,0,47,0,2,0);
//   // RunVolAuto(-20, 200);
//   // RunpidTo(80,-2400,10,65,1000,5,100,1500,0,40,0,0);
//   //  RunpidTo(50,400,10,65,1000,5,100,1500,90,48,0,2);
//   TurnVolpidNTo(100,85,1,800,21);

//   RunpidStraightNTo(85,-2200,10,65,1000,0,0,1200,90,32);
//   RunVolAuto(-20, 200);
//   RunVolAuto(30, 200);
//   // RunpidStraightNTo(30,300,10,0,0,0,0,800,90,11);
//   TurnVolpidNTo(100,158,1,800,25);
//   RunpidStraightNTo(60,900,10,10,100,1,300,1000,158,17);
  
//   TurnVolpidNTo(100,-50,1,900,26);
//   RunpidStraightNTo(85,-2350,10,65,1000,5,200,1500,-90,32);
  // RunpidStraightNTo(60,800,10,10,120,0,0,1800,0,33);
  // RunpidStraightNTo(30,800,10,10,100,1,200,800,0,17);
// //    RunpidStraightNTo(65,-1200,12,45,1000,0,0,1000,-0,3);
// //    RunpidStraightNTo(65,1100,12,45,1000,1,500,1000,-45,3);

// //    RunpidStraightNTo(30,300,10,0,0,0,0,800,-90,11);
// //    TurnVolpidNTo(70,-90,1,600,2);
// //   //  TurnpidNTo(100,-45,1,1200);
// //   //  TurnpidSingleTo(70,45,0.2,1,2.4,1,0,1,900);
// //     RunpidStraightNTo(30,-300,10,0,0,0,0,800,-20,11);
// //   UpDownencodeTo(100,21);
// //   RunpidStraightNTo(45,650,10,15,150,0,0,1800,-45,2);

// //  TurnVolpidNTo(70,-90,1,600,2);
      
// //        IntakeVol(-40);
// //    RunpidStraightNTo(90,1600,10,65,1000,0,0,1000,-90,32);
 
// //   // RunpidStraightNTo(30,500,10,10,100,0,0,1800,0,17);
// //   // TurnVolpidNTo(90,-44,1,1500,2);
// // // RunpidStraightNTo(90,2000,10,65,1000,0,0,1000,-50,32);
// IntakeVol(100);
// RunpidStraightNTo(100,2200,10,70,1000,0,0,1150,-8,32);

// // RunpidStraightNTo(30,-150,10,0,0,0,0,800,-8,11);
// TurnVolpidNTo(80,90,1,600,1);
// IntakeVol(30);
// RunpidStraightNTo(60,950,20,6,60,2,600,700,90,10);
// RunpidStraightNTo(47,-600,10,0,0,0,0,600,88,37);
// TurnVolpidNTo(100,240,1,600,9);
// IntakeVol(100);
// RunpidStraightNTo(65,1150,12,45,1000,0,0,900,240,3);
// IntakeVol(30);
// RunpidStraightNTo(65,-950,12,45,1000,0,0,900,240,3);
// TurnVolpidNTo(100,90,1,600,9);
// RunpidStraightNTo(47,700,10,0,0,0,0,600,90,37);
// RunpidStraightNTo(47,-600,10,0,0,0,0,600,88,37);
// TurnVolpidNTo(100,-75,1,600,10);
// IntakeVol(100);
// RunpidStraightNTo(65,1100,12,45,1000,0,0,1000,-75,3);
// TurnVolpidNTo(100,90,1,600,10);
// RunpidStraightNTo(70,1500,12,45,1000,0,0,1000,90,3);
// RunpidStraightNTo(47,-600,10,0,0,0,0,600,88,37);
// TurnVolpidNTo(70,165,1,1500,25);
// IntakeVol(100);
// RunpidStraightNTo(100,2470,20,70,1970,0,0,1600,165,28);
// TurnVolpidNTo(70,55,1,700,21);
// RunpidStraightNTo(80,1300,10,65,1000,0,0,1000,-8,32);
// IntakeVol(0);
// RunpidStraightNTo(47,-600,10,0,0,0,0,600,0,37);


}  





 




 




 

