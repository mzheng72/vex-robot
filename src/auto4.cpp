#include "vex.h"
vex::task task_4_1;
  int task_auto_4_1()
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
// 红方右边////
void auto4() {
  /////////////////////////////////////
  UpdownVol(80);
  drive_to_point(30, 34, 40, 80, 50, 1, 200, 900, 1, 1, 1, 0,0);
  UpdownVol(60); 
  TurnVolpidNTo(100,170,1,700,27);
  UpDownStop(0);
  RunpidTo(35,-690,20,15,100,1,530,900,170,43,100,2,1);//720
  UpdownVol(100);
  drive_to_point(37, 23, 10, 40, 30, 2, 200, 1800, 1, 1, 9, 3,11);
  airpoweredA.set(0);
  TurnVolpidNTo(100,95,1,550,26);
  RunpidStraightNTo(60,-1800,20,6,60,1,1600,1500,93,10);
  TurnVolpidNTo(100,130,1,550,26);
drive_to_point(24, 9, 50, 80, 5, 2, 200, 1400, 1, 1, 4, 0,10);
  airpoweredD.set(1);
  // vex::task task_4_1 = vex::task(task_auto_4_1);
   RunpidTo(70,2200,20,15,100,0,530,900,137,43,100,2,1);//720
   airpoweredB.set(0);
  // drive_to_point(37, -1.9, 50, 80, 5, 2, 200, 1400, 1, 1, 4, 0,10);
//   TurnVolpidNTo(100,155,1,550,26);
//   drive_to_point(22, -4, 10, 35, 30, 2, 200, 1300, 1, 1, 1, 0,0);
//   TurnVolpidNTo(100,93,1,550,26);
//   UpdownVol(100);
//   drive_to_point(42, -3.5, 10, 40, 30, 2, 200, 1200, 1, 1, 1, 0,10);
//   TurnVolpidNTo(100,135,1,550,26);
//     vex::task task_4_1 = vex::task(task_auto_4_1);
  
  // RunpidTo(80,950,20,15,100,0,0,550,137,43,100,2,1);
  UpdownVol(0);
  RunpidTo(40,650,20,15,100,0,100,650,137,43,100,2,1);
  vex::task task_4_1 = vex::task(task_auto_4_1);
  UpdownVol(100);
  RunpidTo(40,-900,20,15,100,0,0,550,137,43,100,2,1);
  RunpidTo(30,400,20,15,100,0,0,850,137,43,100,2,1);
  RunpidTo(70,600,20,15,100,0,0,850,137,43,100,2,1);
  //   RunpidTo(40,-900,20,15,100,0,0,550,137,43,100,2,1);
  // RunpidTo(30,400,20,15,100,0,0,850,137,43,100,2,1);
  // RunpidTo(70,600,20,15,100,0,0,850,137,43,100,2,1);
  RunpidTo(40,-600,20,15,100,0,0,550,137,43,100,2,1);
    TurnVolpidNTo(100,-101,1,700,27);
    drive_to_point(5.9, 8, 10, 30, 5, 2, 200, 1400, 1, 1, 4, 0,10);


//  wait(1000);


  // IntakeVol(100);
  // drive_to_point(47, -6, 0, 25, 25, 2, 200, 500, 1, 1, 9, 0,0);
  // RunpidTo(25,-330,20,15,100,1,500,400,100,43,110,2,1);
  // TurnVolpidNTo(100,30,1,550,26);
  // RunpidTo(30,500,20,15,100,16,10,600,35,43,100,2,1);
  // drive_to_point(44, 16, 0, 30, 25, 2, 200, 700, 1, 1, 9, 0,0);
  // TurnVolpidNTo(100,-50,1,700,27);
  // UpdownVol(-100);
  //   vex::task::stop(task_auto_4_1);
  // drive_to_point(-7, 45, 0, 40, 40, 2, 200, 1500, 1, 1, 10, 15,10);
  // UpDownStop(0);
  // airpoweredA.set(0);
  //    Optical1.setLightPower(0);
//    IntakeVol(-100);
//   RunVolAuto(40, 500);
//   wait(200);
//   UpDownStop(0);
//    RunpidStraightNTo(30,-800,10,4,10,2,600,1000,135,11);
//    IntakeVol(100);
//    RunpidStraightNTo(30,600,10,4,10,2,600,800,135,11);
//    RunpidStraightNTo(40,-800,10,4,10,2,600,800,135,11);
//  TurnVolpidNTo(80,-45,1,1100,27);
//   UpDownencode(-100,100);  
//   drive_to_point(-10, 40, 0, 20, 35, 2, 200, 1500, 1, 1, 10, 8,7);
//  airpoweredA.set(0);
///////////////////////
  // IntakeVol(100);
  // RunpidTo(50,950,20,15,100,3,700,900,180,43,100,2,1);
  // TurnVolpidNTo(100,90,1,550,26);
  // RunpidStraightNTo(60,-1600,20,6,60,1,1200,1300,90,10);
  // TurnVolpidNTo(100,160,1,550,26);
  // drive_to_point(18, -7, 10, 80, 50, 1, 200, 900, 1, 1, 1, 0,0);
  // TurnVolpidNTo(100,100,1,550,26);
  // drive_to_point(43, -4, 10, 80, 50, 1, 200, 900, 1, 1, 1, 0,0);
  // UpdownVol(100);
  // TurnVolpidNTo(100,132,1,550,26);
  // UpDownStop(1);
  // IntakeVol(-100);
  // IntakeVol(-100);
  // RunVolAuto(50, 800);
  // wait(200);
  // UpDownStop(0);
  //  RunpidStraightNTo(30,-1000,10,4,10,2,600,1000,135,11);
  //  IntakeVol(100);
  // //  IntakeVol(100);
  //  RunpidStraightNTo(20,700,10,4,10,0,0,600,135,11);
  //  UpdownVol(-100);
  //  wait(200);
  //  UpDownStop(0);
  //  wait(200);
  //  RunpidStraightNTo(40,-700,10,4,10,0,0,600,135,11);
  //  TurnVolpidNTo(100,0,1,550,25);
  //  IntakeVol(-100);
  // //  drive_to_pose(0, 33, 135, 0.5, 0, 0, 40, 40, 1, 200, 1500, 1, 1, 3);
  //  drive_to_point(-9, 35, 10,50, 40, 1, 200, 1500,0, 0, 4, 0, 0);
  //  airpoweredA.set(0);
  //  drive_to_point(0, 33, 10, 80, 50, 1, 200, 2000, 1, 1, 1, 0,0);
  //  wait(3000);
  // IntakeVol(100);
  // drive_to_pose(5, 5, -90, 0.4, 0, 0, 65, 60, 1, 200, 1200, 4, 4, 2);
  // airpoweredA.set(0);
  // RunpidStraightNTo(30,730,10,4,10,0,0,600,-90,11);
  // TurnVolpidNTo(100,-160,1,550,26);
  // IntakeStop(0);
  // RunpidStraightNTo(60,-1400,20,6,60,1,1200,1300,-160,10);
  // drive_to_point(1, -7, 10, 80, 50, 1, 200, 1200, 1, 1, 1, 0, 0);
  // TurnVolpidNTo(100,95,1,550,26);
  // drive_to_point(41, -2, 10, 80, 50, 1, 200, 1200, 1, 1, 1, 0, 0);
  // IntakeVol(-100);
  //  TurnVolpidNTo(100,135,1,550,26);
  //  RunVolAuto(40, 400);
  //  wait(200);
  //  RunpidStraightNTo(23,-900,10,4,10,0,0,1000,135,11);
  //  IntakeVol(100);
  //  RunpidStraightNTo(20,700,10,4,10,0,0,600,135,11);
  //  wait(200);


//   IntakeVol(100);
// RunpidTo(100,2300,20,0,0,16,1,1000,-11,55,0,2,1);
// RunpidTo(60,-420,20,0,0,0,0,900,55,55,20,2,1);
//  RunpidTo(70,1600,20,50,1100,18,800,1000,90,70,0,2,1);
//   // CatapultAuto(100, 150);
// //   RunpidTo(100,2300,10,70,1000,3,1100,1000,0,54,1300,2,0);
 
  
// //   // airpoweredA.set(1);
//   RunVolAuto(-35, 200);
// //   RunpidStraightNTo(80,-1500,10,10,100,0,0,1000,0,17);
//   TurnVolpidNTo(100,230,1,800,25);
//   IntakeVol(100);
//    RunpidTo(70,1300,20,20,1100,0,300,1000,270,68,250,2,1);
//      RunVolAuto(-35, 100);
//      TurnVolpidNTo(100,420,1,600,26);
//      airpoweredC.set(1);
// RunpidTo(80,1600,20,20,1100,0,300,1000,450,68,250,2,1);
// RunVolAuto(80, 200);
// RunpidStraightNTo(60,-800,10,0,0,0,0,800,450,37);
// TurnVolpidNTo(100,518,1,600,26);
// RunpidTo(80,2300,20,60,800,8,200,1400,520,43,1000,2,0);
// airpoweredA.set(0);
// airpoweredC.set(0);
// TurnVolpidNTo(80,520-100,1,600,26);
// RunpidTo(50,-900,20,0,0,0,10,800,448,43,50,1,0);
//   // TurnVolpidNTo(100,448-30,1,500,22); 
//   airpoweredC.set(1);
//   IntakeVol(-40);
//   RunpidTo(80,1400,20,0,0,1,400,1300,448-45,36,300,2,1);
//    TurnVolpidNTo(100,100-90+358,1,500,22); 
//   TurnVolpidNTo(100,130-90+358,1,500,22); 
//   // IntakeVol(-100);
//   RunpidTo(100,1300,20,0,0,2,200,900,95-90+358,37,0,2);
//   IntakeStop(0);
//   // RunpidStraightNTo(100,1000,10,100,500,2,100,650,95,37);
//     RunpidStraightNTo(30,-500,10,6,100,7,100,650,92-90+358,37);
//     IntakeVol(-50);
//   // RunpidStraightNTo(47,-500,10,0,0,0,0,600,92,37);
// RunpidStraightNTo(100,1400,10,100,500,0,0,650,93-90+358,37);
// RunpidStraightNTo(30,-500,10,6,100,7,100,650,92-90+358,37);
//     IntakeVol(-50);
//   // RunpidStraightNTo(47,-500,10,0,0,0,0,600,92,37);
// RunpidStraightNTo(100,1400,10,100,500,0,0,650,93-90+358,37);
// RunpidStraightNTo(47,-450,10,0,0,0,0,500,92-90+358,37);
  // TurnVolpidNTo(100,130,1,500,22); 
// TurnVolpidNTo(100,520-10-90,1,400,22);
// IntakeVol(50);
//  RunpidTo(50,3000,20,100,800,2,200,1600,520-60-90,43,800,2,0);
//  airpoweredC.set(0);
// //  RunVolAuto(-50, 300);
//     IntakeVol(-100);
//   RunpidStraightNTo(47,-800,10,0,0,0,0,600,520-70,37);
//   // TurnVolpidNTo(80,-80,1,500,21);
//   IntakeVol(-50);
//  RunpidTo(100,1600,20,100,800,6,10,1000,520-70,43,0,2,0);
//     RunpidStraightNTo(80,-1500,10,10,100,0,0,1000,89,17);

//   RunVolAuto(-30, 300);
// //   wait(1500);
  
// //   RunpidStraightNTo(60,1100,10,10,100,0,0,1000,0,17);
//   TurnVolpidNTo(100,155,1,600,25);
//   RunpidStraightNTo(50,850,10,10,100,1,300,1000,140,17);
//    TurnVolpidNTo(100,114,1,600,22);
//    IntakeVol(-100);
//     RunpidTo(80,1800,20,40,1000,6,300,1100,90,63,0,2);
//     RunpidTo(60,-1800,20,30,1000,13,300,1100,120,63,700,2);
//////////////////////////////////////////////////////////////////
//   IntakeVol(-80);
  // RunpidStraightNTo(60,600,10,0,0,0,0,800,90,11);
//   TurnVolpidNTo(100,180,1,700,25); 
//    RunpidTo(75,1200,10,55,1000,2,500,800,180,40,0,0,0);
//     // RunpidTo(80,-2100,10,65,1000,5,100,1500,1,47,0,2,0);
//  RunVolAuto(20, 200);
//  TurnVolpidNTo(100,265,1,800,21);

//   RunpidStraightNTo(85,2200,10,65,1000,0,0,1200,265,32);
//   RunVolAuto(20, 500);
//   RunVolAuto(-30, 200);
//   // RunpidStraightNTo(30,300,10,0,0,0,0,800,90,11);
//   TurnVolpidNTo(100,164,1,800,25);
//   // RunpidStraightNTo(50,950,10,10,100,1,300,1000,162,17);
//   RunpidTo(50,800,20,6,60,1,300,1000,130,36,650,2,0);
//   RunpidTo(60,1800,20,30,1000,13,300,5000,90,63,200,2);
//   RunpidTo(100,-1500,20,100,1000,5,200,900,90,43,400,2);
///////////////////////////////////////////////////////////
  // TurnVolpidNTo(100,-90,1,600,25);
//   airpoweredA.set(1);
//   RunVolAuto(-25, 200);
//   //  RunpidTo(100,-200,20,0,0,0,0,1000,90,45,0,2,1);
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
  // /////////////////////////////////////////////////////

//    RunpidTo(90,2500,10,60,1000,3,1200,1100,0,51,0,2,0);
//     RunVolAuto(-25, 100);
// //     //  RunpidStraightNTo(30,-300,10,0,0,0,0,600,0,11);
//     TurnVolpidNTo(100,98,1,800,21);
// // // IntakeVol(-100);
//     // airpoweredB.set(1);
//  RunpidTo(60,800,20,6,60,0,0,500,98,53,0,0,0);
// //  RunpidStraightNTo(60,800,20,6,60,0,0,1500,101,36);
//   // IntakeVol(-100);
//   RunpidStraightNTo(30,-300,10,0,0,0,0,500,90,11);
//   // airpoweredB.set(0);
//  IntakeVol(-80);
// //  wait(100);
//     RunpidStraightNTo(70,300,10,0,0,0,0,500,90,11);
//     // RunpidStraightNTo(40,-600,10,15,150,0,0,500,90,35);
    
//     // RunpidStraightNTo(50,600,10,15,150,0,0,500,90,35);
//     TurnVolpidNTo(100,180,1,700,25); 
//    RunpidTo(75,1200,10,55,1000,2,500,800,180,40,0,0,0);
//     // RunpidTo(80,-2100,10,65,1000,5,100,1500,1,47,0,2,0);
//  RunVolAuto(20, 400);
//  TurnVolpidNTo(100,265,1,800,21);

//   RunpidStraightNTo(85,2200,10,65,1000,0,0,1200,265,32);
//   RunVolAuto(20, 500);
//   RunVolAuto(-30, 150);
//   // RunpidStraightNTo(30,300,10,0,0,0,0,800,90,11);
//   TurnVolpidNTo(100,168,1,800,25);
//   airpoweredA.set(1);
//   // RunpidStraightNTo(50,950,10,10,100,1,300,1000,162,17);
//   RunpidTo(50,800,20,6,60,1,200,1000,140,36,450,2,0);
//   RunpidTo(40,1800,20,30,1000,13,300,5000,90,63,200,2);
//   // TurnVolpidNTo(100,-30,1,900,26);
//   // RunpidStraightNTo(85,-2350,10,65,1000,5,200,1500,-90,32);
//   RunpidTo(100,-1500,20,100,1000,5,200,900,90,43,400,2);
//   TurnVolpidNTo(100,20,1,600,26);
//   RunpidTo(100,1800,20,100,1000,5,200,900,20,43,0,2);

///////////////////////////////////////////////////////

  //  RunpidTo(80,2400,10,65,1000,2,1800,2000,90,49,200,2);

// RunpidTo(100,800,20,80,700,3,200,1400,-180,45,0,2);
//   UpDownencodeTo(100, 0);
//   IntakeVol(-100);
// RunpidStraightNTo(30,500,10,10,100,0,0,1800,45,17);
// TurnVolpidNTo(70,0,1,600,2);
// RunpidStraightNTo(30,-300,10,0,0,0,0,800,65,11);
// UpDownencodeTo(100, 21);
// IntakeVol(100);
// RunpidStraightNTo(45,650,10,15,150,0,0,1800,45,2);

// IntakeVol(-100);
////////////////////////////////////////////////
//  IntakeVol(100);
// RunpidStraightNTo(100,2200,15,70,1000,0,0,1100,10,34);
// RunpidStraightNTo(40,-600,10,15,150,0,0,900,9,35);
// // TurnVolpidNTo(100,-90,2,700,1);
// // CatapultAuto(100, 150);

// // IntakeVol(50);
// TurnVolpidNTo(100,-157,1,700,22);
// RunpidStraightNTo(80,1000,10,65,1000,0,0,1100,-157,32);
// TurnVolpidNTo(100,-90,1,700,25);
//  RunpidStraightNTo(45,850,10,15,150,0,0,1800,-90,2);
//  TurnVolpidNTo(100,-185,2,700,1);
//  IntakeVol(-100);
//  UpDownencodeTo(100,0);
//   RunpidStraightNTo(45,700,10,15,150,0,0,1800,-230,2);
//  TurnVolpidNTo(70,-270,1,600,2);
//   //  TurnpidNTo(100,-235,1,1200);
//   //  TurnpidSingleTo(70,45,0.2,1,2.4,1,0,1,900);
//     RunpidTo(30,-350,10,0,0,0,0,800,-215,11,0,0);
//   UpDownencodeTo(-40,-22);
//   RunpidStraightNTo(45,820,10,15,150,0,0,1800,-235,2);
//  TurnVolpidNTo(100,-270,1,700,4);
//    RunpidStraightNTo(70,1750,10,65,1000,0,0,1000,-270,32);
// RunpidStraightNTo(70,-1500,12,45,1000,0,0,1000,-270,3);
    // TurnVolpidNTo(100,-440,1,700,22);
    //     RunpidStraightNTo(70,-1610,10,65,1000,0,0,1800,-447,32);
////////////////////////////////////////////////
// RunpidStraightNTo(60,650,10,15,150,0,0,1800,0,2);
//  RunpidStraightNTo(30,-300,10,0,0,0,0,800,0,11);
//  TurnVolpidNTo(70,-75,1,1500,25);
//  IntakeVol(100);
//  RunpidStraightNTo(100,2500,20,70,1000,0,0,1800,-75,6);
//  TurnVolpidNTo(70,60,1,80,21);
//    RunpidStraightNTo(30,300,10,0,0,0,0,800,60,11);
//  RunpidStraightNTo(90,1600,10,65,1000,2,1000,1000,90,32);


}