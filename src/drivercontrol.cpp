#include "vex.h"
#include <sys/wait.h>

int CA1, CA2, CA3, CA4;
bool BtnL1, BtnL2, BtnR1, BtnR2, BtnA, BtnB, BtnX, BtnY, BtnUp, BtnDown, BtnLeft, BtnRight;

vex::task task10_1;
int airpowered_control1() { 
     
     airpoweredA.set(1);
     airpoweredB.set(1);
       wait(100);
       airpoweringA = 1;
       airpoweringB = 1;
       flage22=1;
       return 0;
}

vex::task task10_2;
int airpowered_control2(){  
      airpoweredA.set(0);
     airpoweredB.set(0);
       wait(100);
       airpoweringA = 0;
       airpoweringB = 0;
       flage22=0;
  return 0;
}
vex::task task10_3;
int airpowered_control3(){
        airpoweredB.set(0);
       wait(100);
       airpoweringB = 1;
   return 0;
}
 vex::task task10_4;
  int airpowered_control4(){
        airpoweredB.set(1);
       wait(100);
       airpoweringB = 0;
  return 0;
}
vex::task task10_5;
int airpowered_control5(){
        airpoweredA.set(0);
        airpoweredD.set(0);
       wait(100);
       airpoweringA = 1;
       airpoweringD = 1;
       flage23=0;
   return 0;
}
 vex::task task10_6;
  int airpowered_control6(){
        airpoweredA.set(1);
        airpoweredD.set(1);
        wait(100);
        airpoweringA = 0;
        airpoweringD = 0;
        flage23=1;
  return 0;
}

vex::task task10_7;
int airpowered_control7(){
       
       UpDownencodeN(60,14,500,1);
      flage27=1;
        return 0;
}

 vex::task task10_8;
  int airpowered_control8(){
       UpDownencodeN(100,30,500,2);
      
      flage27=1;
        // flage24=0;
  return 0;
}
vex::task task10_9;
int airpowered_control9(){
        airpoweredC.set(1);
       wait(100);
       airpoweringC = 1;
     
   return 0;
}

 vex::task task10_10;
  int airpowered_control10(){
        airpoweredC.set(0);
        wait(100);
        airpoweringC =0;
      
  return 0;
}

 vex::task task10_11;
  int airpowered_control11(){
        airpoweredE.set(0);
        wait(100);
        airpoweringE =0;
      
  return 0;
}

 vex::task task10_12;
  int airpowered_control12(){
        airpoweredE.set(1);
        wait(100);
        airpoweringE =1;
      
  return 0;
}

vex::task task10_13;
  int airpowered_control13(){
       UpDownencodeN(100,157,1000,2);
        flage27=2;
  return 0;
}
vex::task task10_14;
  int airpowered_control14(){
       UpDownencodeN(100,14,1000,3);
        flage27=1;
  return 0;
}

vex::task task_huan;
int task_fenhuan()
{
 while(1){
   if(zhanwei=='R'){
    Optical1.setLightPower(100);
    if(Optical1.hue()<=20 && Optical1.isNearObject()){
    flage28=0;
    }
    else if(Optical1.hue()>=170 && Optical1.isNearObject()){
     flage28=1;
   
    }
  }
  else if (zhanwei=='B') {
    Optical1.setLightPower(100);
    if(Optical1.hue()<=20){
       flage28=1;
  
      
    }
    else if(Optical1.hue()>=200){
      flage28=0;
    
    }
  }
  }
return 0;
}


void drivercontrol(void) {
  while (true) {
    CA1 = Controller.Axis1.position();
    CA2 = Controller.Axis2.position();
    CA3 = Controller.Axis3.position();
    CA4 = Controller.Axis4.position();
    BtnL1 = Controller.ButtonL1.pressing();
    BtnL2 = Controller.ButtonL2.pressing();
    BtnR1 = Controller.ButtonR1.pressing();
    BtnR2 = Controller.ButtonR2.pressing();
    BtnA = Controller.ButtonA.pressing();
    BtnB = Controller.ButtonB.pressing();
    BtnX = Controller.ButtonX.pressing();
    BtnY = Controller.ButtonY.pressing();
    BtnUp = Controller.ButtonUp.pressing();
    BtnDown = Controller.ButtonDown.pressing();
    BtnLeft = Controller.ButtonLeft.pressing();
    BtnRight  = Controller.ButtonRight.pressing();


    if ( BtnB ) {
      AllMotorStop(0);  
      BaseMotorReset();
      IntakeReset();
      flage10=0;
      flage12=0;
      flage15=0;
      flage17=2;
      flage19=0;
      flage21=0;
      flage14=0;
      intaking = 0;
      pushing = 0;
      clipping = 0;
      updowning = 0;
      flywheeling = 0;
      X_position = 0;
      Y_position = 0;
      Inertial1.resetRotation();
      Controller.Screen.clearScreen();
    }
    
  else {
        // Optical1.setLightPower(100);
    //  if( controlmode == 0 && !BtnA && ( abs(CA3)>blindCA || abs(CA2)>blindCA  ) ) {
    //     LeftVol( CA3 * kCA2 * 1.27  ) ;
    //     RightVol( CA2 * kCA2 * 1.27  );
    //   }
    //   else if ( controlmode == 1 && !BtnA && ( abs(CA3)>blindCA || abs(CA2)>blindCA  ) ) 
    //   {
    //    LeftVol(CA3 * kCA2   ) ;
    //     RightVol(  CA2 * kCA2 );
    //   }
    //     else if ( flage10==1) {
    //    BaseMotorStop(1);
    //   }
    //          else if ( flage10==0) {
    //    BaseMotorStop(0);
    //   }
    //   else {
    //     BaseMotorStop(0);
    //   }


     if( controlmode == 0 && !BtnA && ( abs(CA1)>blindCA || abs(CA2)>blindCA  ) ) {
        LeftVol( CA2 *1.27* kCA2 + CA1 * kCA1  ) ;
        RightVol( CA2 * 1.27*kCA2 - CA1 * kCA1  );
      }
      else if ( controlmode == 1 && !BtnA && ( abs(CA1)>blindCA || abs(CA2)>blindCA  ) ) 
      {
        LeftVol(CA2 * kCA2 + CA1 * kCA1) ;
        RightVol( CA2 * kCA2 - CA1 * kCA1 );
      }
        else if ( flage10==1) {
       BaseMotorStop(1);
      }
         else if ( flage10==0) {
       BaseMotorStop(0);
      }
      else {
        BaseMotorStop(0);
      }
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   if(!BtnA && BtnLeft && airpoweringA==0){
      vex::task task10_5 = vex::task(airpowered_control5);
    }
    else if(!BtnA && BtnLeft && airpoweringA==1){
      vex::task task10_6 = vex::task(airpowered_control6);
    }
    ///////////////////////////// intake //////////////////////////////
    if(!BtnA && BtnR1&& airpoweringB==0){
      vex::task task10_3 = vex::task(airpowered_control3);
    }
    else if(!BtnA && BtnR1&& airpoweringB==1){
      vex::task task10_4 = vex::task(airpowered_control4);
    }
   /////////////////////////////////////////////////////////////////////
   if(!BtnA && BtnUp && flage27==0){
      vex::task task10_7 = vex::task(airpowered_control7);
    }
    else if(!BtnA && BtnUp && flage27==1){
      vex::task task10_8 = vex::task(airpowered_control8);
    }
   /////////////////////////////////////////////////////////////////////
   if(!BtnA && BtnDown && airpoweringE ==1 ){
      vex::task task10_11 = vex::task(airpowered_control11);
    }
    else if(!BtnA && BtnDown && airpoweringE ==0){
      vex::task task10_12 = vex::task(airpowered_control12);
    }
    ///////////////////////////////////////////////////////////////////
    if(!BtnA && BtnRight){
      vex::task task10_13 = vex::task(airpowered_control13);
          };
    
    ///////////////////////////////////////////////////////////////////
   if (CA3>30 && !BtnA) {
   UpdownVol(100);
   flage27=2;
   }
    else if (CA3<-30 && !BtnA && Updownrotation.position(degrees)<= 150) {
    UpdownVol(-100);
    flage27=0;
    }
    else if (CA3<-30 && !BtnA && Updownrotation.position(degrees)>= 150) {
    vex::task task10_14 = vex::task(airpowered_control14);
    flage27=2;
    }
    else if (flage27==1) {
    UpdownVol(5);
    }
    else if (flage27==2) {
    UpDownStop(2);
    }
  else if (flage27==0) {
  UpDownStop(0);
  }
  else {
  UpDownStop(0);
  }
//////////////////////////////////////////////////////////////////////
     if(!BtnA && BtnL2 && flage28 == 0) {  
        flage17=7;
       IntakeVol(-100);
      }
    else if(!BtnA && BtnL1 && flage28 == 0) {
      flage17=7;
      IntakeVol(100); 

     } 
     else if (flage28 == 1) {
     IntakeStop(1);
     }

      else {
       IntakeVol(0);
    }
    
if(!BtnA && BtnY && airpoweringC ==0){
      vex::task task10_9 = vex::task(airpowered_control9);
    }
    else if(!BtnA && BtnY && airpoweringC ==1){
      vex::task task10_10 = vex::task(airpowered_control10);
    }
  // if(!BtnA &&BtnR1){
  //     flage24=1;
  //   }
  //   else if(!BtnA&&BtnR2){
  //     flage24=2;
  //   }
    // if(!BtnA&&BtnUp){
    //   flage24=4;
    // }
    // else if(!BtnA&&BtnDown){
    //   flage24=3;
    // }
  //  if(!BtnA&&BtnLeft){
  //     // flage17=7;
  //     zhanwei='R';
  //   }
  //   else if(!BtnA&&BtnRight){
  //     // flage17=4;
  //     zhanwei='B';
  //   }
 

          if(!BtnA & BtnX )
    {
      UpDownReset();
      flage27=0;
            // Inertial1.resetRotation();
        BaseMotorReset();
    }
    }
//////////////////////////////////////////////////////////////////////////////////////
    if ( BtnA & BtnL1 ) {
      testmode = 1;
    } 
    else if ( BtnA & BtnL2 ) {
      testmode = 2;
    }
    else if ( BtnA & BtnR1 ) {
      testmode = 3;
    }
    else if ( BtnA & BtnR2 ) {
      testmode = 4;
    }
    else if ( BtnA & BtnY ) {
      testmode = 5;
    }
    else if ( BtnA & BtnB ) {
      testmode = 6;
    }
       else if ( BtnA & BtnUp ) {
      testmode = 7;
    }
       else if ( BtnA & BtnDown ) {
      testmode = 8;
    }
    else testmode = 0;

//manual auto select
    if ( BtnA && !auto_manual_select && CA3 < -30 && !BtnL1 && !BtnL2 && !BtnR1 && !BtnR2 ) {
      auto_manual_select = true;
      auton++;
      auton = CONSTRAIN(auton, 0, 12);
      sleep(200);
      auto_manual_select = false;
    }
    else if ( BtnA && !auto_manual_select && CA3 >30 && !BtnL1 && !BtnL2 && !BtnR1 && !BtnR2 ) {
      auto_manual_select = true;
      auton--;
      auton = CONSTRAIN(auton, 0, 12);
      sleep(200);
      auto_manual_select = false;
    }

//entry test
    switch ( testmode ) {
      case 1: test1(); break;
      case 2: test2(); break;
      case 3: test3(); break;
      case 4: test4(); break;
      case 5: test5(); break;
      case 6: test6(); break;
       
      default: testmode = 0; break;    
    }
//entry auto manually 
    if ( (BtnX && BtnA && !BtnB) && !BtnB && auton !=0 ) {
      switch( auton ){
        case 1: auto1();  break;
        case 2: auto2();  break;
        case 3: auto3();  break;
        case 4: auto4();  break;
        case 5: auto5();  break;
        case 6: auto6();  break;
        case 7: auto7();  break;
        case 8: auto8();  break;
        case 9: auto9();  break;
        case 10: auto10();  break;
        case 11: auto11();  break;
        default: auton = 0; break;
      }
      Brain.Screen.clearScreen();
      // BSCREEN_ON =false;
      CSCREEN_ON =true;
      AllMotorStop(0);
     // BaseMotorReset();
    }
    sleep(20);
  }
}


