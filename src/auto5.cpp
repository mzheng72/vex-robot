#include "vex.h"
///////技能赛/////
int a5=3;
 vex::task task_auto5_1;
  int task_auto_5_1()
  {
while(1){
  if(Optical1.value()<=10){
    UpDownStop(0);
    }
}
  return 0;
  }

   vex::task task_auto5_2;
  int task_auto_5_2()
  {
UpdownVol(-100);
wait(500);
  return 0;
  }

  vex::task task_5_3;
  int task_auto_5_3()
  {
    while(1){
    
  Optical1.setLightPower(100);

if(Optical1.value()>=200){
    airpoweredD.set(1);
    }
    else
    {
      airpoweredD.set(0);
    }
  

}
    
  return 0;
  }
  vex::task task_5_4;
  int task_auto_5_4()
  {
    while(1){
    
  Optical1.setLightPower(100);
if(Optical1.value()<=10){
UpDownStop(0);
    }
    else
    {
      UpdownVol(30);
    }
  

}
    
  return 0;
  }

void auto5() {
////////////////////////part 1/////////////////////////////
airpoweredD.set(1);
UpdownVol(90);
wait(500);
airpoweredD.set(0);
RunpidStraightNTo(26,700,10,4,10,0,0,800,0,11);
TurnVolpidNTo(100,-90,1,600,26);
RunpidStraightNTo(40,-1250,20,6,60,1,1050,1500,-90,10);
TurnVolpidNTo(100,-162,1,550,25);
UpdownVol(100);
drive_to_point(10, -32, 15, 65, 50, 1, 200, 1000, 2, 2, 1, 0, 0);
TurnVolpidNTo(100,100,1,550,26);
drive_to_point(30, -33, 15, 65, 50, 1, 200, 1000, 2, 2, 1, 0, 0);
TurnVolpidNTo(100,20,1,550,26);
drive_to_point(33, -11, 15, 65, 50, 1, 200, 900, 2, 2, 1, 0, 0);
// // wait(200);
drive_to_point(34, 2, 20, 45, 45, 1, 200, 650, 2, 2, 1, 0, 0);
RunpidStraightNTo(50,-1200,20,6,60,1,1000,1200,20,10);
wait(200);
drive_to_point(43, -4, 15, 50, 45, 1, 200, 1200, 2, 2, 1, 0, 0);
TurnVolpidNTo(100,-150,1,750,26);
RunpidStraightNTo(32,-750,20,6,60,15,400,800,-150,10);
airpoweredB.set(0);
// //////////////////////////part2/////////////////////////////////////
RunpidStraightNTo(30,550,20,6,60,0,1000,1200,-150,10);
TurnVolpidNTo(100,87,1,750,26);
drive_to_point(-22, -11, 0, 60, 60, 3, 200, 1000, 1, 1, 8, 0, 0);
TurnVolpidNTo(100,90,1,450,26);
RunpidStraightNTo(40,-1200,20,6,60,1,1000,1200,90,10);
TurnVolpidNTo(100,166,1,450,26);
drive_to_point(-41, -32, 10, 65, 50, 1, 200, 1000, 2, 2, 1, 0, 0);
TurnVolpidNTo(100,-105,1,450,26);
drive_to_point(-60, -37, 10, 65, 10, 1, 200, 800, 2, 2, 1, 0, 0);
TurnVolpidNTo(100,-140,1,650,26);
drive_to_point(-74, -61, 10, 30, 30, 1, 200, 800, 2, 2, 1, 0, 0);
wait(200);
RunpidStraightNTo(25,-200,10,4,10,0,0,400,-144,11);
TurnVolpidNTo(100,-3,1,950,27);
drive_to_point(-63, -12, 20, 55, 50, 1, 200, 1000, 2, 2, 1, 0, 0);
// wait(200);
drive_to_point(-63, 2, 10, 65, 50, 1, 200, 800, 2, 2, 1, 0, 0);
RunpidStraightNTo(50,-1000,20,6,60,1,1200,1000,-35,10);
airpoweredA.set(1);
drive_to_point(-76, -9, 10, 65, 65, 1, 200, 1000, 2, 2, 1, 0, 8);
TurnVolpidNTo(100,162,1,450,27);
RunpidStraightNTo(45,-1600,20,6,60,0,1100,1200,135,10);
airpoweredB.set(0);
// RunVol(-40);
// wait(200);
// BaseMotorStop(0);
// UpDownencode(-100, 30);
// ///////////////////////////part3////////////////////////////////
   RunpidStraightNTo(30,900,10,4,10,0,0,700,135,11);
  // RunSonarTo(80,1620,10,0,0,0,1,1800);
TurnVolpidNTo(100,178,1,550,26);
RunSonarTo(80,1650,10,21,2500,179,1,1800);
// RunpidStraightNTo(35,-900,10,4,10,0,0,800,179,11);
// UpdownVol(-100);
// BaseMotorStop(0);
// wait(200);
// RunpidStraightNTo(80,2900,10,4,10,21,500,2000,178,40);
//  RunpidTo(80,3000,20,1000,800,21,500,1400,177,40,0,2,0);
UpdownVol(-7);
TurnVolpidNTo(100,-91,1,750,26);
RunpidStraightNTo(30,850,10,4,10,0,0,850,-92,11);
UpdownVol(100);
wait(200);
airpoweredC.set(0);
RunpidStraightNTo(23,-500,10,4,10,0,0,600,-90,11);
TurnVolpidNTo(100,145,1,750,26);
// IntakeVol(100);
// UpDownStop(0);
UpdownVol(100);
drive_to_point(-33, -81, 10, 40, 30, 1, 200, 1200, 2, 2, 9, 0, 20);

// // TurnVolpidNTo(100,130,1,650,26);
// // IntakeStop(0);
// // drive_to_point(-38, -95, 0, 10, 15, 1, 200, 1000, 2, 2, 6, 0, 0);
UpDownStop(0);
airpoweredA.set(0);
TurnVolpidNTo(100,4,1,750,26);
RunpidStraightNTo(50,-1600,10,4,10,1,1400,1000,4,11);
airpoweredB.set(1);
TurnVolpidNTo(100,81,1,750,26);
airpoweredB.set(0);
RunpidTo(80,-1700,20,15,100,0,0,1200,70,43,100,2,1);

drive_to_point(-28, -95, 10, 50, 20, 1, 200, 1300, 2, 2, 10, 0, 40);
TurnVolpidNTo(100,-90,1,750,27);
vex::task task_5_4 = vex::task(task_auto_5_4);
   RunpidTo(40,-1250,20,15,100,0,700,1250,-90,43,100,2,1);
RunSonarTo(20,1700,10,0,0,-90,1,600);
TurnVolpidNTo(100,-1,1,550,25);
RunpidStraightNTo(40,-850,10,4,10,0,0,800,0,11);
vex::task::stop(task_auto_5_4);
RunVolAuto(20,150);
airpoweredD.set(1);
UpdownVol(100);
wait(800);
RunpidStraightNTo(40,800,10,4,10,0,0,800,0,11);
airpoweredD.set(0);
TurnVolpidNTo(100,-90,1,550,25);
RunpidTo(40,-1000,20,15,100,1,800,1250,-90,43,100,2,1);
TurnVolpidNTo(100,-10,1,550,25);
drive_to_point(13, -78, 20, 60, 20, 1, 200, 900, 2, 2, 9, 0, 0);
TurnVolpidNTo(100,75,1,550,25);
drive_to_point(33, -78, 20, 60, 20, 1, 200, 900, 2, 2, 9, 0, 0);
TurnVolpidNTo(100,38,1,550,25);
drive_to_point(48, -52, 20, 60, 20, 1, 200, 1000, 2, 2, 1, 0, 0);
wait(200);
RunpidStraightNTo(25,-200,10,4,10,0,0,400,24,11);
TurnVolpidNTo(100,150,1,550,27);
drive_to_point(52, -96, 20, 60, 30, 1, 200, 1000, 2, 2, 1, 0, 0);
TurnVolpidNTo(100,-110,1,550,25);
RunpidStraightNTo(30,450,10,4,10,0,0,400,-110,11);
TurnVolpidNTo(100,-178,1,550,25);
RunpidStraightNTo(30,800,10,4,10,0,0,500,-173,11);
TurnVolpidNTo(100,-60,1,550,25);
airpoweredA.set(1);
RunpidStraightNTo(40,400,10,4,10,0,0,400,-60,11);
airpoweredB.set(0);
RunpidStraightNTo(100,-1000,10,4,10,0,0,800,-60,11);
RunpidStraightNTo(30,900,10,4,10,0,0,700,-45,11);
  // RunSonarTo(80,1620,10,0,0,0,1,1800);
TurnVolpidNTo(100,-2,1,550,26);
RunSonarTo(80,1650,10,21,2500,-1,1,1800);
UpdownVol(-7);
TurnVolpidNTo(100,91,1,750,26);
RunSonarTo(40,120,10,0,0,90,1,700);
UpdownVol(100);
airpoweredC.set(0);
RunpidStraightNTo(23,-500,10,4,10,0,0,600,90,11);

// RunpidStraightNTo(23,-450,10,4,10,0,0,700,80,11);
// airpoweredA.set(0);
// drive_to_point(-35, -101, 0, 20, 15, 1, 200, 1000, 2, 2, 10, 0, 0);
// TurnVolpidNTo(100,-81,1,750,27);
// RunpidStraightNTo(40,-1350,20,6,60,1,1150,1700,-85,10);
// airpoweredA.set(1);
// TurnVolpidNTo(100,50,1,750,26);
// drive_to_point(4, -85, 0, 30, 35, 1, 200, 1000, 2, 2, 9, 0, 0);
// TurnVolpidNTo(100,75,1,750,26);
// drive_to_point(27, -86, 0, 30, 35, 1, 200, 1000, 2, 2, 9, 0, 0);
// TurnVolpidNTo(100,45,1,750,26);
// drive_to_point(38, -63.5, 0, 30, 35, 1, 200, 1000, 2, 2, 1, 0, 0);
// TurnVolpidNTo(100,177,1,750,27);
// drive_to_point(42, -104, 0, 30, 35, 1, 200, 1000, 2, 2, 1, 0, 0);
// TurnVolpidNTo(100,-120,1,750,26);
// RunpidStraightNTo(20,350,20,6,60,1,700,600,-120,10);
// TurnVolpidNTo(100,-160,1,750,26);
// RunpidStraightNTo(20,350,20,6,60,1,700,400,-160,10);
// airpoweredC.set(1);
// TurnVolpidNTo(100,-36,1,850,27);
// RunpidStraightNTo(25,-480,20,6,60,1,700,600,-36,10);
// airpoweredA.set(0);
// RunpidStraightNTo(25,480,20,6,60,1,700,600,-36,10);
// TurnVolpidNTo(100,2,1,850,26);
// UpDownStop(0);
// UpdownVol(80);
// drive_to_point(39, -56, 0, 20, 15, 1, 200, 1300, 2, 2, 10, 21, 20);
// TurnVolpidNTo(100,92,1,850,26);
// UpdownVol(5);
// RunpidStraightNTo(25,500,20,6,60,1,700,600,92,10);
// UpdownVol(-100);
// wait(200);
// RunpidStraightNTo(25,-500,20,6,60,1,700,600,92,10);



// TurnVolpidNTo(100,-20,1,750,26);
// RunpidStraightNTo(25,-500,20,6,60,1,700,1500,-45,10);
// airpoweredA.set(0);
// ////////////patr5/////////////////
// RunpidStraightNTo(25,400,20,6,60,1,700,1500,-45,10);
// TurnVolpidNTo(100,-165,1,750,26);
// RunpidStraightNTo(25,500,20,6,60,1,700,1500,-165,10);
// IntakeStop(0);
// RunpidStraightNTo(25,-500,20,6,60,1,700,1500,-165,10);
// // drive_to_point(25, -118, 0, 30, 35, 1, 200, 800, 2, 2, 1, 0, 0);
// IntakeStop(0);
// TurnVolpidNTo(100,65,1,750,26);
// RunpidStraightNTo(45,-1500,20,6,60,1,1200,1500,65,10);
// IntakeVol(100);
// wait(500);
// airpoweredA.set(0);
////////////////end////////////////////////
// drive_to_point(-59, -110, 0, 20, 25, 1, 200, 1000, 2, 2, 9, 0, 0);
// TurnVolpidNTo(100,-96,1,750,26);
// drive_to_point(-68, -103, 0, 20, 20, 1, 200, 1000, 2, 2, 9, 0, 0);
// IntakeVol(-100);
// wait(200);
// IntakeVol(100);
// drive_to_point(-73, -100, 0, 20, 20, 1, 200, 1000, 2, 2, 9, 0, 0);
// TurnVolpidNTo(100,45,1,800,27);
// drive_to_point(-67, -82, 0, 20, 20, 1, 200, 1000, 2, 2, 9, 0, 0);
// TurnVolpidNTo(100,30,1,800,27);
//   RunpidStraightNTo(40,-1000,20,6,60,0,1000,1200,35,10);
//   airpoweredA.set(0);
//
// drive_to_point(-61, -101, 0, 20, 30, 1, 200, 1000, 2, 2, 9, 0, 0);
// TurnVolpidNTo(100,-53,1,750,26);
// RunpidStraightNTo(20,200,10,4,10,0,0,600,-53,11);
// TurnVolpidNTo(100,45,1,750,26);
// RunpidStraightNTo(30,-500,10,4,10,0,0,600,45,11);
// airpoweredC.set(0);
// RunpidStraightNTo(30,-600,10,4,10,1,800,900,-58,11);
// TurnVolpidNTo(100,-95,1,750,26);
// drive_to_point(-60, -105, 0, 10, 10, 1, 200, 1200, 2, 2, 5, 0, 0);
// TurnVolpidNTo(100,-70,1,750,26);
// drive_to_point(-66, -101, 0, 10, 10, 1, 200, 1200, 2, 2, 9, 0, 0);
// drive_to_point(-76, -98, 0, 10, 10, 1, 200, 1200, 2, 2, 9, 0, 0);
// RunpidStraightNTo(30,-400,10,4,10,1,800,900,-70,11);
// TurnVolpidNTo(100,-135,1,750,26);
// drive_to_point(-70, -106, 0, 10, 10, 1, 200, 1200, 2, 2, 9, 0, 0);
// TurnVolpidNTo(80,54,1,1050,27);
// airpoweredA.set(0);
/////////////////////////////////part4//////////////////////////////////
// drive_to_point(-66, -109, 0, 10, 10, 1, 200, 1200, 2, 2, 5, 0, 0);
// RunpidStraightNTo(40,-800,10,4,10,0,0,600,-135,11);
// drive_to_point(-53, -90, 10, 60, 50, 1, 200, 1200, 2, 2, 9, 0, 0);
// drive_to_point(-53, -93, 10, 60, 50, 1, 200, 1200, 2, 2, 9, 0, 0);
// TurnVolpidNTo(100,46,1,750,26);
// RunpidStraightNTo(40,-800,10,4,10,3,600,600,46,11);
// IntakeVol(-30);
//    RunpidTo(100,1900,20,100,800,0,0,1000,-90,43,0,2,0);
//    RunpidTo(100,-900,20,6,60,0,0,600,-90-15,53,0,0,0);
//    TurnVolpidNTo(100,-12,1,700,26);//-111.5
//    RunVolAuto(-30, 100);
   
//    TAUTO1_1.clear();
//    CatapultVol(81);
//   while(TAUTO1_1<=19000){
//   CatapultVol(82);
//   }
//    CatapultStop(0);
//    IntakeVol(-100);
//    RunpidTo(100,2400,20,100,800,0,0,1400,-15,43,0,2,0);
//    IntakeVol(-100);
//    TurnVolpidNTo(100,-85,1,600,26);
//    IntakeVol(-100);
//    RunpidTo(100,3200,20,100,2000,2,10,1650,-93,41,300,1,0);
//    airpoweredA.set(0);
//    airpoweredC.set(0);
//    RunVolAuto(-30, 150);
//    TurnVolpidNTo(100,15,1,600,25);
//    RunpidTo(80,-2400,20,60,800,0,0,1400,5,43,0,2,0);
// // ///////////////////////////////2///////////////////////////////////
//    TurnVolpidNTo(100,-40,1,500,26);
//    airpoweredC.set(1);
//    airpoweredA.set(1);
// RunpidTo(50,2300,20,70,2000,6,1200,1450,-15,41,1200,1,0);
// // TurnVolpidNTo(100,-10,1,400,21);
// IntakeVol(100);
//    RunpidTo(70,3500,20,70,2000,8,700,1450,30,41,2600,1,0);
//    IntakeVol(-100);
//    wait(100);
//    RunpidTo(100,1900,20,100,800,0,0,1200,70,43,400,2,0);
//   //  RunVolAuto(-60, 300);
//     IntakeVol(-100);
   
//   RunpidStraightNTo(47,-400,10,0,0,0,0,600,82,37);
//     //  TurnVolpidNTo(100,75,1,500,26);
// RunpidStraightNTo(100,1600,100,100,500,6,200,850,60,37);
// RunVolAuto(-50, 200);
//     IntakeVol(-100);
//   // RunpidStraightNTo(47,-500,10,0,0,0,0,600,92,37);
// RunpidStraightNTo(100,1400,100,100,500,0,0,650,85,37);
// RunVolAuto(-50,150);
// airpoweredA.set(0);
// TurnVolpidNTo(90,180,1,600,26);
//  RunVolAuto(-50, 500);
//  Inertial1.resetRotation();
// // ///////////////////////////////3////////////////////////////////////////
// RunpidTo(80,1700,20,30,1000,0,100,1000,-15,43,50,2,0);
// // RunpidStraightNTo(80,1800,10,30,1000,0,0,1200,-15,7);

// airpoweredA.set(1);
// TurnVolpidNTo(100,-110,1,600,25);
// airpoweredC.set(1);
// RunpidTo(60,820,20,0,0,2,200,1000,-170,55,590,2,1);
// RunVolAuto(-50,200);
// IntakeVol(-50);
// RunpidStraightNTo(80,800,20,80,500,6,100,1050,-180,37);//1400
// // //  RunpidTo(80,800,20,0,0,6,500,1200,-175,55,400,2,1);
// airpoweredA.set(0);
// airpoweredC.set(0);
// RunVolAuto(-50, 200);
// IntakeVol(0);
// TurnVolpidNTo(60,-350,1,1000,25);
// RunpidTo(50,800,20,0,0,8,200,1300,-450,66,350,2,1);
// RunVolAuto(30, 100);
// TurnVolpidNTo(50,-538,3,700,25);
// // IntakeVol(50);
// // RunpidTo(55,-1600,20,80,500,0,100,900,-540,43,1000,2,0);
// // RunpidTo(50,320,20,0,0,5,200,500,-540,55,500,2,1);
// IntakeVol(-90);
// RunpidStraightNTo(60,1900,20,40,500,2,50,1150,-545,37);
// TurnVolpidNTo(60,-540,1,500,25);
// airpoweredA.set(0);
// airpoweredC.set(0);
// RunpidTo(50,-1600,20,80,500,0,100,900,-540,43,1600,2,0);
// // RunVolAuto(-40, 300);
// Inertial1.resetRotation();
// IntakeVol(0);
// TurnVolpidNTo(60,120,1,900,25);
// RunpidTo(50,1850,20,10,3,0,100,1000,90,43,100,2,0);
// airpoweredA.set(1);
// IntakeVol(-20);
// TurnVolpidNTo(50,-40,1,900,26);
// airpoweredC.set(1);
// IntakeVol(0);
// RunpidTo(50,1100,20,10,7,0,0,1000,-65,43,200,2,0);
// // TurnVolpidNTo(50,-20,1,600,26);
// RunpidTo(60,1350,20,10,7,0,100,1100,-0,43,100,2,0);
// RunVolAuto(-40, 200);
// RunpidStraightNTo(80,1400,20,40,500,0,5,800,0,37);
// // RunpidTo(50,-1300,20,80,500,0,100,850,35,43,0,2,0);
// //  TurnVolpidNTo(80,0,1,650,26);
// // airpoweredA.set(1);
// // airpoweredC.set(1);
// // RunpidStraightNTo(100,1800,20,80,500,0,500,1050,-2,37);
// // RunpidStraightNTo(70,1500,20,700,500,2,50,1250,-5,37);
// airpoweredA.set(0);
// airpoweredC.set(0);
// // RunpidTo(50,-1400,20,80,500,0,100,900,35,43,0,2,0);
// // TurnVolpidNTo(80,-5,1,700,26);
// // airpoweredA.set(1);
// // airpoweredC.set(1);
// // RunpidStraightNTo(100,1800,20,80,500,0,500,1250,-2,37);
// RunpidStraightNTo(60,-1300,20,6,60,0,0,900,0,10);
// TurnVolpidNTo(80,63,1,600,26);
// RunpidTo(60,2300,20,60,800,8,200,1600,63,43,1000,2,0);
// airpoweredA.set(0);
// airpoweredC.set(0);
// TurnVolpidNTo(80,-55,1,600,26);
// RunpidTo(50,-900,20,0,0,0,10,800,-10,43,50,1,0);
// TurnVolpidNTo(100,-10,1,400,22);
// // IntakeVol(100);
// airpoweredC.set(1);
// IntakeVol(-100);
// RunpidTo(100,1000,20,100,800,0,0,1200,-60,43,800,2,0);
//    RunVolAuto(-60, 100);
//     IntakeVol(-100);
   
//   // RunpidStraightNTo(47,-500,10,0,0,0,0,600,-70,37);
//     //  TurnVolpidNTo(100,75,1,500,26);
// RunpidStraightNTo(100,1600,100,100,500,6,1000,850,-60,37);
// RunVolAuto(-50, 300);
//     IntakeVol(-100);
//   // RunpidStraightNTo(47,-500,10,0,0,0,0,600,92,37);
// RunpidStraightNTo(100,1400,100,100,500,6,1000,650,-85,37);
// // RunpidTo(90,1000,20,6,60,3,400,700,-30,36,50,1);
// // RunpidTo(90,1000,20,6,60,3,400,600,-70,36,50,1);
// //  airpoweredC.set(0);
// //  RunVolAuto(-60, 300);
// //     IntakeVol(-100);
// //   // RunpidStraightNTo(47,-800,10,0,0,0,0,600,-80,37);
// //   // TurnVolpidNTo(80,-80,1,500,21);
// //   IntakeVol(-50);
// //  RunpidTo(100,1400,20,100,500,6,10,700,-75,43,0,2,0);
// //  IntakeVol(-50);
// // RunVolAuto(-50, 300);
// //  RunpidTo(100,1200,20,100,500,6,10,1000,-75,43,0,2,0);
// // //     IntakeVol(-50);
// // //   // RunpidStraightNTo(47,-500,10,0,0,0,0,600,92,37);
// // // RunpidStraightNTo(100,1400,100,100,500,0,0,650,-80,37);
//  RunpidStraightNTo(30,-550,10,10,100,0,0,600,-88,5);

// // // //  ///////////////////////////4//////////////////////////////
// // // RunpidStraightNTo(60,1200,20,6,60,0,0,1800,0,10);
// TurnVolpidNTo(90,-270+45,1,600,25);
// airpoweredG.set(1);
//        airpoweredH.set(1);
//  RunpidTo(100,3800,20,100,800,11,3300,1400,-180,43,100,2,0);
//  CatapultVol(100);

       ///////////////////////////////end///////////////////////////////////




 /////////////////////////////////////////////////////////
//  RunpidStraightNTo(30,-450,10,10,100,0,0,600,-90,5);
// TurnVolpidNTo(90,-180,1,600,26);
//  RunVolAuto(-40, 200);
//  Inertial1.resetRotation();

 
//   airpoweredA.set(0);
// airpoweredC.set(0);
//  TurnVolpidNTo(70,-360-360,1,1200,25);
//  RunpidStraightNTo(50,600,20,6,60,0,0,800,-720,10);
//  RunpidTo(40,300,20,0,0,5,500,1200,-790,55,0,2,1);
//   RunpidStraightNTo(50,800,20,6,60,0,0,900,-810,10);
//    RunpidTo(40,140,20,0,0,2,10,1200,-900,55,0,2,1);
//    TurnVolpidNTo(100,-970,1,600,26);
//    RunpidTo(50,1650,20,0,0,0,0,1200,-900,55,500,2,1);
///////////////////////////////////////////////////////////////////////
// // RunpidTo(40,-820,20,0,0,6,500,1200,-70,55,400,2,1);
// // airpoweredA.set(1);
// // IntakeVol(-3);
// // RunpidStraightNTo(50,1300,20,6,60,0,0,1000,-90,10);
// RunpidTo(40,298,20,0,0,5,500,1200,-800,55,0,2,1);
// IntakeVol(-50);
// RunpidTo(40,1000,20,25,1000,0,10,1200,-810,43,600,2,0);
//  TurnVolpidNTo(100,-950,1,400,25);
//  RunpidTo(50,2500,20,100,800,2,200,2000,-890,43,1000,2,0);
// RunpidTo(50,820,20,0,0,5,50,1200,-180,55,400,2,1);
// RunVolAuto(-50, 300);
// RunpidStraightNTo(80,1300,100,100,500,0,0,950,-180,37);
//   // RunpidTo(100,820,20,0,0,0,0,1200,-180,55,400,2,1);
//   airpoweredA.set(0);
// airpoweredC.set(0);
//  RunpidTo(50,-1800,20,0,0,0,0,1200,-180,55,1000,2,1);
//  RunpidTo(60,700,20,0,0,0,0,1200,-70,55,0,2,1);
//  RunpidStraightNTo(40,1900,10,60,1000,0,0,1100,-90,7);
//  RunpidTo(50,290,20,0,0,0,500,1200,-180,55,0,2,1);
//  IntakeStop(0);
//  TurnVolpidNTo(60,-260,1,600,26);
//  airpoweredA.set(1);
// airpoweredC.set(1);
//  RunpidStraightNTo(40,800,10,10,120,0,0,1000,-260,8);
//  RunpidTo(30,1260,20,0,0,0,500,1200,-180,55,200,2,1);
// //  RunVolAuto(-50, 500);
// RunpidStraightNTo(80,1300,100,80,500,0,0,950,-180,37);
// RunpidStraightNTo(60,-1100,20,6,60,0,0,1800,-180-720,10);
// TurnVolpidNTo(60,-120,1,600,26);
// RunpidStraightNTo(50,2500,20,10,400,8,500,2000,-120-720,1);
//  airpoweredA.set(0);
// airpoweredC.set(0);
// TurnVolpidNTo(60,-235-720,1,600,26);
// RunpidTo(40,-1300,20,25,1000,0,10,1200,-185-720,43,600,2,0);
//  RunpidTo(50,2900,20,100,800,2,200,2000,-240-720,43,1000,2,0);
//  RunVolAuto(-50, 200);
//     IntakeVol(-100);
//   // RunpidStraightNTo(47,-500,10,0,0,0,0,600,92,37);
// RunpidStraightNTo(100,1400,100,100,500,6,10,650,-265-720,37);
// RunVolAuto(-50, 200);
  

//  RunpidTo(40,1700,20,40,800,0,0,2000,-90,43,700,2,0);
//  RunpidTo(40,440,20,0,0,0,0,1200,-150,55,400,2,1);
// RunpidStraightNTo(30,500,10,10,100,0,0,600,-40,5);
// TurnVolpidNTo(100,-90,1,600,26);
// RunpidTo(60,800,20,6,60,0,400,600,-55,53,0,0,0);
/////////////////////////////////////////////////////////////////////
//    BaseMotorStop(1);

//    a5=0;
//    TAUTO1_1.clear();
//   while(a5<=44&&TAUTO1_1<=22000){
//     CatapultVol(80);
//     if(Distance2.objectDistance(mm)<=50&&b5!=1){
//       b5=1;
//     }
//     if(Distance2.objectDistance(mm)>=80&&b5==1){
//       a5++;
//       b5=0;
//     }
//     wait(20);
//   }
//  CatapultStop(0);
// RunpidTo(50,1500,20,25,1000,2,10,1200,-90,43,500,2,0);
//   TurnVolpidNTo(100,89,1,800,21);
//   RunpidTo(80,-1500,20,25,1000,2,10,1200,88,43,600,2,0);
//   TurnVolpidNTo(100,10,1,800,21);
//   airpoweredC.set(1);
//   airpoweredH.set(1);
//    RunpidTo(100,-4300,20,100,2000,1,1700,1650,0,41,1000,1,0);
//    airpoweredC.set(0);
//   airpoweredH.set(0);
//    TurnVolpidNTo(100,85,1,800,21);
//   //  RunVolAuto(-40, 20);
//    RunpidTo(50,1500,20,25,1000,0,10,1100,100,43,110,2,0);
//    airpoweredG.set(0);
//    TurnVolpidNTo(100,135,1,600,25);
//    RunpidTo(50,1000,20,0,0,0,0,800,135,45,200,2,1);
//    TurnVolpidNTo(100,235,1,600,21);
//    IntakeVol(-100);
//    RunpidTo(80,5700,20,50,5000,16,2000,1650,270,41,200,2,1);
//   //  RunVolAuto(-40, 200);
//    airpoweredA.set(0);
// TurnVolpidNTo(60,450,1,600,21);
// RunpidTo(40,-1800,20,25,1000,1,10,1200,495,43,100,2,0);
// RunpidTo(40,-1300,20,25,1000,1,10,1200,520,43,100,2,0);
// RunpidStraightNTo(100,-1000,10,100,500,0,0,520,540,37);
// RunpidStraightNTo(100,700,10,100,500,0,0,650,520,37);
// // RunVolAuto(40, 300);
// RunpidStraightNTo(100,-1000,10,100,500,0,0,650,530,37);
// RunVolAuto(40, 200);
// TurnVolpidNTo(100,450,1,600,25);
// airpoweredH.set(0);
// RunVolAuto(-40, 400);
// Inertial1.resetRotation();
// RunpidTo(50,2800,20,0,0,0,0,1600,-36,55,400,2,1);
// TurnVolpidNTo(60,-170,1,700,23);
// RunpidTo(60,1050,20,6,60,0,0,700,-170,36,0,2,0);
// RunpidTo(100,1300,100,6,60,0,0,600,-180,36,600,2,0);
// IntakeVol(0);
// RunpidTo(70,-1800,20,25,1000,0,0,1100,-180,43,0,2,0);
// TurnVolpidNTo(60,-90,1,600,25);
// RunpidTo(100,1300,100,6,60,0,0,900,-90,36,600,2,0);
// TurnVolpidNTo(60,-180,1,600,25);
// RunpidTo(60,850,20,6,60,5,10,800,-180,36,0,2,0);
// RunpidTo(100,1300,100,6,60,0,0,900,-180,36,600,2,0);
// airpoweredA.set(0);
// airpoweredG.set(0);
// RunpidTo(70,-1800,20,25,1000,0,0,1100,-160,43,0,2,0);
// TurnVolpidNTo(50,-180,1,600,4);
// airpoweredA.set(1);
// airpoweredG.set(1);
// RunpidTo(100,2200,100,100,300,0,0,1000,-180,36,600,2,0);
// RunVolAuto(-50, 300);
// RunVolAuto(80, 600);
// airpoweredA.set(0);
// // airpoweredG.set(1);
// RunpidTo(70,-1600,20,25,1000,0,0,1100,-180,43,0,2,0);
// TurnVolpidNTo(60,-115,1,800,25);
// RunpidTo(100,2500,6,100,300,0,0,1000,-115,36,600,2,0);
// airpoweredG.set(0);
// TurnVolpidNTo(60,-95,1,800,4);
// RunpidTo(50,1300,20,6,60,0,0,1000,-90,36,0,2,0);
// TurnVolpidNTo(60,-190,1,800,25);
// RunpidTo(40,-800,20,25,1000,0,10,1200,-180,43,100,2,0);
// RunpidTo(40,1900,20,25,1000,0,10,1200,-220,43,600,2,0);
// airpoweredG.set(0);
// RunpidStraightNTo(100,1400,10,100,500,0,0,650,-260,37);
// RunpidStraightNTo(47,-900,10,0,0,0,0,600,-260,37);
// RunpidStraightNTo(100,1000,10,100,500,0,0,600,-270,37);
// // RunpidTo(30,-180,20,0,0,0,0,1400,-180,45,0,2,1);
}
// ////////////////////////////////

//  TurnVolpidNTo(90,-45,1,900,25);
//  RunpidTo(50,1250,20,6,60,0,0,1000,-90,36,600,2,0);
//  CatapultStop(0);
// RunpidTo(90,3250,20,90,3700,0,0,1750,-89,41,800,1,0);
// RunpidTo(50,1250,20,6,60,4,200,1000,-130,36,100,2,0);
// RunpidTo(70,1250,20,6,60,5,500,1200,-175,36,300,2,0);
// // RunpidTo(50,-1250,20,6,60,0,0,1000,-140,36,100,2,0);
// RunpidStraightNTo(47,-700,10,0,0,0,0,600,-175,37);
// RunpidStraightNTo(100,1200,10,80,500,0,0,650,-180,37);
// RunpidStraightNTo(47,-700,10,0,0,0,0,600,-175,37);
//  TurnVolpidNTo(100,-270,1,900,25);
//  RunVolAuto(-40,300);
// /////////////////////////////////////////////////////
// RunpidTo(60,2000,20,60,1000,4,1600,2000,-263,43,10,2,0);
// RunpidTo(40,1400,20,0,0,0,0,900,-180,45,0,2,1);
// RunpidTo(40,1000,20,0,0,0,0,900,-100,45,200,2,1);
// TurnVolpidNTo(100,-90,1,400,25);
// RunpidTo(60,1900,20,60,1000,0,0,1500,-90,43,10,2,0);

// RunpidTo(50,-2000,20,50,1000,5,10,2000,-130,43,400,2,0);
// TurnVolpidNTo(100,-180,1,700,25);
// airpoweredA.set(1);
// airpoweredG.set(1);
// RunpidStraightNTo(47,500,10,0,0,0,0,600,-180,37);
// RunpidTo(30,1800,20,0,0,0,0,900,-90,45,400,2,1);
// TurnVolpidNTo(100,-90,1,400,25);
// RunpidTo(60,1800,20,60,1000,0,0,1200,-90,43,10,2,0);
// RunpidTo(50,-1400,20,6,60,0,0,1000,-90,36,100,2,0);
// TurnVolpidNTo(100,-180,1,700,25);
// RunpidTo(50,2600,20,0,0,0,0,1500,-115,45,700,2,1);
// airpoweredA.set(0);
// airpoweredG.set(0);
// TurnVolpidNTo(100,-196,1,700,25);
// RunpidTo(50,1350,20,6,60,0,0,1000,-196,36,100,2,0);
// TurnVolpidNTo(100,-90,1,700,25);
//  RunpidTo(50,1550,20,6,60,4,10,1000,-45,36,300,2,0);
// RunpidTo(70,1250,20,6,60,5,700,1200,-5,36,300,2,0);
// // RunpidTo(50,-1250,20,6,60,0,0,1000,-140,36,100,2,0);
// RunpidStraightNTo(47,-700,10,0,0,0,0,600,0,37);
// RunpidStraightNTo(100,1200,10,80,500,0,0,650,-5,37);
// RunpidStraightNTo(47,-700,10,0,0,0,0,600,-5,37);
// RunpidStraightNTo(100,1200,10,80,500,0,0,650,-5,37);
///////////////////////////////////////////////////////////
////////////////////////////////////////////////////
//  RunpidTo(70,2400,10,65,1000,0,0,1200,-255,32,0,0,0);
//  TurnVolpidNTo(100,-135,1,600,25);
//  RunpidTo(70,2000,20,70,1000,4,50,2000,-90,43,250,2,0);
//  RunpidTo(60,-2000,20,60,1000,5,50,2000,-90,43,10,2,0);
//  TurnVolpidNTo(100,-180,1,700,25);
//  RunpidStraightNTo(47,700,10,0,0,0,0,600,-180,37);
// TurnVolpidNTo(100,-90,1,700,25);
//  RunpidTo(70,2000,20,70,1000,4,50,2000,-90,43,10,2,0);
//  RunpidTo(60,-2000,20,60,1000,5,50,2000,-90,43,10,2,0);
//  TurnVolpidNTo(100,-180,1,700,25);
//  RunpidStraightNTo(47,700,10,0,0,0,0,600,-180,37);
// TurnVolpidNTo(100,-90,1,700,25);
//  RunpidTo(70,2000,20,70,1000,4,50,2000,-90,43,10,2,0);
// //  RunpidTo(60,-2000,20,60,1000,5,50,2000,-90,43,10,2,0);


//   RunpidTo(50,-1250,20,6,60,0,0,1000,-90,36,100,2,0);
  
// TurnVolpidNTo(100,-155,1,600,25);
// RunpidTo(80,1700,10,20,500,4,600,1200,-150,44,0,2,1);
// RunpidTo(60,1200,20,0,0,3,300,1300,-70,55,200,2,1);
// RunVolAuto(-30, 1200);
//   //  RunpidTo(70,-1800,20,70,1400,5,200,1200,0,60,900,2,1);
//   //  RunVolAuto(-80, 500);
//   //  TurnVolpidNTo(90,90,1,700,25);
//   //  RunpidTo(70,2700,20,70,1400,5,200,1600,90,60,900,2,1);
//   //  RunVolAuto(-50, 300);
//   //  RunpidTo(50,1300,20,6,60,0,0,1000,90,36,100,2,0);
//   //  TurnVolpidNTo(90,180,1,700,25);
//   //  RunpidTo(50,1300,20,6,60,0,0,1000,180,36,100,2,0);
//   //  TurnVolpidNTo(90,270,1,700,25);
//   //  RunpidTo(90,3200,20,90,3700,0,0,1650,270,41,800,1,0);
//     // RunpidTo(50,1250,20,6,60,0,0,900,310,36,300,2,0);
//     RunpidTo(100,1700,20,100,800,5,200,900,0,43,100,2,0);
//     // RunpidStraightNTo(47,-700,10,0,0,0,0,600,-5,37);
// RunpidStraightNTo(100,1200,10,100,500,0,0,650,0,37);
// RunpidStraightNTo(47,-700,10,0,0,0,0,600,-5,37);
// RunpidStraightNTo(100,1700,10,100,500,0,0,650,0,37);
// RunpidStraightNTo(47,-900,10,0,0,0,0,800,-90,37);
 
//   TurnVolpidNTo(100,-150,1,600,25);
//   RunpidTo(40,1600,10,20,500,6,600,1200,-157,44,0,2,1);
//   RunpidTo(40,1500,10,20,500,6,600,2000,-67,44,600,2,1);
/////////////////////////////////
  // wait(3000);
  // waitUntil(Distance1.objectDistance(mm)<=25);
  // while(k10<=23){
  //   // wait(100);
  //   // CatapultAuto(100, 200);
  //   CatapultVol(100);
  // waitUntil(Distance1.objectDistance(mm)<=25);
  // CatapultAuto(100, 200);
  // // CatapultVol(6);
  // k10++;
// wait(40);
  


//技能赛/////
// int a5=0;
// int b5=0;
// void auto5() {
//    RunpidTo(100,-1200,20,100,800,5,200,900,0,43,0,2,0);
//    RunpidTo(60,500,20,6,60,0,0,500,-23,53,0,0,0);
//    TurnVolpidNTo(100,-109,1,800,25);//-111.5
//    RunVolAuto(-10, 200);
//    RightVol(-10);
// int k10=0;
// k10=0;
//   CatapultVol(100);
//   waitUntil(Distance1.objectDistance(mm)<=25);
//   while(k10<=45){
//     // wait(100);
//     CatapultAuto(100, 200);
//     CatapultVol(100);
//   waitUntil(Distance1.objectDistance(mm)<=25);
//   CatapultVol(6);
//   k10++;
// // wait(40);
//   }
//    RunpidTo(80,2200,10,65,1000,3,1000,1400,-180,59,0,2,1);
//    RunVolAuto(-20, 100);
//    TurnVolpidNTo(100,-85,1,800,21);
// // // IntakeVol(-100);
//     airpoweredB.set(1);
// //  RunpidTo(60,900,20,6,60,0,0,500,-90,53,0,0,0);
// RunpidTo(100,3000,20,60,1000,5,200,1400,-90,41,0,2,1);
// //  RunVol(50);
// //   waitUntil(Inertial1.roll()<=-8);
// //   AllMotorStop(0);
// RunVolAuto(-40, 200);
// RunpidTo(100,1700,20,100,1500,4,200,1000,-90,43,1100,2,0);
// //  RunpidTo(100,3800,20,100,3700,4,1000,1550,-91,41,500,1,1);
//   //  RunpidStraightNTo(85,-2600,10,80,1000,5,200,1500,-90,32);
// RunpidTo(100,-2700,20,60,1000,5,200,1000,-180,41,0,2,1);
// // RunVolAuto(-20, 300);
// TurnVolpidNTo(100,-135,1,400,21);
// RunpidTo(100,2500,20,100,800,4,200,1400,-115,43,500,2,1);
//  RunpidTo(100,-3200,20,100,2800,5,100,1550,0,60,800,2,0);
//  TurnVolpidNTo(100,-30,1,400,21);
//  RunpidTo(100,1900,20,100,1400,4,200,900,-90,43,500,2,1);
//   RunpidTo(80,-1700,20,80,1400,5,200,900,-180,60,800,2,1);
//   RunpidTo(80,1700,20,80,1400,5,200,900,-180,60,800,2,1);
//    RunVol(50);
//   waitUntil(Inertial1.roll()<=-8);
//   AllMotorStop(0);
//   RunpidTo(100,2200,10,100,1000,3,1000,1400,-179,59,0,2,1);
//   // RunpidTo(50,4500,20,40,2000,5,100,3000,-180,60,400,2,1);
//   RightVol(40);
//   LeftVol(-40);
//   wait(300);
//    TurnVolpidNTo(100,-90,1,3000,25);
//    RunpidStraightNTo(60,1000,20,0,0,0,0,900,-90,36);
//    RunpidTo(100,3000,20,100,2800,0,0,1550,0,63,0,2,0);
// RunpidStraightNTo(60,-900,10,0,0,0,0,600,-2,37);
//    RunpidStraightNTo(100,900,10,100,500,0,0,800,-3,37);
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
// RunpidTo(80,2400,10,65,1000,4,50,1200,-90,57,100,2,0);
// RunpidTo(80,-2100,10,65,1000,5,50,1200,-150,58,0,2,1);
// RunpidTo(80,2400,10,65,1000,4,50,1200,-90,58,100,2,0);
// RunpidTo(80,-2100,10,65,1000,5,50,1200,-150,58,0,2,1);
// RunpidTo(80,2400,10,65,1000,4,50,1200,-90,58,100,2,0);
// RunpidTo(100,-1500,20,100,800,5,200,900,-36,58,0,2,0);
// // RunpidTo(80,-2100,10,65,1000,5,50,1200,-35,58,0,2,1);
// RunpidTo(80,2400,10,65,1000,4,50,1200,-90,58,100,2,0);
// RunpidTo(100,-1500,20,100,800,5,200,900,-36,58,0,2,0);
// RunpidTo(80,-2100,10,65,1000,5,50,1200,-35,58,0,2,1);


  // RunpidTo(60,820,20,0,0,3,200,1200,0,45,0,2,1);
// RunpidTo(60,800,20,0,0,0,0,2000,-180,45,0,2,1);

//  RunpidTo(100,850,20,0,0,0,0,1200,0,45,0,2,1);
//  TurnVolpidNTo(100,3,1,800,26); 
//  RunpidTo(70,1200,10,20,500,0,0,900,3,44,0,2,0);
  // RunpidTo(60,820,20,0,0,3,200,1200,0,45,0,2,1);
// RunpidTo(100,850,20,0,0,0,0,1200,-180,45,0,2,1);


 

    // RunpidTo(80,2700,10,65,1000,3,1000,1400,-90,50,800,0);
    //  RunpidTo(100,1000,20,80,800,3,200,1200,-270,45,0,2);
    //  TurnVolpidNTo(100,-150,1,600,25);
    //  RunpidTo(80,2100,10,65,1000,3,600,1400,-90,50,800,1);
//   b5=0;
//    RunpidStraightNTo(60,1000,20,6,60,0,0,800,0,10);
//  TurnVolpidNTo(70,77,1,600,17);
//   RunpidStraightNTo(60,-1600,15,42,800,0,0,1200,77,23);
//   a5=0;
//   CatapultVol(100);
//   waitUntil(Limit1.pressing());
//   while(a5<=46){
//     wait(50);
//     CatapultAuto(100, 200);
//     CatapultVol(100);
//   waitUntil(Limit1.pressing());
//   CatapultVol(10);
//   a5++;

//   }
//   IntakeVol(-100);
// TurnVolpidNTo(70,130,2,600,11);
// RunpidStraightNTo(75,1400,12,25,200,0,0,1100,130,18);
// TurnVolpidNTo(70,90,1,600,2);
// RunpidStraightNTo(100,5300,20,100,3000,0,0,4000,90,28);
// TurnVolpidNTo(70,240,1,1000,9);
// RunpidStraightNTo(100,-2700,20,70,1970,0,0,4000,210,28);
//  RunpidStraightNTo(30,500,10,10,100,0,0,1800,210,17);
// TurnVolpidNTo(70,270,2,600,11);
// RunpidStraightNTo(100,3000,20,70,1970,0,0,4000,270,28);
// TurnVolpidNTo(70,360,1,700,1);
// RunpidStraightNTo(79,1550,15,78,800,0,0,1800,360,27);
// TurnVolpidNTo(70,270,1,700,1);
// RunpidStraightNTo(80,-2000,10,65,1000,0,0,1500,270,7);
// Inertial1.resetRotation();

// RunpidStraightNTo(80,2000,10,65,1000,0,0,1500,0,7);
// TurnVolpidNTo(70,90,1,700,1);
// RunpidStraightNTo(79,1600,15,60,1100,0,0,1450,90,22);
// TurnVolpidNTo(70,0,1,700,1);
// RunpidStraightNTo(80,-2000,10,65,1000,0,0,1500,0,7);
// RunpidStraightNTo(80,2000,10,65,1000,0,0,1500,0,7);
// AllMotorStop(0);
// TurnVolpidNTo(70,-60,2,1500,11);
// RunpidStraightNTo(100,-2700,20,70,1970,0,0,4000,-60,28);
// TurnVolpidNTo(70,-130,1,1500,16);
// UpDownencodeTo(100, 35);
// RunpidStraightNTo(100,2700,20,70,1970,0,0,4000,-100,28);
// CatapultAuto(100, 100);
// TurnVolpidNTo(100,30,1,500,12);
// IntakeVol(100);
//  RunpidStraightNTo(90,1730,10,65,1000,0,0,950,30,32);
// TurnVolpidNTo(100,40,1,600,12);
// RunpidStraightNTo(65,1200,12,45,1000,0,0,900,43,3);
//  BaseMotorStop(2);
//  RunpidStraightNTo(100,-2500,20,70,1970,0,0,1300,43,28);
//  TurnVolpidNTo(100,-90,1,600,22);
//  RunpidStraightNTo(30,300,10,0,0,0,0,800,-90,11);
//// RunpidStraightNTo(100,3100,20,60,1000,0,0,2000,43,1);
// RunpidStraightNTo(100,-1800,10,70,1000,0,0,1150,38,32);
// TurnVolpidNTo(100,-90,1,600,21);
// RunpidStraightNTo(60,1000,20,6,60,0,0,800,-90,10);
// // RunpidStraightNTo(100,2200,10,70,1000,0,0,1150,55,32);
// // TurnVolpidNTo(100,25,1,700,4);
// // IntakeVol(100);
// // RunpidStraightNTo(60,1000,20,6,60,0,0,800,25,10);
// // RunpidStraightNTo(70,-1500,12,45,1000,0,0,1000,25,3);
// // TurnVolpidNTo(90,-90,1,500,25);
// // RunpidStraightNTo(70,1500,12,45,1000,0,0,1000,-90,3);
// TurnVolpidNTo(100,-185,2,700,1);
//  IntakeVol(-100);

 
//  UpDownencodeTo(100,0);
//   RunpidStraightNTo(45,800,10,15,150,0,0,1800,-230,2);
//   // RunpidStraightNTo(30,200,10,0,0,0,0,800,-235,11);
//   TurnVolpidNTo(70,-270,1,600,2);
  
//   RunpidStraightNTo(30,-300,10,0,0,0,0,1800,-200,11);
//   UpDownencodeTo(-30, -22);
//   RunpidStraightNTo(45,650,10,15,150,0,0,1800,-235,2);
//  TurnVolpidNTo(100,-250,1,600,4);
//  IntakeVol(-100);
// RunpidStraightNTo(90,1730,10,65,1000,0,0,1000,-270,32);
// RunpidStraightNTo(90,-1500,10,65,1000,0,0,1000,-270,32);
// TurnVolpidNTo(100,-330,2,700,1);
// RunpidStraightNTo(100,1800,10,70,1000,0,0,1150,-330,32);



