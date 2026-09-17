#include "vex.h"
///////////红方抢球////////////////
vex::task task_6_1;
  int task_auto_6_1()
  {
    while(1){
    
  Optical1.setLightPower(100);
if(Optical1.value()<=10){
  airpoweredC.set(0);
}
else if(Optical1.value()>=200){
    airpoweredC.set(1);
  
}
}
    
  return 0;
  }


void auto6() {
  ///////////////////////////////////////////////////
  IntakeVol(100);
drive_to_point(-27, 46, 10, 50, 40, 1, 200, 1000, 1, 1, 1, 4, 40);
IntakeVol(20);
RunpidStraightNTo(55,-1420,20,6,60,1,1200,1400,-50,10);
IntakeVol(100);
drive_to_point(-30, 30, 10, 50, 50, 1, 200, 900, 1, 1, 1, 0, 0);
TurnVolpidNTo(100,-160,1,800,26); 
drive_to_point(-36, -5, 10, 50, 50, 1, 200, 900, 1, 1, 10, 0, 0);
TurnVolpidNTo(100,90,1,600,26); 
// drive_to_point(-47, -5, 10, 20, 20, 1, 200, 500, 1, 1, 1, 0, 0);
// TurnVolpidNTo(100,-135,1,650,26); 
// IntakeStop(0);
// RunpidTo(30,360,20,15,100,0,0,550,-135,43,100,2,1);
// TurnVolpidNTo(100,160,1,650,25); 
// TurnVolpidNTo(100,145,1,350,26); 
// IntakeVol(100);
// drive_to_point(-37, -7, 0, 10, 15, 1, 200, 800, 1, 1, 9, 0, 0);
// RunpidTo(25,-400,20,15,100,0,0,600,145,43,100,2,1);
// TurnVolpidNTo(100,91,1,750,26); 
drive_to_point(21, 0, 0, 10, 10, 1, 200, 1200, 1, 1, 10, 24, 30);
wait(700);
vex::task::stop(task_auto_6_1);
drive_to_point(30, 3, 0, 10, 10, 1, 200, 1200, 1, 1, 10, 19, 30);



   airpoweredA.set(0);



// airpoweredC.set(1);
// IntakeVol(100);
// RunpidStraightNTo(45,820,20,6,60,1,1200,1400,45,10);
// TurnVolpidNTo(100,-175,1,850,27); 


// RunpidStraightNTo(30,-500,10,4,10,0,0,600,130,11);
  // wait(150);
  // RunpidTo(100,-1550,20,70,500,0,100,1000,0,43,0,2,0);
  // RunVolAuto(-20,300);
  // TurnVolpidNTo(100,85,1,600,26); 
  // //  RunpidTo(100-2300,20,100,1000,19,200,1300,88,55,2300,2,1);
  //   RunpidTo(90,-2150,20,50,500,0,100,1250,88,43,2250,2,1);
  //   RunVolAuto(-20,300);
  //    RunVolAuto(20,300);
  //   TurnVolpidNTo(100,148,1,600,26); 
  //   RunpidStraightNTo(50,920,20,6,60,1,100,1000,148,10);
  //   // RunpidStraightNTo(47,850,10,0,0,1,300,800,142,37);
  //   TurnVolpidNTo(100,100,1,500,22); 
  //   TurnVolpidNTo(100,140,1,500,22); 
  //   airpoweredA.set(0);
  //   IntakeVol(-20);
  //   wait(200);
  //   RunpidTo(80,1500,20,40,1000,18,300,1000,90,68,0,2,1);
  // RunVol(30);
  // waitUntil(Distance1.objectDistance(mm)<=220);
  // BaseMotorStop(2);
  // wait(100);
  // BaseMotorStop(0);
  // RunpidTo(50,-2250,20,20,500,0,100,1500,110,65,800,2,1);
  // airpoweredA.set(1);
  //////////////////////////////////////////////////////////////////////
//   CatapultAuto(100, 150);
//   RunpidTo(90,2500,10,60,1000,3,1200,1100,0,51,0,2,0);// Get firsr Triball
//   RunpidStraightNTo(80,-1500,10,10,100,0,0,1000,0,17);
//   RunVolAuto(-25, 400);// find the right direction
//   RunpidStraightNTo(60,1100,10,10,100,0,0,1000,0,17);
//   TurnVolpidNTo(100,88,1,600,25);
//   IntakeVol(-80);
//   RunpidStraightNTo(60,600,10,0,0,0,0,800,90,11);
//   TurnVolpidNTo(100,180,1,700,25); 
//    RunpidTo(75,1200,10,55,1000,2,500,800,180,40,0,0,0);// find the right direction
//  RunVolAuto(20, 200);
//  TurnVolpidNTo(100,265,1,800,21);
//   RunpidStraightNTo(85,2200,10,65,1000,0,0,1200,265,32);
//   RunVolAuto(20, 500);
//   RunVolAuto(-30, 200);
//   TurnVolpidNTo(100,164,1,800,25);
//   RunpidTo(50,800,20,6,60,1,300,1000,130,36,650,2,0);
//   RunpidTo(60,1800,20,30,1000,13,300,5000,90,63,200,2);
//   RunpidTo(100,-1500,20,100,1000,5,200,900,90,43,400,2);
/////////////////////////////////////////////////
  // wait(3000);
  // RunpidStraightNTo(40,300,10,0,0,0,0,800,0,11);
  //  RunpidTo(100,-200,20,0,0,0,0,1000,90,45,0,2,1);
//    TurnVolpidNTo(30,0,1,1000,25);
//    RunpidStraightNTo(20,-600,10,0,0,0,0,800,5,11);
//    RunpidStraightNTo(30,550,10,0,0,0,0,600,5,11);
//    airpoweredA.set(0);
//    RunpidTo(100,-180,20,0,0,0,0,1000,36,47,0,2,1);
//   //  RunpidStraightNTo(30,-500,10,0,0,0,0,600,10,11);
// TurnVolpidNTo(100,-90,1,600,25);
// RunpidStraightNTo(40,-400,10,100,500,0,0,650,-90,37);
// RunVolAuto(-100, 500);
// RunpidStraightNTo(30,500,10,0,0,5,300,600,-90,11);
// TurnVolpidNTo(100,-270,1,600,26);
// IntakeVol(-100);
//   RunpidStraightNTo(40,600,10,0,0,0,0,500,-273,11);
//    TurnVolpidNTo(100,-180,1,700,25); 
//    RunpidTo(75,1200,10,55,1000,2,500,800,-180,40,0,0,0);
//     // RunpidTo(80,-2100,10,65,1000,5,100,1500,1,47,0,2,0);
//  RunVolAuto(20, 200);
//  TurnVolpidNTo(100,-95,1,800,21);

//   RunpidStraightNTo(85,2200,10,65,1000,0,0,1200,-95,32);
//   RunVolAuto(20, 500);
//   RunVolAuto(-30, 200);
//   // RunpidStraightNTo(30,300,10,0,0,0,0,800,90,11);
//   TurnVolpidNTo(100,-196,1,800,25);
//   // RunpidStraightNTo(50,950,10,10,100,1,300,1000,162,17);
//   RunpidTo(50,700,20,6,60,1,300,1000,-225,36,550,2,0);
//   RunpidTo(40,1800,20,30,1000,13,300,5000,-270,63,200,2);
  
  // RunpidTo(100,-1500,20,100,1000,5,200,900,-270,43,400,2);
  // TurnVolpidNTo(100,-340,1,600,26);
  // RunpidTo(100,1800,20,100,1000,5,200,1200,-340,43,0,2);
 
  // RunpidStraightNTo(30,300,10,0,0,0,0,800,90,11);
  // TurnVolpidNTo(100,-198,1,800,25);
  // RunpidStraightNTo(60,1050,10,10,100,1,300,1300,-198,17);
  
  // TurnVolpidNTo(70,-280,1,900,26);
  // airpoweredA.set(0);
  // TurnVolpidNTo(100,-230,1,900,26);
  //  RunpidTo(40,2000,20,30,1000,2,200,5000,-270,63,200,2);
  // RunpidTo(80,1800,10,65,1000,2,300,2000,-270,49,0,2,0);
//   RunpidStraightNTo(60,1000,20,0,0,0,0,900,-90,36);
//    RunpidTo(100,3000,20,100,2800,0,0,1550,0,63,0,2,0);
// RunpidStraightNTo(60,-900,10,0,0,0,0,600,-2,37);
//    RunpidStraightNTo(100,900,10,100,500,0,0,800,0,37);
//   //  RunpidStraightNTo(47,-700,10,0,0,0,0,600,92,37);
//    RunpidTo(70,-1700,20,6,60,0,0,1000,-39,36,0,2,0);
//    TurnVolpidNTo(100,45,1,800,25);
//    RunpidTo(70,1700,20,6,60,4,200,1100,0,36,200,2,0);
//     TurnVolpidNTo(100,90,1,800,25);
//     RunpidTo(60,820,20,0,0,5,100,900,3,55,300,2,1);
//      RunpidTo(60,800,20,0,0,4,300,900,-90,55,0,2,1);
//      RunpidStraightNTo(100,1100,12,80,1000,0,0,900,-90,3);
//      airpoweredA.set(0);
//      airpoweredB.set(0);
//      RunVolAuto(-30, 300);
    //  RunpidStraightNTo(100,900,10,100,500,0,0,800,0,37);
  // RunVol(50);
  // waitUntil(Inertial1.roll()<=-8);
  // AllMotorStop(0);
//  RunpidTo(100,3000,20,100,2800,0,0,1550,90,61,0,2,0);
// RunpidTo(100,2500,20,100,800,4,200,1400,90,62,0,2,1);
//  UpdownVol(-2);
// RunpidStraightNTo(85,2050,10,30,1000,0,0,1200,0,38);
// TurnVolpidNTo(80,90,1,600,1);
// // IntakeVol(-100);
// RunpidStraightNTo(47,700,10,0,0,2,200,700,90,37);
// RunpidStraightNTo(47,-600,10,0,0,3,300,600,90,37);
// // RunpidStraightNTo(30,-300,10,0,0,0,0,800,90,11);
// TurnVolpidNTo(100,245,1,600,9);
// IntakeVol(100);
// RunpidStraightNTo(65,1100,12,45,1000,0,0,900,245,3);
// IntakeVol(40);
// RunpidStraightNTo(65,-1000,12,45,1000,0,0,900,245,3);
// TurnVolpidNTo(100,90,1,600,9);
// // IntakeVol(-100);
// // RunpidStraightNTo(30,300,10,0,0,0,0,800,90,11);
// // RunpidStraightNTo(30,-300,10,0,0,0,0,800,90,11);
// IntakeVol(30);
// RunpidStraightNTo(47,900,10,0,0,2,200,700,90,37);
// RunpidStraightNTo(47,-600,10,0,0,3,300,600,90,37);
// TurnVolpidNTo(95,-43,1,700,9);
// IntakeVol(100);
// RunpidStraightNTo(30,500,10,10,100,0,0,800,-43,17);
// IntakeVol(60);
// TurnVolpidNTo(95,90,1,600,9);
// // IntakeVol(-100);
// // RunpidStraightNTo(47,600,10,0,0,0,0,600,90,37);
// RunpidStraightNTo(60,1000,20,6,60,2,700,900,90,10);
// RunpidStraightNTo(47,-600,10,0,0,3,300,600,90,37);
// TurnVolpidNTo(100,-90,1,600,10);
// IntakeVol(100);
// RunpidStraightNTo(65,1150,12,45,1000,0,0,1000,-80,3);
// TurnVolpidNTo(100,95,1,600,10);
// IntakeVol(30);
// RunpidStraightNTo(80,1550,12,45,1000,2,1200,1000,90,3);
// RunpidStraightNTo(30,-300,10,0,0,3,50,800,90,11);
}