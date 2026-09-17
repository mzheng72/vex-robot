#include "vex.h"
int a8=0;
vex::task task_8_1;
  int task_auto_8_1()
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
////////////////抢两球////////////////

void auto8() {
  
  ////////////////////////////////////////////////////
  // CatapultVol(80);
  // while(a8<5){
  // CatapultVol(80);
  // if(Distance1.objectDistance(mm)<=1000){
  //   a8++;
  //   wait(150);
  // }
  // }
  // ///////////////////////////////////////////////////////////
  // // CatapultAuto(100, 150);
  // RunpidTo(100,2800,20,100,2600,6,2000,1550,90,41,400,2,1);// Get firsr Triball
  // RunpidTo(80,-2200,20,80,1400,5,200,1100,0,60,0,2,1);
  // TurnVolpidNTo(100,-95,1,700,25); 
  //  RunpidStraightNTo(85,2200,10,65,1000,0,0,1200,-95,32);
  //  RunVolAuto(20, 500);
  // RunVolAuto(-30, 200);//find right direction
  //  TurnVolpidNTo(100,-200,1,800,25);
  // RunpidStraightNTo(50,950,10,10,100,1,300,1300,-200,17);//get the triball in the matchload zone
  // TurnVolpidNTo(100,-398,1,900,26);
  // airpoweredA.set(0);
  // TurnVolpidNTo(100,-230,1,900,26);
  //  RunpidTo(70,1800,20,60,1000,2,200,2000,-270,63,0,2);//touch the bar
  //////////////////////////////////////////////////////////////
// CatapultAuto(100, 150);
//  RunpidTo(100,2400,10,65,1000,3,1200,2000,0,51,0,2,0);
//    RunpidTo(80,-2300,20,80,1400,5,200,1100,-90,60,500,2,1);
//    RunVolAuto(-20, 200);
//    RunpidTo(100,2600,10,40,1000,3,1200,2000,-93,51,0,2,0);
//     RunVolAuto(20, 500);
//   RunVolAuto(-30, 200);
//   // RunpidStraightNTo(30,300,10,0,0,0,0,800,90,11);
//   TurnVolpidNTo(100,-200,1,800,25);
//   RunpidStraightNTo(50,950,10,10,100,1,300,1300,-200,17);
  
//   TurnVolpidNTo(100,-398,1,900,26);
//   airpoweredA.set(0);
//   TurnVolpidNTo(100,-230,1,900,26);
//    RunpidTo(70,1800,20,60,1000,2,200,2000,-270,63,0,2);
//    RunpidTo(100,-1500,20,100,1000,5,200,900,-270,43,0,2);
//   TurnVolpidNTo(100,-340,1,600,26);
//   RunpidTo(100,1800,20,100,1000,5,200,900,-340,43,0,2);

}