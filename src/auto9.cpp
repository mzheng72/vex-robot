#include "vex.h"
void auto9() {
  //////判断防干扰进场弹射抢中球不椪杆///////
CatapultAuto(100, 150);
 RunpidTo(100,2400,10,65,1000,3,1200,2000,0,51,0,2,0);
 BaseMotorStop(2);
 if(Inertial1.rotation()>=6||Inertial1.rotation()<=-8){
  TurnVolpidNTo(100,0,1,500,25);
   RunpidTo(70,-1700,20,60,1000,3,200,2000,0,63,0,2);
   RunVolAuto(30, 100);
   TurnVolpidNTo(100,-90,1,500,25);
  //  RunVol(-40);
  // waitUntil(Inertial1.roll()>=2);
  // AllMotorStop(0);
 RunpidTo(70,1700,20,60,1000,3,200,2000,-94,63,0,2);
  //  RunpidTo(100,2600,10,40,1000,3,1200,2000,-93,51,0,2,0);
    RunVolAuto(20, 500);
  RunVolAuto(-30, 200);
  // RunpidStraightNTo(30,300,10,0,0,0,0,800,90,11);
  TurnVolpidNTo(100,-200,1,800,25);
  RunpidStraightNTo(50,950,10,10,100,1,300,1300,-200,17);
  
  TurnVolpidNTo(100,-398,1,900,26);
  airpoweredA.set(0);
  TurnVolpidNTo(100,-230,1,900,26);
   RunpidTo(70,1800,20,60,1000,2,200,2000,-270,63,0,2);
   RunpidTo(100,-1500,20,100,1000,5,200,900,-270,43,0,2);
  TurnVolpidNTo(100,-340,1,600,26);
  RunpidTo(100,1800,20,100,1000,5,200,900,-340,43,0,2);
 }
 if(Inertial1.rotation()<=6&&Inertial1.rotation()>=-8){
 
 
 
   RunpidTo(80,-2300,20,80,1400,5,200,1100,-90,60,500,2,1);
  //  RunVolAuto(-20, 200);
   RunVol(-40);
  waitUntil(Inertial1.roll()>=2);
  AllMotorStop(0);

   RunpidTo(100,2600,10,40,1000,3,1200,2000,-93,51,0,2,0);
    RunVolAuto(20, 500);
  RunVolAuto(-30, 200);
  // RunpidStraightNTo(30,300,10,0,0,0,0,800,90,11);
  TurnVolpidNTo(100,-200,1,800,25);
  RunpidStraightNTo(50,950,10,10,100,1,300,1300,-200,17);
  
  TurnVolpidNTo(100,-398,1,900,26);
  airpoweredA.set(0);
  TurnVolpidNTo(100,-230,1,900,26);
   RunpidTo(70,1800,20,60,1000,2,200,2000,-270,63,0,2);
   RunpidTo(100,-1500,20,100,1000,5,200,900,-270,43,0,2);
  TurnVolpidNTo(100,-340,1,600,26);
  RunpidTo(100,1800,20,100,1000,5,200,900,-340,43,0,2);
 }
}