#include "vex.h"
//////蓝方抢球////////

void auto7() {
  
IntakeVol(100);
drive_to_point(22, 44, 10, 50, 40, 1, 200, 1000, 1, 1, 1, 4, 40);
IntakeVol(40);
TurnVolpidNTo(100,55,1,300,26); 
RunpidStraightNTo(45,-1220,20,6,60,1,1000,1400,52,10);
TurnVolpidNTo(100,91,1,600,26);
drive_to_point(33, 34, 10, 50, 40, 1, 200, 1000, 1, 1, 1, 0, 40); 
TurnVolpidNTo(100,155,1,600,26);
drive_to_point(34, -4, 10, 50, 40, 1, 200, 1200, 1, 1, 10, 0, 40); 
TurnVolpidNTo(100,127,1,600,26);
IntakeStop(0);
RunpidStraightNTo(35,600,20,6,60,1,1200,1000,127,10);

// RunpidTo(30,400,20,15,100,0,0,550,135,43,100,2,1);
TurnVolpidNTo(100,50,1,550,26);
TurnVolpidNTo(100,110,1,550,26);
IntakeVol(100);
drive_to_point(47, -8, 0, 25, 25, 2, 200, 500, 1, 1, 9, 0,0);
RunpidTo(25,-330,20,15,100,1,500,400,100,43,110,2,1);
  TurnVolpidNTo(100,30,1,550,26);
  RunpidTo(30,500,20,15,100,16,10,600,35,43,100,2,1);
  drive_to_point(44, 16, 0, 30, 25, 2, 200, 700, 1, 1, 9, 0,0);
  TurnVolpidNTo(100,-50,1,700,27);
  UpdownVol(-100);
    // vex::task::stop(task_auto_4_1);
  drive_to_point(-7, 45, 0, 40, 40, 2, 200, 1500, 1, 1, 10, 15,10);
  UpDownStop(0);
  airpoweredA.set(0);
  
// RunpidTo(25,-330,20,15,100,1,500,400,100,43,110,2,1);
// TurnVolpidNTo(100,30,1,550,26);
// RunpidTo(30,500,20,15,100,16,10,600,35,43,100,2,1);
// drive_to_point(44, 16, 0, 30, 25, 2, 200, 700, 1, 1, 9, 0,0);


// drive_to_point(30, 30, 10, 50, 50, 1, 200, 900, 1, 1, 1, 0, 0);
// TurnVolpidNTo(100,160,1,800,26); 
// drive_to_point(36, -5, 10, 50, 50, 1, 200, 900, 1, 1, 10, 0, 0);
// TurnVolpidNTo(100,90,1,600,26); 
// drive_to_point(46, -5, 10, 20, 20, 1, 200, 500, 1, 1, 9, 0, 0);
// TurnVolpidNTo(100,135,1,650,26); 
// RunpidTo(30,360,20,15,100,0,0,550,135,43,100,2,1);
// TurnVolpidNTo(100,-135,1,650,26); 
// TurnVolpidNTo(100,-145,1,350,26); 

}
//   RunpidStraightNTo(100,-3100,20,56,2000,0,0,5000,30,20);
//   // UpDownencodeTo(100, 0);
//    task_auto4_7 = vex::task(task_auto_4_7);
//   TurnVolpidNTo(70,45,1,1500,12);
//   IntakeVol(-100);
//  waitUntil(updown.rotation(vex::rotationUnits::deg)/UpDownGear>=375);
 

// //  wait(200);
// // //  IntakeVol(-100);
//   RunpidStraightNTo(30,500,10,10,100,0,0,1800,45,17);
  
//   IntakeStop(0);
//    vex::task::stop(task_auto_4_7);
//     task_auto4_8 = vex::task(task_auto_4_8);
//       RunpidStraightNTo(30,500,10,10,100,0,0,1800,45,17);
//      TurnVolpidNTo(100,-135,1,900,10);
//      IntakeVol(100);
//     RunpidStraightNTo(30,500,10,10,100,0,0,1800,-135,17);
//   TurnVolpidNTo(100,-240,1,800,21);
//   IntakeVol(-100);
//   RunpidStraightNTo(100,2400,20,70,1970,1,1900,1500,-275,21);

  // vex::task::stop(task_auto_1_3);
 
  
