#include "vex.h"
///红方左边////
vex::task task_3_1;
  int task_auto_3_1()
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
void auto3() {
  airpoweredC.set(1);
  UpdownVol(-70);
  RunpidTo(25,450,20,15,100,0,0,700,-30,43,100,2,1);
   UpdownVol(100);
   wait(200);
 airpoweredC.set(0);
 UpdownVol(100);
 wait(100);
  // drive_to_point(1,-18, 20, 30, 10, 2, 200, 850, 1, 1, 4, 0,10);
  RunpidTo(45,-1800,20,30,1000,1,1400,1700,-26,43,100,2,1);
  TurnVolpidNTo(100,130,1,750,27);
  drive_to_point(27,-50, 20, 30, 30, 2, 200, 900, 1, 1, 4, 0,10);
  drive_to_point(36,-50, 20, 30, 25, 2, 200, 1000, 1, 1, 4, 0,10);
  drive_to_point(11,-37, 20, 30, 30, 2, 200, 900, 1, 1, 4, 0,10);
  TurnVolpidNTo(100,75,1,650,25);
  drive_to_point(33,-33, 20, 30, 10, 2, 200, 800, 1, 1, 4, 0,10);
   TurnVolpidNTo(100,30,1,750,25);

   RunpidTo(80,1800,20,15,100,0,530,1000,30,43,100,2,1);//720
  UpdownVol(0);
  RunpidTo(60,650,20,15,100,0,100,650,42,43,100,2,1);
  vex::task task_3_1 = vex::task(task_auto_3_1);
  UpdownVol(100);
  RunpidTo(40,-900,20,15,100,0,0,550,42,43,100,2,1);
  RunpidTo(30,400,20,15,100,0,0,850,42,43,100,2,1);
  RunpidTo(70,600,20,15,100,0,0,850,42,43,100,2,1);
  RunpidTo(40,-600,20,15,100,0,0,550,42,43,100,2,1);



// RunpidStraightNTo(40,40,10,4,10,22,10,1000,90,11);
// wait(150);
// UpdownVol(100);
// UpDownencode(100, 900);
// TurnVolpidNTo(50,178,1,700,26);
// UpDownencode(-100, 350);
// RunpidStraightN(25,-300,10,4,10,0,0,600,0,11);
// TurnVolpidNTo(100,140,1,550,26);
// RunpidStraightNTo(65,-1800,20,6,60,1,1600,1700,140,10);
// IntakeVol(100);
// TurnVolpidNTo(100,-113,1,600,25);
//  vex::task task_3_1 = vex::task(task_auto_3_1);
// drive_to_point(-28, 25, 10, 50, 40, 1, 200, 900, 1, 1, 1, 0, 20);
// TurnVolpidNTo(100,-5,1,600,25);
// UpDownencode(100, 500);
// drive_to_point(-26, 42, 10, 50, 40, 1, 200, 1200, 1, 1, 4, 0, 0);
// RunpidStraightNTo(25,-400,10,4,10,0,0,600,-17,11);
// drive_to_point(-33, 45, 10, 50, 40, 1, 200, 1200, 1, 1, 4, 0, 0);
// RunpidStraightNTo(25,-400,10,0,0,0,0,500,0,11);
// UpDownencode(-100,30);
// wait(500);
// airpoweredA.set(0);
// Optical1.brightness(0);
//  Optical1.setLightPower(0);
// ///////////////////
// // drive_to_point(-22, 40, 10, 50, 40, 1, 200, 900, 1, 1, 4, 0, 0);
// // RunpidStraightNTo(25,-400,10,0,0,0,0,500,-17,11);
// // drive_to_point(-33, 44, 10, 50, 40, 1, 200, 1200, 1, 1, 4, 0, 0);
// // drive_to_point(-20, 24, 10, 50, 40, 1, 200, 1200, 1, 1, 1, 0, 0);
// // TurnVolpidNTo(100,50,1,600,25);
// // IntakeStop(0);
// // drive_to_point(11, 44, 10, 50, 40, 1, 200, 1200, 1, 1, 10, 0, 0);
// // airpoweredA.set(0);
// // Optical1.brightness(0);
// vex::task::stop(task_auto_3_1);
//////////////////////////////////////////////
// RunpidStraightNTo(40,800,10,4,10,4,10,1000,90,11);
// TurnVolpidNTo(50,180,1,700,26);
// UpDownencode(-100, 300);
// RunpidStraightNTo(40,-1100,10,4,10,0,10,800,135,11);
// TurnVolpidNTo(100,90,1,600,26);
// IntakeVol(100);
// drive_to_point(29, 10, 10, 20, 10, 1, 200, 1200, 1, 1, 1, 0, 0);
// wait(300);
// IntakeVol(30);
// TurnVolpidNTo(100,115,1,600,26);
// IntakeStop(0);
// RunpidStraightNTo(65,-2200,20,6,60,1,2000,2200,120,10);
// TurnVolpidNTo(80,-50,1,1000,27);
// IntakeVol(100);
// drive_to_point(-23, 45, 10, 40, 30, 1, 200, 1000, 1, 1, 9, 0, 0);
// TurnVolpidNTo(80,-70,1,1000,26);
// drive_to_point(-34, 43, 10, 40, 30, 1, 200, 1000, 1, 1, 9, 0, 0);
// drive_to_point(-15, 24, 10, 30, 30, 1, 200, 1000, 1, 1, 1, 0, 0);
// TurnVolpidNTo(80,-90,1,1000,26);
// drive_to_point(-37, 23, 10, 40, 30, 1, 200, 1000, 1, 1, 9, 0, 0);
// RunpidStraightNTo(65,-2000,20,6,60,1,1950,2200,-120,10);
// airpoweredA.set(0);
// drive_to_point(-2, 30, 10, 40, 30, 1, 200, 1000, 1, 1, 9, 0, 0);
///////////////////////////////////////////////////////
// RunpidStraightNTo(40,-1100,10,4,10,0,10,800,135,11);
// drive_to_point(-38, 44, 15, 30, 30, 1, 200, 1000, 1, 1, 9, 0, 0);
// RunpidStraightNTo(70,-1700,20,6,60,1,1300,1500,135,10);
// IntakeVol(100);
// TurnVolpidNTo(100,-113,1,600,25);
// drive_to_point(-30, 25, 10, 50, 40, 1, 200, 1200, 1, 1, 1, 0, 0);
// TurnVolpidNTo(100,-5,1,600,26);
// drive_to_point(-26, 40, 10, 50, 40, 1, 200, 1200, 1, 1, 4, 0, 0);
// RunpidStraightNTo(25,-400,10,4,10,0,0,600,-17,11);
// drive_to_point(-33, 45, 10, 50, 40, 1, 200, 1200, 1, 1, 4, 0, 0);
// drive_to_point(-20, 24, 10, 50, 40, 1, 200, 1200, 1, 1, 1, 0, 0);
// TurnVolpidNTo(100,50,1,600,25);
// drive_to_point(11, 44, 10, 50, 40, 1, 200, 1200, 1, 1, 1, 0, 0);
// airpoweredA.set(0);
/////////////////////////////////////////////////////////////////////////
// RunpidStraightNTo(42,860,10,4,10,4,10,1100,-91,11);
// TurnVolpidNTo(50,-175,1,700,26);
// UpDownencode(-100, 300);
// RunpidStraightNTo(25,-300,10,4,10,0,0,600,-130,11);
// TurnVolpidNTo(100,-132,1,600,26);
// RunpidStraightNTo(70,-1700,20,6,60,1,1500,1500,-135,10);
// IntakeVol(100);
// TurnVolpidNTo(100,113,1,600,25);
// drive_to_point(30, 25, 10, 50, 40, 1, 200, 1200, 1, 1, 1, 0, 0);
// TurnVolpidNTo(100,5,1,600,26);
// drive_to_point(26, 40, 10, 50, 40, 1, 200, 1200, 1, 1, 4, 0, 0);
// RunpidStraightNTo(25,-400,10,4,10,0,0,600,17,11);
// drive_to_point(33, 45, 10, 50, 40, 1, 200, 1200, 1, 1, 4, 0, 0);
// drive_to_point(20, 24, 10, 50, 40, 1, 200, 1200, 1, 1, 1, 0, 0);
// TurnVolpidNTo(100,-50,1,600,25);
// drive_to_point(-11, 44, 10, 50, 40, 1, 200, 1200, 1, 1, 1, 0, 0);
// airpoweredA.set(0);
////////////////////////////////////////////////////////////////////////
// TurnVolpidNTo(80,-38,1,900,26);
// RunpidStraightNTo(50,-1200,20,6,60,1,900,1000,-38,10);
// TurnVolpidNTo(100,90,1,600,26);
// IntakeVol(100);
//   drive_to_point(2, -31, 10, 60, 45, 1, 200, 2000, 1, 1, 1, 0, 0);
//   TurnVolpidNTo(100,157,1,550,26);
//   drive_to_point(4, -49, 10, 50, 40, 1, 200, 2000, 1, 1, 1, 0, 0);
//    RunpidStraightNTo(30,-350,10,4,10,0,0,500,160,11);
//    drive_to_point(11, -49, 10, 50, 40, 1, 200, 2000, 1, 1, 1, 0, 0);
  // IntakeVol(100);
  // RunpidTo(100,2250,20,0,0,19,1,1050,16.5,71,0,2,1);
  
  //   RunpidTo(100,-1450,20,70,500,0,100,900,0,72,0,2,1);
  //   //  RunVolAuto(-20,300);
  //   TurnVolpidNTo(100,88,1,600,26); 
  //   RunpidTo(50,-1550,20,70,500,0,100,900,0,43,1550,2,0);
  //   RunVolAuto(-20,300);
  //    RunVolAuto(20,300);
  //   TurnVolpidNTo(100,148,1,600,26); 
  //   RunpidStraightNTo(60,800,20,6,60,1,200,1000,148,10);
  //   // RunpidStraightNTo(47,850,10,0,0,1,300,800,142,37);
  //   TurnVolpidNTo(100,100,1,500,22); 
  //   TurnVolpidNTo(100,120,1,500,22); 
  //   airpoweredA.set(0);
  //   IntakeVol(-100);
  //   wait(200);
  //   RunpidTo(70,1500,20,20,1100,18,300,1000,90,68,0,2,1);
  // RunVol(20);
  // waitUntil(Distance1.objectDistance(mm)<=220);
  // BaseMotorStop(2);
  // wait(100);
  // BaseMotorStop(0);

//    RunpidTo(100,-1200,20,100,800,5,200,900,0,43,0,2,0);
//   //  RunpidStraightNTo(100,900,10,80,500,0,0,650,90,37);
//    RunpidTo(100,1050,20,80,800,1,100,900,-45,43,0,2,0);
//     //  RunpidTo(80,800,20,70,500,1,500,800,-45,43,200,2);
//      TurnVolpidNTo(100,-140,1,700,26); 
//      airpoweredA.set(0);
//       RunpidTo(70,2250,10,65,1000,3,1200,2000,-180,49,0,2,0);
//       RunVolAuto(-20, 100);
//       //  RunpidStraightNTo(30,-300,10,0,0,0,0,600,-180,11);

//        TurnVolpidNTo(100,-85,1,800,21);
// // // IntakeVol(-100);
//     airpoweredG.set(1);
//      IntakeVol(100);
//  RunpidTo(80,900,20,6,60,0,0,500,-85,53,0,0,0);
// //  RunpidStraightNTo(60,800,20,6,60,0,0,1500,101,36);
//   // IntakeVol(-100);
//   // RunpidStraightNTo(30,-300,10,0,0,0,0,500,-90,11);
//   airpoweredG.set(0);

// //  wait(100);
//     // RunpidStraightNTo(70,300,10,0,0,0,0,500,-90,11);
//     // RunpidStraightNTo(70,-300,10,0,0,2,100,500,-90,11);
//     TurnVolpidNTo(100,0,1,700,25); 
//    RunpidTo(70,1200,10,55,1000,3,500,800,0,40,0,0,0);
   
// //  RunpidTo(80,-2200,10,65,1000,5,100,1500,-180,47,0,2,0);
//  RunVolAuto(20, 300);
//  TurnVolpidNTo(100,85,1,800,21);

//   RunpidStraightNTo(85,2200,10,65,1000,3,100,1200,85,32);
//   RunVolAuto(40, 500);
//   RunVolAuto(-30, 200);
// //   // RunpidStraightNTo(30,300,10,0,0,0,0,800,90,11);
//   TurnVolpidNTo(100,-33,1,800,26);
//    RunpidTo(70,2480,10,65,1000,2,1800,2000,-90,54,0,2,0);
   




      //  RunpidTo(80,-2100,10,65,1000,0,0,2000,-270,49,0,1);
// TurnVolpidNTo(100,60,1,800,25);
// // IntakeVol(60);
// // RunpidStraightNTo(100,2200,10,70,1000,0,0,1200,9,34);
// // RunpidStraightNTo(40,-600,10,15,150,0,0,900,9,35);
// // TurnVolpidNTo(100,-90,2,700,1);
// // CatapultAuto(100, 150);
// // task_auto3_1 = vex::task(task_auto_3_1);
// // IntakeVol(50);
// // TurnVolpidNTo(100,-157,1,1500,25);
// // RunpidStraightNTo(65,1200,12,45,1000,0,0,1000,-157,3);
// // TurnVolpidNTo(100,-90,1,700,25);
// // wait(100);
// //  CatapultAuto(100, 100);
// //  RunpidStraightNTo(45,850,10,15,150,0,0,1800,-90,2);
// //  TurnVolpidNTo(100,-185,2,700,1);
// //  IntakeVol(-100);
// //  UpDownencodeTo(100,0);
// //   RunpidStraightNTo(45,700,10,15,150,0,0,1800,-230,2);
// //  TurnVolpidNTo(70,-270,1,600,2);
// //   //  TurnpidNTo(100,-235,1,1200);
// //   //  TurnpidSingleTo(70,45,0.2,1,2.4,1,0,1,900);
// //     RunpidStraightNTo(30,-300,10,0,0,0,0,800,-190,11);
// //   UpDownencodeTo(100,21);
// //   RunpidStraightNTo(45,720,10,15,150,0,0,1800,-235,2);

// //  TurnVolpidNTo(70,-265,1,600,2);
      
       
// //    RunpidStraightNTo(70,1750,10,65,1000,0,0,1000,-270,32);

//    RunpidStraightNTo(65,-1200,12,45,1000,0,0,1000,-0,3);
//    RunpidStraightNTo(65,1150,12,45,1000,1,500,1000,-45,3);

//    RunpidStraightNTo(30,200,10,0,0,0,0,800,-45,11);
//    TurnVolpidNTo(70,-90,1,600,2);
//   //  TurnpidNTo(100,-45,1,1200);
//   //  TurnpidSingleTo(70,45,0.2,1,2.4,1,0,1,900);
//     RunpidStraightNTo(30,-300,10,0,0,0,0,1800,-20,11);
//    UpDownencodeTo(-30, -22);
//   RunpidStraightNTo(45,650,10,15,150,0,0,1800,-45,2);
//     // RunpidStraightNTo(30,400,10,0,0,0,0,800,-45,11);

//  TurnVolpidNTo(70,-70,1,600,2);
      
//        IntakeVol(-100);
//    RunpidStraightNTo(90,1730,10,65,1000,0,0,1000,-90,32);
//  TurnVolpidNTo(100,90,1,1500,22);
//  RunpidStraightNTo(30,-100,10,0,0,0,0,300,90,11);
// //  RunpidTo(30,-150,10,0,0,0,0,800,90,11);
//   // RunpidStraightNTo(30,500,10,10,100,0,0,1800,0,17);
//   // TurnVolpidNTo(90,-44,1,1500,2);
// // RunpidStraightNTo(90,2000,10,65,1000,0,0,1000,-50,32);
}