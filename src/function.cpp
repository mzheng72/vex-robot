#include "vex.h"
#include <valarray>
using namespace vex;
using signature = vision::signature;
using code = vision::code;

void set_location(float X_value,float Y_value){
X_position=X_value;
Y_position=Y_value;


}

float compute(float error){
  float kp = 0;
  float ki = 0;
  float kd = 0;
  float accumulated_error = 0;
  float previous_error = 0;
  float output = 0;
  if (fabs(error) < 100){
    accumulated_error+=error;
  }
  if ((error>0 && previous_error<0)||(error<0 && previous_error>0)){ 
    accumulated_error = 0; 
  }
  output = kp*error + ki*accumulated_error + kd*(error-previous_error);

  previous_error=error;

  return output;
}

float get_X_position(){
  return(X_position);
}

float get_Y_position(){
  return(Y_position);
}

float reduce_negative_180_to_180(float angle) {
  while(!(angle >= -180 && angle < 180)) {
    if( angle < -180 ) { angle += 360; }
    if(angle >= 180) { angle -= 360; }
  }
  return(angle);
}

float reduce_negative_90_to_90(float angle) {
  while(!(angle >= -90 && angle < 90)) {
    if( angle < -90 ) { angle += 180; }
    if(angle >= 90) { angle -= 180; }
  }
  return(angle);
}

float to_rad(float angle_deg){
  return(angle_deg/(180.0/M_PI));
}

float to_deg(float angle_rad){
  return(angle_rad*(180.0/M_PI));
}

int sgn(double number) {

  if (number < 0)
    return -1;
  else if (number == 0)
    return 0;
  else
    return 1;
}

int setMotorPct(int Value) {
  if (Value < 0) {
    Value = -PutPct[-Value];
  } else if (Value > 0) {
    Value = PutPct[Value];
  }
  return 0;
}
int setMotorVol(int Value) {
  if (Value < 0) {
    Value = -PutVol[-Value];
  } else if (Value > 0) {
    Value = PutVol[Value];
  }
  return 0;
}



void AllMotorStop(int mode = 0) {
  if (mode == 1) {
    LeftMotor1.stop(brake);
    LeftMotor2.stop(brake);
     LeftMotor3.stop(brake);
    RightMotor1.stop(brake);
    RightMotor2.stop(brake);
      RightMotor3.stop(brake);
    intake1.stop(brake);
    // .stop(brake);
    //clip.stop(brake);
    push.stop(brake);
        // push1.stop(brake);
    updown1.stop(brake);
    catapult.stop(brake);
  }
  else {
    LeftMotor1.stop(coast);
    LeftMotor2.stop(coast);
       LeftMotor3.stop(coast);
    RightMotor1.stop(coast);
    RightMotor2.stop(coast);
        RightMotor3.stop(coast);
    intake1.stop(coast);
    //.stop(coast);
    //clip.stop(coast);
    push.stop(coast);
      //  push1.stop(coast);
    updown1.stop(coast);
      catapult.stop(coast);
    // flywheel1.stop(coast);
      //  flywheel2.stop(coast);
  }

}


void BaseMotorStop(int mode = 1) {
  if (mode == 2) {
    LeftMotor1.stop(hold);
    RightMotor1.stop(hold);    
    RightMotor3.stop(hold);
    LeftMotor2.stop(hold);
      LeftMotor3.stop(hold);
    RightMotor2.stop(hold);
  }
  else if (mode == 1) {
    LeftMotor1.stop(brake);
    RightMotor1.stop(brake);
    LeftMotor2.stop(brake);
      LeftMotor3.stop(brake);
    RightMotor2.stop(brake);
       RightMotor3.stop(brake);
  }
  else {
    LeftMotor1.stop(coast);
    RightMotor1.stop(coast);
    LeftMotor2.stop(coast);
    RightMotor2.stop(coast);
     LeftMotor3.stop(coast);
    RightMotor3.stop(coast);
  }
  
}

void FlywheelStop(int mode = 0) {
  if (mode == 2) {
    // flywheel1.stop(hold);
    // flywheel2.stop(hold);    
  }
  else if (mode == 1) {
    // flywheel1.stop(brake);
  //  flywheel2.stop(brake);
  }
  else {
    // flywheel1.stop(coast);
  //  flywheel2.stop(coast);
  }
  
}
void LeftMotorstop() {
    LeftMotor1.stop(brake);
    LeftMotor2.stop(brake);
      LeftMotor3.stop(brake);
}

void RightMotorstop() {
    RightMotor1.stop(brake);
    RightMotor2.stop(brake);
    RightMotor3.stop(brake);
}

void BaseMotorReset() { 
  LeftMotor1.resetPosition();
  RightMotor1.resetPosition();
  LeftMotor2.resetPosition();
  RightMotor2.resetPosition();
    LeftMotor3.resetPosition();
  RightMotor3.resetPosition();
  BaseMotorStop();
}

void IntakeStop(int mode = 0) {
  if (mode == 2) {
    intake1.stop(hold);
    //  intake2.stop(hold);
  }
  else if (mode == 1) {
    intake1.stop(brake);
    //  intake2.stop(brake);
  }
  else
    intake1.stop(coast);
    //  intake2.stop(coast);
}
void CatapultStop(int mode = 0) {
  if (mode == 2) {
    catapult.stop(hold);
    //  intake2.stop(hold);
  }
  else if (mode == 1) {
    catapult.stop(brake);
    //  intake2.stop(brake);
  }
  else
   catapult.stop(coast);
    //  intake2.stop(coast);
}


void IntakeReset() {
  intake1.resetPosition();
  //  intake2.resetRotation();
  IntakeStop();
}
void CatapultReset() {
  catapult.resetPosition();
  //  intake2.resetRotation();
   CatapultStop();
}
void UpDownStop(int mode = 0) {
  if (mode == 2) {
    updown1.stop(hold); 
    updown2.stop(hold); 
  }
  else if (mode ==1) {
    updown1.stop(brake); 
     updown2.stop(brake); 
  }
  else {
    updown1.stop(coast); 
    updown2.stop(coast); 
}
}

void UpDownReset() 
{
  updown1.resetPosition();
  updown2.resetPosition();
  Updownrotation.resetPosition();
  UpDownStop();
}




void AllMotorReset() {
  ClipReset();
  UpDownReset();
  PushReset();
  BaseMotorReset();
  IntakeReset();
  FlywheelReset();
}


void Left(int speedpct) {
  LeftMotor1.spin(fwd, speedpct, pct);
  LeftMotor2.spin(fwd, speedpct, pct);
    LeftMotor3.spin(fwd, speedpct, pct);
}


void Right(int speedpct) {
  RightMotor1.spin(fwd, speedpct, pct);
  RightMotor2.spin(fwd, speedpct, pct);
    RightMotor3.spin(fwd, speedpct, pct);
}

//
void LeftVol(int vol_input) {
  LeftMotor1.spin(fwd, 0.128*vol_input, voltageUnits::volt);
  LeftMotor2.spin(fwd, 0.128*vol_input, voltageUnits::volt);
  LeftMotor3.spin(fwd, 0.128*vol_input, voltageUnits::volt);
}
void UpdownVol(int vol_input) {
  updown1.spin(fwd, 0.128*vol_input, voltageUnits::volt);
  updown2.spin(fwd, 0.128*vol_input, voltageUnits::volt);
}

void Roller(int vol_input) {
   intake1.spin(fwd, 0.128*vol_input , voltageUnits::volt);
         push.spin(fwd,  0.128*vol_input, voltageUnits::volt);
}

void RightVol(int vol_input) {
  RightMotor1.spin(fwd, 0.128*vol_input, voltageUnits::volt);
  RightMotor2.spin(fwd, 0.128*vol_input, voltageUnits::volt);
 RightMotor3.spin(fwd, 0.128*vol_input, voltageUnits::volt);
}
void  CatapultVol(int vol_input) {
  // catapult.spin(fwd, vol_input, pct);
   catapult.spin(fwd, 0.128*vol_input, voltageUnits::volt);
}


void FlywheelVolAuto(int flywheelpct, int outtime) {
  FlywheelVol(flywheelpct);
  wait(outtime);
  FlywheelStop();
}

void FlywheelVelAuto(int flywheelpct, int outtime) {
  FlywheelVel(flywheelpct);
  wait(outtime);
  FlywheelStop();
}



void RunVol(int basepct) {
   LeftVol(basepct);
   RightVol(basepct);
}

void TurnVol(int turnpct) {
    LeftVol(turnpct);
    RightVol(-turnpct);
}


void RunVolAuto(int basepct, int outtime) {
  RunVol(basepct);
  wait(outtime);
  BaseMotorStop();
}

void CatapultAuto(int basepct, int outtime) {
 CatapultVol(basepct);
  wait(outtime);
  CatapultStop(0);
}

void TurnVolAuto(int basepct, int outtime) {
  TurnVol(basepct);
  wait(outtime);
  BaseMotorStop();
}

//直走新程序,单陀螺仪


//新陀螺仪的pid转弯,直到
void TurnVolpidNTo(int max_speed, double aim, double howerr, int outtime,int p_point) {
   double returnangle = Inertial1.rotation(degrees);
  double Kp = 2.2;
  double Ki = 0.006;
  double Kd = 15;
  switch (p_point) 
{
    case 0: break;
    case 1:Kp = 1.65;Ki = 0;Kd =8;break; //TurnVolpidNTo(70,90,1,1500,1);(90-115)
    case 2:Kp = 1.9;Ki = 0;Kd =7;break; //TurnVolpidNTo(70,44,1,1500,2);(45)
    case 3:Kp = 1.6;Ki = 0;Kd =7;break;//TurnVolpidNTo(70,65,2,1500,3);(65)
    case 4:Kp = 2.2;Ki = 0;Kd =9;break;//TurnVolpidNTo(70,25,1,1500,4);(25)
    case 5:Kp = 1.3;Ki = 0;Kd =8;break; //TurnVolpidNTo(70,80,1,1500,5);(75)
    case 6:Kp = 1.58;Ki = 0;Kd =6.5;break; //TurnVolpidNTo(70,85,1,1500,6);(85)
    case 7:Kp = 1.29;Ki = 0;Kd =7;break; //TurnVolpidNTo(80,74,2,1500,7);(70)
    case 8:Kp = 2.1;Ki = 0;Kd =8;break;//TurnVolpidNTo(70,35,1,1500,8);(35)
    case 9:Kp = 1.53;Ki = 0;Kd =8;break; //TurnVolpidNTo(70,90,1,1500,9);(160)
     case 10:Kp = 1.53;Ki = 0;Kd =8;break; //TurnVolpidNTo(70,90,1,1500,10);(180+)
     case 11:Kp = 1.59;Ki = 0;Kd =7;break;//TurnVolpidNTo(70,65,2,1500,11);(65)
     case 12:Kp = 4;Ki = 0;Kd =8;break;//TurnVolpidNTo(70,15,1,1500,12);
     case 13:Kp = 4.5;Ki = 0;Kd =8;break;//TurnVolpidNTo(70,8,1,1500,13);
        case 14:Kp = 2.1;Ki = 0;Kd =7;break;//TurnVolpidNTo(70,35,1,1500,14);(35)
        case 15:Kp = 2.5;Ki = 0;Kd =8;break;//TurnVolpidNTo(70,20,1,1500,15);(25)
        case 16:Kp = 1.48;Ki = 0;Kd =7.5;break; //TurnVolpidNTo(70,75,1,1500,16);(75)
        case 17:Kp = 1.9;Ki = 0;Kd =7;break; //TurnVolpidNTo(70,75,1,1500,17);(75)
         case 18:Kp = 2.3;Ki = 0;Kd =7;break;//TurnVolpidNTo(70,35,1,1500,18);(35)
          case 19:Kp = 4.05;Ki = 0;Kd =8;break;//TurnVolpidNTo(70,15,1,1500,12);
          case 20:Kp =5.5;Ki = 0;Kd =8;break;//TurnVolpidNTo(70,8,1,1500,20);
          ///////////////////////342 4.125 6M////////////////////////////
          case 21:Kp = 1.58;Ki = 0;Kd =8;break; //TurnVolpidNTo(70,90,1,1500,21);(90-115)
           case 22:Kp = 1.68;Ki = 0;Kd =8;break; //TurnVolpidNTo(70,170,1,1500,22);(180+)
           case 23:Kp = 1.6;Ki = 0;Kd =9;break; //TurnVolpidNTo(70,90,1,1500,21);(90-115)
           case 24:Kp = 1.68;Ki = 0;Kd =8;break; //TurnVolpidNTo(70,170,1,1500,22);(180+)
           case 25:Kp = 1.48;Ki = 0;Kd =7.5;break; //TurnVolpidNTo(70,75,1,1500,25);(75)
           case 26:Kp = 1.4;Ki = 0;Kd =10;break; //TurnVolpidNTo(70,75,1,1500,25);(75)
           case 27:Kp = 1.42;Ki = 0;Kd =11;break; //TurnVolpidNTo(70,75,1,1500,25);(75)

           case 28:Kp = 2.5;Ki = 0.005;Kd =21;break; //TurnVolpidNTo(100,120,0.3,700,28);(120)
           case 29:Kp = 2.5;Ki = 0.005;Kd =21;break; //TurnVolpidNTo(100,100,0.3,700,29);(100)
           case 30:Kp = 2.8;Ki = 0.005;Kd =21;break; //TurnVolpidNTo(100,80,0.3,700,30);(80)
           case 31:Kp = 3;Ki = 0.005;Kd =21;break; //TurnVolpidNTo(100,60,0.3,700,31);(60)
           case 32:Kp = 3.2;Ki = 0.005;Kd =21;break; //TurnVolpidNTo(100,40,0.3,700,32);(40)
           case 33:Kp = 3.6;Ki = 0.005;Kd =21;break; //TurnVolpidNTo(100,20,0.3,700,33);(20)

    default:Kp = 2.47;Ki = 0.005;Kd =21;
 }
  double err_now = 0;
  double err_last = 0;
  double value_now = 0;
  double EI = 0, ED = 0;
  double output;
  int sampletime = 10;
  T1.clear();
  T4.clear();
  value_now = returnangle;
  err_now = calculateAngleError(aim , value_now);
  Brain.Screen.drawRectangle(1, 1, 400, 400, vex::color::red);
  while (1) {
    double returnangle = Inertial1.rotation(degrees);
    value_now = returnangle;
    err_now = calculateAngleError(aim , value_now);
    EI = EI + err_now;
    printf("%.2f\n", value_now);
    if (fabs(err_now) > 15)
      EI = 0;
    ED = err_now - err_last;
    output = Kp * err_now + Ki * EI + Kd * ED;
    if (fabs(output) > max_speed)
      output = sgn(output) * max_speed;
    TurnVol(output);
    err_last = err_now;
    sleep(sampletime);
     if (fabs(err_now) < howerr|| T4.time() >= outtime){
      // T1.clear();
     LeftMotor1.stop(vex::brakeType::coast);
       RightMotor1.stop(vex::brakeType::coast);
       LeftMotor2.stop(vex::brakeType::coast);
       RightMotor2.stop(vex::brakeType::coast);
      LeftMotor3.stop(vex::brakeType::coast);
      RightMotor3.stop(vex::brakeType::coast);
      break;
  }
  }
  //   if (T1.time() > 25 || T4.time() >= outtime) {
  //     LeftMotor1.stop(vex::brakeType::coast);
  //      RightMotor1.stop(vex::brakeType::coast);
  //      LeftMotor2.stop(vex::brakeType::coast);
  //      RightMotor2.stop(vex::brakeType::coast);
  //     LeftMotor3.stop(vex::brakeType::coast);
  //     RightMotor3.stop(vex::brakeType::coast);
  //     break;
  //   }
  // }
  Brain.Screen.drawRectangle(1, 1, 400, 400, vex::color::blue);
 
}


//单边旋转，参数:速度,距离,慢轮比例,左右边1左转-1左转，kp单边2.4，双边0.7,误差,左轮开关,右轮开关,保护时间
void TurnVolpidSingle(int max_speed, double aim, double B,bool side,double Kp, int error,
                   int switch_left, int switch_right,int outtime) {
  double err = 0;
  double speed = 0;
  double value_now = returnangle;
  // double acc = 1;
  TACC.clear();
  T2.clear();
  double chushizhi = Inertial1.rotation(degrees);
  while (1) {
    double returnangle = Inertial1.rotation(degrees);
    value_now = returnangle-chushizhi;
    err = (aim - value_now);
    speed = Kp * (aim - value_now);
    speed = (fabs(speed) > 3) ? speed : sgn(speed) * 3;
    if (fabs(speed) > max_speed) {
      speed = sgn(speed) * max_speed;
    }
    if (TACC.time() <= 500){
      speed = max_speed;
    }
    if(side==1){
      LeftVol( -switch_left * speed);
      RightVol(-switch_right * speed*B);
    }
    else
    {
     LeftVol( -switch_left *speed*B);
      RightVol(-switch_right * speed);
    }
    if (fabs(err) >= error) {
      T1.clear();
    }
    if (T1.time() > 25 || T2.time()>=outtime) {
      break;
    }
    sleep(10);
  }
  BaseMotorStop(1);
  Brain.Screen.drawRectangle(1, 1, 400, 400, vex::color::purple);
}


void Run(int basepct) {
  LeftMotor1.spin(fwd, basepct, pct);
  LeftMotor2.spin(fwd, basepct, pct);
    LeftMotor3.spin(fwd, basepct, pct);
  RightMotor1.spin(fwd, basepct, pct);
  RightMotor2.spin(fwd, basepct, pct); 
   RightMotor3.spin(fwd, basepct, pct);
}


void Turn(int turnpct) {
  LeftMotor1.spin(fwd, turnpct, pct);
  RightMotor2.spin(fwd, -turnpct, pct);
    RightMotor3.spin(fwd, -turnpct, pct);
  LeftMotor2.spin(fwd, turnpct, pct);
    LeftMotor3.spin(fwd, turnpct, pct);
  RightMotor1.spin(fwd, -turnpct, pct);
}


void IntakeVol(int vol_input) {
  intake1.spin(fwd, 0.128*vol_input, voltageUnits::volt);
  intake2.spin(fwd, 0.128*vol_input, voltageUnits::volt);
}

void Intake(int getpct) {
  intake1.spin(fwd, getpct, pct);
  // intake2.spin(fwd, getpct, pct);
}


void UpDown(int uppct) { 
  updown1.spin(fwd, uppct, pct);
  updown2.spin(fwd, uppct, pct);
   }

void Push(int pushpct) {
   push.spin(fwd, pushpct, pct); 
    // push1.spin(fwd, pushpct, pct); 
   }

void PushVol(int vol_input) { 
  push.spin(fwd, 0.128*vol_input, voltageUnits::volt); 
  //  push1.spin(fwd, 0.128*vol_input, voltageUnits::volt);
  }

// void Clip(int clippct) { clip.spin(fwd, clippct, pct); }

// void Flywheel(int flywheelpct) { flywheel1.spin(fwd, flywheelpct, pct); flywheel2.spin(fwd, flywheelpct, pct);}

void wait(int waittime) { sleep(waittime); }



void RunAuto(int basepct, int outtime) {
  Run(basepct);
  wait(outtime);
  BaseMotorStop();
}
void RunAuto2(int basepct,int   basepct2, int outtime,int Ipec1,int Ipec2) {
  int i=0;
  Left(basepct2);
   Right(basepct);
   wait(50);
 for(double oi =0; oi <=outtime;oi=oi+200 )
 {
   Intake(Ipec1);
   Left(basepct);
   Right(basepct2);
   wait(100);
   BaseMotorStop(0);

    Left(basepct2);
   Right(basepct);
   wait(100);
   BaseMotorStop(0);
   Run(10);
   if(i%10==0){
      Intake(Ipec2);
      wait(50);
   }
i=i+1;

 }
  
  //Run(basepct);
  // wait(outtime);
  // BaseMotorStop();
}


void TurnAuto(int basepct, int outtime) {
  Turn(basepct);
  wait(outtime);
  BaseMotorStop();
}

void IntakeAuto(int getpct, int outtime) {
  Intake(getpct);
  wait(outtime);
  IntakeStop();
}

void UpDownAuto(int uppct, int outtime) {
  UpDown(uppct);
  wait(outtime);
  UpDownStop();
}



void FlywheelAuto(int flywheelpct, int flywheeltime) {
 Flywheel(flywheelpct);
  wait(flywheeltime);
  FlywheelStop();       
}

void UpDownAutobrake(int uppct, int outtime) {
  UpDown(uppct);
  wait(outtime);
  UpDownStop(1);
}



void UpDownencodeN(int pct, int degree,int outtime, int p_point)
{
//PID参数
double Kp = 3;
double Kd = 10;

switch (p_point) 
{
    case 0: break;
    ////////////////////////////////400 3.25 6M////////////////////////////////////////
    case 1:Kp = 2;Kd =9;break; //RunpidStraightNTo(100,2970,20,10,400,0,0,1800,0,1);(3050)
   case 2:Kp = 3;Kd =10;break;//RunpidStraightNTo(45,800,10,15,150,0,0,1800,0,2);
   case 3:Kp = 2;Kd =8;break;
   case 4:Kp = 5;Kd =8;break;
             
    default:Kp = 0.1;Kd =0;
 }

//其他参数
double err_now = degree - Updownrotation.position(degrees);
double err_last = err_now;
double output = 0;

//计时器清零
T4.clear();

while(1){

//计算输出
err_now = degree - Updownrotation.position(degrees);
output = Kp * err_now + Kd * (err_now - err_last);

if(fabs(output)>=pct){
output = sgn(output) * pct;
}

UpdownVol(output);

//调试输出
printf("%.2f\n", Updownrotation.position(degrees));

sleep(10);

err_last = err_now;

if(T4.time()>=outtime || err_now==0){
UpDownStop(1);
break;
}
}
}


void TurnVolpidN(int max_speed, double aim, double howerr, int outtime,int p_point) {
  //Inertial1.resetRotation();
  double Kp = 2;
  double Ki =0.001;
  double Kd = 0.5;
  switch (p_point) 
{
    case 0: break;
    case 1:Kp = 1.5;Ki = 0;Kd =0.5;break; 
    case 2:Kp = 1.2;Ki = 0;Kd =0.5;break; 
    case 3:Kp = 1;Ki = 0;Kd =0.5;break;
    case 4:Kp = 1.1;Ki = 0;Kd =0.5;break;
    case 5:Kp = 1.7;Ki = 0;Kd =0.5;break; 
    case 6:Kp = 1.5;Ki = 0;Kd =0.5;break; 
    default:Kp = 2.2;Ki = 0.006;Kd =15;
 }
  double err_now = 0;
  double err_last = 0;
  double value_now = 0;
  double EI = 0, ED = 0;
  double output;
  int sampletime = 10;
  T1.clear();
  T4.clear();
  value_now = return_angle;
  err_now = aim - value_now;

  if (fabs(err_now) <= 1000) {
    Kp =2;   // 0.774//0.805//0.95
    Ki = 0; // 0.073//0.0057//0.0025//0.01
    Kd =0.5;
  }
  double chushizhi = Inertial1.rotation(degrees);
  Brain.Screen.drawRectangle(1, 1, 400, 400, vex::color::red);
  while (1) {
    double returnangle = Inertial1.rotation(degrees);
    value_now = returnangle-chushizhi;
    err_now = aim - value_now;
    EI = EI + err_now;
    if (fabs(err_now) > 10) EI = 0;
    ED = err_now - err_last;
    output = Kp * err_now + Ki * EI + Kd * ED;
    if (fabs(output) > max_speed)  output = sgn(output) * max_speed;
    TurnVol(output);
    err_last = err_now;
    sleep(sampletime);
    if (fabs(err_now) > howerr)  T1.clear();
    if (T1.time() >25 || T4.time() >= outtime) 
    {
      BaseMotorStop(1);
      break;
    }
  }
  Brain.Screen.drawRectangle(1, 1, 400, 400, vex::color::blue);
  LeftMotor1.stop(vex::brakeType::brake);
  RightMotor1.stop(vex::brakeType::brake);
  LeftMotor2.stop(vex::brakeType::brake);
  RightMotor2.stop(vex::brakeType::brake);
    LeftMotor3.stop(vex::brakeType::brake);
  RightMotor3.stop(vex::brakeType::brake);
}


void RunpidStraightNTo(double speed_limit, int aim,double err_1,double speed_limit2, int dec_point, int change_steps,int start_point,int outtime, double newgyro, int p_point)
{
 // Inertial1.resetRotation();
  double Kp = 0.22;  // 0.39
  double Ki = 0; // 0.001
  double Kd = 0.245; // 0.173
 switch (p_point) 
{
    case 0: break;
    ////////////////////////////////400 3.25 6M////////////////////////////////////////
    case 1:Kp = 0.15;Ki = 0;Kd =0.17;break; //RunpidStraightNTo(100,2970,20,10,400,0,0,1800,0,1);(3050)
   case 2:Kp = 0.16;Ki = 0;Kd =0.1;break;//RunpidStraightNTo(45,800,10,15,150,0,0,1800,0,2);
    case 3:Kp = 0.148;Ki = 0;Kd =0.11;break; //RunpidStraightNTo(65,1200,12,45,1000,0,0,1800,0,3);
    case 4:Kp = 0.09;Ki = 0;Kd =0.15;break;//RunpidStraightNTo(20,200,6,5,20,0,0,1800,0,4);
    case 5:Kp = 0.19;Ki = 0;Kd =0.3;break; //RunpidStraightNTo(30,500,10,10,100,0,0,1800,0,5);
    case 6:Kp = 0.18;Ki = 0;Kd =0.23;break; //RunpidStraightNTo(95,2970,20,10,100,0,0,1800,0,6);
    case 7:Kp = 0.14;Ki = 0;Kd =0.048;break; //RunpidStraightNTo(80,1800,10,65,1000,0,0,1000,0,7);
    case 8:Kp = 0.121;Ki = 0;Kd =0.17;break; //RunpidStraightNTo(60,800,10,10,120,0,0,1800,0,8);
     case 9:Kp = 0.16;Ki = 0;Kd =0.1;break;//RunpidStraightNTo(60,900,10,15,150,0,0,1800,0,9);
     case 10:Kp = 0.16;Ki = 0;Kd =0.23;break; //RunpidStraightNTo(60,1000,20,6,60,0,0,1800,0,10);
      case 11:Kp = 0.11;Ki = 0;Kd =0.18;break;//RunpidStraightNTo(30,300,10,0,0,0,0,1800,0,11);
      case 12:Kp = 0.11;Ki = 0;Kd =0.12;break; //RunpidStraightNTo(60,800,10,10,120,0,0,1800,0,12);
      //////////////////////////////////257 4.125 4M/////////////////////////////////////////
       case 13:Kp = 0.16;Ki = 0;Kd =0.17;break;//RunpidStraightNTo(45,800,10,15,150,0,0,1800,0,13);
       case 14:Kp = 0.141;Ki = 0;Kd =0.07;break; //RunpidStraightNTo(79,1600,15,78,1100,0,0,1500,0,14);
        case 15:Kp = 0.1198;Ki = 0;Kd =0.02;break; //RunpidStraightNTo(95,2970,20,10,100,0,0,1800,0,15);
        case 16:Kp = 0.11;Ki = 0;Kd =0.17;break; //RunpidStraightNTo(50,800,10,10,120,0,0,1800,0,16);
         case 17:Kp = 0.18;Ki = 0;Kd =0.3;break; //RunpidStraightNTo(30,500,10,10,100,0,0,1800,0,17);
          case 18:Kp = 0.15;Ki = 0;Kd =0.05;break; //RunpidStraightNTo(75,1250,12,25,200,0,0,1800,0,18);
          case 19:Kp = 0.23;Ki = 0;Kd =0.28;break; //RunpidStraightNTo(95,2600,20,10,100,0,0,1800,0,19);
          case 20:Kp = 0.13;Ki = 0;Kd =0.15;break; //RunpidStraightNTo(100,3000,20,56,2000,0,0,5000,0,20);
          case 21:Kp = 0.1355;Ki = 0;Kd =0.01;break; //RunpidStraightNTo(100,2770,20,70,1970,0,0,4000,0,21);
          case 22:Kp = 0.1357;Ki = 0;Kd =0.03;break; // RunpidStraightNTo(79,1700,15,78,1100,0,0,1500,0,22);
          case 23:Kp = 0.13;Ki = 0;Kd =0.065;break; // RunpidStraightNTo(79,1700,15,78,1100,0,0,1500,0,23);
          case 24:Kp = 0.111;Ki = 0;Kd =0.1;break; //RunpidStraightNTo(100,2770,20,70,1970,0,0,4000,0,24);
           case 25:Kp = 0.13;Ki = 0;Kd =0.06;break; //RunpidStraightNTo(100,2770,20,70,1970,0,0,4000,0,25);
            case 26:Kp = 0.09;Ki = 0;Kd =0.02;break; //RunpidStraightNTo(100,2770,20,70,1970,0,0,4000,0,26);
            case 27:Kp = 0.141;Ki = 0;Kd =0.03;break; // RunpidStraightNTo(79,1700,15,78,1100,0,0,1500,0,27);
             case 28:Kp = 0.109;Ki = 0;Kd =0.001;break; //RunpidStraightNTo(100,2770,20,70,1970,0,0,4000,0,28);
                case 29:Kp = 0.13;Ki = 0;Kd =0.04;break; //RunpidStraightNTo(80,1800,10,65,1000,0,0,1000,0,29);
                    case 30:Kp = 0.121;Ki = 0;Kd =0.03;break; //RunpidStraightNTo(79,1600,15,78,1100,0,0,1500,0,30);
                     case 31:Kp = 0.137;Ki = 0;Kd =0.15;break; //RunpidStraightNTo(100,3000,20,56,2000,0,0,5000,0,20);
                    ///////////////////////////////////////////342 4.125 6M//////////////////////////////////////////////////
                     case 32:Kp = 0.13;Ki = 0;Kd =0.03;break; //RunpidStraightNTo(80,1800,10,65,1000,0,0,1000,0,32);
                      case 33:Kp = 0.08;Ki = 0;Kd =0.3;break; //RunpidStraightNTo(60,800,10,10,120,0,0,1800,0,33);
                      case 34:Kp = 0.17;Ki = 0;Kd =0.23;break; //RunpidStraightNTo(80,1800,10,65,1000,0,0,1000,0,34);
                       case 35:Kp = 0.11;Ki = 0;Kd =0.09;break;//RunpidStraightNTo(45,800,10,15,150,0,0,1800,0,2);
                       case 36:Kp = 0.17;Ki = 0;Kd =0.23;break; //RunpidStraightNTo(60,1000,20,6,60,0,0,1800,0,36);
                        case 37:Kp = 0.115;Ki = 0;Kd =0.09;break; //RunpidStraightNTo(60,800,10,10,120,0,0,1800,0,37);
                        case 38:Kp = 0.132;Ki = 0;Kd =0.01;break; //RunpidStraightNTo(80,1800,10,65,1000,0,0,1000,0,38);
                        case 39:Kp = 0.05;Ki = 0;Kd =0.23;break; //RunpidStraightNTo(60,1000,20,6,60,0,0,1800,0,36);
             
    default:Kp = 0.1;Ki = 0;Kd =0;
 }
  double value_now = 0;
  double EI = 0, ED = 0;
  int sampletime = 10;
  double err_now = err_1+1;
  double err_last = 0;
  double max_v = speed_limit;
  double Kt = 0;
  double Ktv = 0;
  double value_now_L = 0;
  double value_last_L = 0;
  double value_now_R = 0;
  double value_last_R = 0;
  double outputL, outputR;
  double ET = 0;
  double ETV = 0;
  double sum_dec = 0;
  double K_gyro = 0.7;
  double angle_err = 0;
  double acc = 0.2;
  LeftMotor1.resetPosition();
  RightMotor1.resetPosition();
  T1.clear();
  T2.clear();
  T3.clear();
  T4.clear();
  TACC.clear();
   // double chushizhi = Inertial1.rotation(degrees);
  while (1) {
     printf("%.2f\n", LeftMotor1.velocity(pct));
    double returnangle = return_angle;
    max_v = acc * TACC.time();
    if (TACC.time() > 500)
      max_v = speed_limit;
    if (max_v >= speed_limit) {
      max_v = speed_limit;
    }
    if (dec_point != -1) {
      if (fabs(LeftMotor1.position(vex::rotationUnits::deg)) > dec_point) {
        max_v =
            speed_limit -
            (fabs(LeftMotor1.position(vex::rotationUnits::deg)) - dec_point) /
                50.0;
        if (max_v < speed_limit2) {
          max_v = speed_limit2;
        }
      }
    }
    if (change_steps != -1) {
      if (start_point <= fabs(value_now_L)) {
        steps = change_steps;
        change_steps = -1;
      }
    }
    value_now = LeftMotor1.position(vex::rotationUnits::deg);
    if (T2.time() > 100) {
      T2.clear();
      value_last_R = value_now_R;
      value_last_L = value_now_L;
      value_now_R = RightMotor1.position(vex::rotationUnits::deg);
      value_now_L = LeftMotor1.position(vex::rotationUnits::deg);
      ETV = (value_now_R - value_last_R) - (value_now_L - value_last_L);
      ET = value_now_R - value_now_L;
      sum_dec += Ktv * ETV;
    }
    if (T3.time() > sampletime) {
      T3.clear();
      EI = EI + err_now;
      err_last = err_now;
      err_now = aim - value_now;
      ED = err_now - err_last;
    }
    if (fabs(err_now) > 100)
      EI = 0;
    outputL = Kp * err_now + Ki * EI + Kd * ED;
    // outputR = Kp * err_now + Ki * EI + Kd * ED;
    if (fabs(outputL) > max_v)
      outputL = sgn(outputL) * max_v;
      // if (fabs(outputR) > max_v)
      // outputR = sgn(outputR) * max_v;
    angle_err = calculateAngleError(newgyro , returnangle);
    if (fabs(angle_err) < 1)   angle_err = 0;
    // if(angle_err>0)
    outputR = outputL - Kt * ET - Ktv * ETV - K_gyro * (angle_err);
    // else if(angle_err<0)
    // outputL = outputR - Kt * ET - Ktv * ETV - K_gyro * (angle_err);
    if (outputL == 0)
      outputR = 0;
       if(outputL>max_v){
      outputL=max_v;
    }
    if(outputR>max_v){
      outputR=max_v;
    }
    LeftMotor1.spin(vex::directionType::fwd, outputL, vex::velocityUnits::pct);
    RightMotor1.spin(vex::directionType::fwd, outputR, vex::velocityUnits::pct);
    LeftMotor2.spin(vex::directionType::fwd, outputL, vex::velocityUnits::pct);
    RightMotor2.spin(vex::directionType::fwd, outputR, vex::velocityUnits::pct);
    LeftMotor3.spin(vex::directionType::fwd, outputL, vex::velocityUnits::pct);
    RightMotor3.spin(vex::directionType::fwd, outputR, vex::velocityUnits::pct);
    sleep(sampletime);
        if (fabs(err_now) < err_1|| T4.time() >= outtime){
      // T1.clear();
        LeftMotor1.stop(vex::brakeType::coast);
       RightMotor1.stop(vex::brakeType::coast);
       LeftMotor2.stop(vex::brakeType::coast);
       RightMotor2.stop(vex::brakeType::coast);
      LeftMotor3.stop(vex::brakeType::coast);
      RightMotor3.stop(vex::brakeType::coast);
      break;
  }
    // if ((T1.time()) > 25 || T4.time() >= outtime) {
    //    LeftMotor1.stop(vex::brakeType::coast);
    //    RightMotor1.stop(vex::brakeType::coast);
    //    LeftMotor2.stop(vex::brakeType::coast);
    //    RightMotor2.stop(vex::brakeType::coast);
    //   LeftMotor3.stop(vex::brakeType::coast);
    //   RightMotor3.stop(vex::brakeType::coast);
    //   break;
    // }
    
  }
  BaseMotorStop(1);
}

void RunpidStraightN(double speed_limit, int aim,double err_1,double speed_limit2, int dec_point, int change_steps,int start_point,int outtime, double newgyro, int p_point)
{
 // Inertial1.resetRotation();
  double Kp = 0.22;  // 0.39
  double Ki = 0; // 0.001
  double Kd = 0.245; // 0.173
 switch (p_point) 
{
    case 0: break;
    ////////////////////////////////400 3.25 6M////////////////////////////////////////
    case 1:Kp = 0.15;Ki = 0;Kd =0.17;break; //RunpidStraightNTo(100,2970,20,10,400,0,0,1800,0,1);(3050)
   case 2:Kp = 0.16;Ki = 0;Kd =0.1;break;//RunpidStraightNTo(45,800,10,15,150,0,0,1800,0,2);
    case 3:Kp = 0.148;Ki = 0;Kd =0.11;break; //RunpidStraightNTo(65,1200,12,45,1000,0,0,1800,0,3);
    case 4:Kp = 0.09;Ki = 0;Kd =0.15;break;//RunpidStraightNTo(20,200,6,5,20,0,0,1800,0,4);
    case 5:Kp = 0.19;Ki = 0;Kd =0.3;break; //RunpidStraightNTo(30,500,10,10,100,0,0,1800,0,5);
    case 6:Kp = 0.18;Ki = 0;Kd =0.23;break; //RunpidStraightNTo(95,2970,20,10,100,0,0,1800,0,6);
    case 7:Kp = 0.14;Ki = 0;Kd =0.048;break; //RunpidStraightNTo(80,1800,10,65,1000,0,0,1000,0,7);
    case 8:Kp = 0.121;Ki = 0;Kd =0.17;break; //RunpidStraightNTo(60,800,10,10,120,0,0,1800,0,8);
     case 9:Kp = 0.16;Ki = 0;Kd =0.1;break;//RunpidStraightNTo(60,900,10,15,150,0,0,1800,0,9);
     case 10:Kp = 0.16;Ki = 0;Kd =0.23;break; //RunpidStraightNTo(60,1000,20,6,60,0,0,1800,0,10);
      case 11:Kp = 0.11;Ki = 0;Kd =0.18;break;//RunpidStraightNTo(30,300,10,0,0,0,0,1800,0,11);
      case 12:Kp = 0.11;Ki = 0;Kd =0.12;break; //RunpidStraightNTo(60,800,10,10,120,0,0,1800,0,12);
      //////////////////////////////////257 4.125 4M/////////////////////////////////////////
       case 13:Kp = 0.16;Ki = 0;Kd =0.17;break;//RunpidStraightNTo(45,800,10,15,150,0,0,1800,0,13);
       case 14:Kp = 0.141;Ki = 0;Kd =0.07;break; //RunpidStraightNTo(79,1600,15,78,1100,0,0,1500,0,14);
        case 15:Kp = 0.1198;Ki = 0;Kd =0.02;break; //RunpidStraightNTo(95,2970,20,10,100,0,0,1800,0,15);
        case 16:Kp = 0.11;Ki = 0;Kd =0.17;break; //RunpidStraightNTo(50,800,10,10,120,0,0,1800,0,16);
         case 17:Kp = 0.18;Ki = 0;Kd =0.3;break; //RunpidStraightNTo(30,500,10,10,100,0,0,1800,0,17);
          case 18:Kp = 0.15;Ki = 0;Kd =0.05;break; //RunpidStraightNTo(75,1250,12,25,200,0,0,1800,0,18);
          case 19:Kp = 0.23;Ki = 0;Kd =0.28;break; //RunpidStraightNTo(95,2600,20,10,100,0,0,1800,0,19);
          case 20:Kp = 0.13;Ki = 0;Kd =0.15;break; //RunpidStraightNTo(100,3000,20,56,2000,0,0,5000,0,20);
          case 21:Kp = 0.1355;Ki = 0;Kd =0.01;break; //RunpidStraightNTo(100,2770,20,70,1970,0,0,4000,0,21);
          case 22:Kp = 0.1357;Ki = 0;Kd =0.03;break; // RunpidStraightNTo(79,1700,15,78,1100,0,0,1500,0,22);
          case 23:Kp = 0.13;Ki = 0;Kd =0.065;break; // RunpidStraightNTo(79,1700,15,78,1100,0,0,1500,0,23);
          case 24:Kp = 0.111;Ki = 0;Kd =0.1;break; //RunpidStraightNTo(100,2770,20,70,1970,0,0,4000,0,24);
           case 25:Kp = 0.13;Ki = 0;Kd =0.06;break; //RunpidStraightNTo(100,2770,20,70,1970,0,0,4000,0,25);
            case 26:Kp = 0.09;Ki = 0;Kd =0.02;break; //RunpidStraightNTo(100,2770,20,70,1970,0,0,4000,0,26);
            case 27:Kp = 0.141;Ki = 0;Kd =0.03;break; // RunpidStraightNTo(79,1700,15,78,1100,0,0,1500,0,27);
             case 28:Kp = 0.109;Ki = 0;Kd =0.001;break; //RunpidStraightNTo(100,2770,20,70,1970,0,0,4000,0,28);
                case 29:Kp = 0.13;Ki = 0;Kd =0.04;break; //RunpidStraightNTo(80,1800,10,65,1000,0,0,1000,0,29);
                    case 30:Kp = 0.121;Ki = 0;Kd =0.03;break; //RunpidStraightNTo(79,1600,15,78,1100,0,0,1500,0,30);
                     case 31:Kp = 0.137;Ki = 0;Kd =0.15;break; //RunpidStraightNTo(100,3000,20,56,2000,0,0,5000,0,20);
                    ///////////////////////////////////////////342 4.125 6M//////////////////////////////////////////////////
                     case 32:Kp = 0.13;Ki = 0;Kd =0.03;break; //RunpidStraightNTo(80,1800,10,65,1000,0,0,1000,0,32);
                      case 33:Kp = 0.08;Ki = 0;Kd =0.3;break; //RunpidStraightNTo(60,800,10,10,120,0,0,1800,0,33);
                      case 34:Kp = 0.17;Ki = 0;Kd =0.23;break; //RunpidStraightNTo(80,1800,10,65,1000,0,0,1000,0,34);
                       case 35:Kp = 0.11;Ki = 0;Kd =0.09;break;//RunpidStraightNTo(45,800,10,15,150,0,0,1800,0,2);
                       case 36:Kp = 0.17;Ki = 0;Kd =0.23;break; //RunpidStraightNTo(60,1000,20,6,60,0,0,1800,0,36);
                        case 37:Kp = 0.115;Ki = 0;Kd =0.09;break; //RunpidStraightNTo(60,800,10,10,120,0,0,1800,0,37);
                        case 38:Kp = 0.132;Ki = 0;Kd =0.01;break; //RunpidStraightNTo(80,1800,10,65,1000,0,0,1000,0,38);
                        case 39:Kp = 0.05;Ki = 0;Kd =0.23;break; //RunpidStraightNTo(60,1000,20,6,60,0,0,1800,0,36);
                        case 40:Kp = 0.07;Ki = 0;Kd =0.3;break; //RunpidStraightNTo(80,1800,10,65,1000,0,0,1000,0,32);
             
    default:Kp = 0.1;Ki = 0;Kd =0;
 }
  double value_now = 0;
  double EI = 0, ED = 0;
  int sampletime = 10;
  double err_now = err_1+1;
  double err_last = 0;
  double max_v = speed_limit;
  double Kt = 0;
  double Ktv = 0;
  double value_now_L = 0;
  double value_last_L = 0;
  double value_now_R = 0;
  double value_last_R = 0;
  double outputL, outputR;
  double ET = 0;
  double ETV = 0;
  double sum_dec = 0;
  double K_gyro = 0.7;
  double angle_err = 0;
  double acc = 0.2;
  LeftMotor1.resetPosition();
  RightMotor1.resetPosition();
  T1.clear();
  T2.clear();
  T3.clear();
  T4.clear();
  TACC.clear();
   // double chushizhi = Inertial1.rotation(degrees);
  while (1) {
     printf("%.2f\n", LeftMotor1.velocity(pct));
    double returnangle = return_angle;
    max_v = acc * TACC.time();
    if (TACC.time() > 500)
      max_v = speed_limit;
    if (max_v >= speed_limit) {
      max_v = speed_limit;
    }
    if (dec_point != -1) {
      if (fabs(LeftMotor1.position(vex::rotationUnits::deg)) > dec_point) {
        max_v =
            speed_limit -
            (fabs(LeftMotor1.position(vex::rotationUnits::deg)) - dec_point) /
                50.0;
        if (max_v < speed_limit2) {
          max_v = speed_limit2;
        }
      }
    }
    if (change_steps != -1) {
      if (start_point <= fabs(value_now_L)) {
        steps = change_steps;
        change_steps = -1;
      }
    }
    value_now = LeftMotor1.position(vex::rotationUnits::deg);
    if (T2.time() > 100) {
      T2.clear();
      value_last_R = value_now_R;
      value_last_L = value_now_L;
      value_now_R = RightMotor1.position(vex::rotationUnits::deg);
      value_now_L = LeftMotor1.position(vex::rotationUnits::deg);
      ETV = (value_now_R - value_last_R) - (value_now_L - value_last_L);
      ET = value_now_R - value_now_L;
      sum_dec += Ktv * ETV;
    }
    if (T3.time() > sampletime) {
      T3.clear();
      EI = EI + err_now;
      err_last = err_now;
      err_now = aim - value_now;
      ED = err_now - err_last;
    }
    if (fabs(err_now) > 100)
      EI = 0;
    outputL = Kp * err_now + Ki * EI + Kd * ED;
    // outputR = Kp * err_now + Ki * EI + Kd * ED;
    if (fabs(outputL) > max_v)
      outputL = sgn(outputL) * max_v;
      // if (fabs(outputR) > max_v)
      // outputR = sgn(outputR) * max_v;
    angle_err = newgyro ;
    if (fabs(angle_err) < 1)   angle_err = 0;
    // if(angle_err>0)
    outputR = outputL - Kt * ET - Ktv * ETV - K_gyro * (angle_err);
    // else if(angle_err<0)
    // outputL = outputR - Kt * ET - Ktv * ETV - K_gyro * (angle_err);
    if (outputL == 0)
      outputR = 0;
       if(outputL>max_v){
      outputL=max_v;
    }
    if(outputR>max_v){
      outputR=max_v;
    }
    LeftMotor1.spin(vex::directionType::fwd, outputL, vex::velocityUnits::pct);
    RightMotor1.spin(vex::directionType::fwd, outputR, vex::velocityUnits::pct);
    LeftMotor2.spin(vex::directionType::fwd, outputL, vex::velocityUnits::pct);
    RightMotor2.spin(vex::directionType::fwd, outputR, vex::velocityUnits::pct);
    LeftMotor3.spin(vex::directionType::fwd, outputL, vex::velocityUnits::pct);
    RightMotor3.spin(vex::directionType::fwd, outputR, vex::velocityUnits::pct);
    sleep(sampletime);
        if (fabs(err_now) < err_1|| T4.time() >= outtime){
      // T1.clear();
        LeftMotor1.stop(vex::brakeType::coast);
       RightMotor1.stop(vex::brakeType::coast);
       LeftMotor2.stop(vex::brakeType::coast);
       RightMotor2.stop(vex::brakeType::coast);
      LeftMotor3.stop(vex::brakeType::coast);
      RightMotor3.stop(vex::brakeType::coast);
      break;
  }
    // if ((T1.time()) > 25 || T4.time() >= outtime) {
    //    LeftMotor1.stop(vex::brakeType::coast);
    //    RightMotor1.stop(vex::brakeType::coast);
    //    LeftMotor2.stop(vex::brakeType::coast);
    //    RightMotor2.stop(vex::brakeType::coast);
    //   LeftMotor3.stop(vex::brakeType::coast);
    //   RightMotor3.stop(vex::brakeType::coast);
    //   break;
    // }
    
  }
  BaseMotorStop(1);
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void RunpidTo(double speed_limit, int aim,double err_1,double speed_limit2, int dec_point, int change_steps,int start_point,int outtime, double newgyro, int p_point,int turn_point, int turn_side,int turn_right)
{
 // Inertial1.resetRotation();
  double Kp = 0.22;  // 0.39
  double Ki = 0; // 0.001
  double Kd = 0.245; // 0.173
  double K_gyro = 0.4;
  double Kd_gyro = 0;
  
 switch (p_point) 
{
    case 0: break;
    ////////////////////////////////400 3.25 6M////////////////////////////////////////
    case 1:Kp = 0.15;Ki = 0;Kd =0.12;break; //RunpidStraightNTo(100,2970,20,10,400,0,0,1800,0,1);(3050)
   case 2:Kp = 0.16;Ki = 0;Kd =0.1;break;//RunpidStraightNTo(45,800,10,15,150,0,0,1800,0,2);
    case 3:Kp = 0.148;Ki = 0;Kd =0.11;break; //RunpidStraightNTo(65,1200,12,45,1000,0,0,1800,0,3);
    case 4:Kp = 0.001;Ki = 0;Kd =0;break;//RunpidStraightNTo(20,200,6,5,20,0,0,1800,0,4);
    case 5:Kp = 0.19;Ki = 0;Kd =0.3;break; //RunpidStraightNTo(30,500,10,10,100,0,0,1800,0,5);
    case 6:Kp = 0.18;Ki = 0;Kd =0.23;break; //RunpidStraightNTo(95,2970,20,10,100,0,0,1800,0,6);
    case 7:Kp = 0.14;Ki = 0;Kd =0.048;break; //RunpidStraightNTo(80,1800,10,65,1000,0,0,1000,0,7);
    case 8:Kp = 0.121;Ki = 0;Kd =0.17;break; //RunpidStraightNTo(60,800,10,10,120,0,0,1800,0,8);
     case 9:Kp = 0.16;Ki = 0;Kd =0.1;break;//RunpidStraightNTo(60,900,10,15,150,0,0,1800,0,9);
     case 10:Kp = 0.16;Ki = 0;Kd =0.23;break; //RunpidStraightNTo(60,1000,20,6,60,0,0,1800,0,10);
      case 11:Kp = 0.15;Ki = 0;Kd =0.15;break;//RunpidStraightNTo(30,300,10,0,0,0,0,1800,0,11);
      case 12:Kp = 0.11;Ki = 0;Kd =0.12;break; //RunpidStraightNTo(60,800,10,10,120,0,0,1800,0,12);
      //////////////////////////////////257 4.125 4M/////////////////////////////////////////
       case 13:Kp = 0.16;Ki = 0;Kd =0.17;break;//RunpidStraightNTo(45,800,10,15,150,0,0,1800,0,13);
       case 14:Kp = 0.141;Ki = 0;Kd =0.07;break; //RunpidStraightNTo(79,1600,15,78,1100,0,0,1500,0,14);
        case 15:Kp = 0.1198;Ki = 0;Kd =0.02;break; //RunpidStraightNTo(95,2970,20,10,100,0,0,1800,0,15);
        case 16:Kp = 0.11;Ki = 0;Kd =0.17;break; //RunpidStraightNTo(50,800,10,10,120,0,0,1800,0,16);
         case 17:Kp = 0.18;Ki = 0;Kd =0.3;break; //RunpidStraightNTo(30,500,10,10,100,0,0,1800,0,17);
          case 18:Kp = 0.15;Ki = 0;Kd =0.05;break; //RunpidStraightNTo(75,1250,12,25,200,0,0,1800,0,18);
          case 19:Kp = 0.04;Ki = 0;Kd =0.4;break; //RunpidStraightNTo(95,2600,20,10,100,0,0,1800,0,19);
          case 20:Kp = 0.13;Ki = 0;Kd =0.15;break; //RunpidStraightNTo(100,3000,20,56,2000,0,0,5000,0,20);
          case 21:Kp = 0.1355;Ki = 0;Kd =0.01;break; //RunpidStraightNTo(100,2770,20,70,1970,0,0,4000,0,21);
          case 22:Kp = 0.1357;Ki = 0;Kd =0.03;break; // RunpidStraightNTo(79,1700,15,78,1100,0,0,1500,0,22);
          case 23:Kp = 0.13;Ki = 0;Kd =0.065;break; // RunpidStraightNTo(79,1700,15,78,1100,0,0,1500,0,23);
          case 24:Kp = 0.111;Ki = 0;Kd =0.1;break; //RunpidStraightNTo(100,2770,20,70,1970,0,0,4000,0,24);
           case 25:Kp = 0.13;Ki = 0;Kd =0.06;break; //RunpidStraightNTo(100,2770,20,70,1970,0,0,4000,0,25);
            case 26:Kp = 0.09;Ki = 0;Kd =0.02;break; //RunpidStraightNTo(100,2770,20,70,1970,0,0,4000,0,26);
            case 27:Kp = 0.141;Ki = 0;Kd =0.03;break; // RunpidStraightNTo(79,1700,15,78,1100,0,0,1500,0,27);
             case 28:Kp = 0.109;Ki = 0;Kd =0.001;K_gyro = 0.3;break; //RunpidStraightNTo(100,2770,20,70,1970,0,0,4000,0,28);
                case 29:Kp = 0.109;Ki = 0;Kd =0.001;K_gyro = 0.5;break; //RunpidStraightNTo(80,1800,10,65,1000,0,0,1000,0,29);
                    case 30:Kp = 0.121;Ki = 0;Kd =0.03;break; //RunpidStraightNTo(79,1600,15,78,1100,0,0,1500,0,30);
                     case 31:Kp = 0.137;Ki = 0;Kd =0.15;break; //RunpidStraightNTo(100,3000,20,56,2000,0,0,5000,0,20);
                    ///////////////////////////////////////////342 4.125 6M//////////////////////////////////////////////////
                     case 32:Kp = 0.13;Ki = 0;Kd =0.1;K_gyro = 0.25;break; //RunpidStraightNTo(80,1800,10,65,1000,0,0,1000,0,32);
                      case 33:Kp = 0.08;Ki = 0;Kd =0.3;K_gyro = 0.3;break; //RunpidStraightNTo(60,800,10,10,120,0,0,1800,0,33);
                      case 34:Kp = 0.17;Ki = 0;Kd =0.23;break; //RunpidStraightNTo(80,1800,10,65,1000,0,0,1000,0,34);
                       case 35:Kp = 0.11;Ki = 0;Kd =0.09;break;//RunpidStraightNTo(45,800,10,15,150,0,0,1800,0,2);
                       case 36:Kp = 0.13;Ki = 0;Kd =0.8;K_gyro = 1.3;break; //RunpidStraightNTo(60,1000,20,6,60,0,0,1800,0,36);
              case 37:Kp = 0.09;Ki = 0;Kd =0.5;break;//RunpidStraightNTo(30,300,10,0,0,0,0,1800,0,11);
              case 38:Kp = 0.12;Ki = 0;Kd =0.14;K_gyro = 0.55;break; //  RunpidTo(100,2000,10,80,1000,0,0,1000,0,38);
              case 39:Kp = 0.16;Ki = 0;Kd =0.23;K_gyro = 0.6;break; //RunpidStraightNTo(80,1800,10,65,1000,0,0,1000,0,32);
              case 40:Kp = 0.13;Ki = 0;Kd =0.1;K_gyro = 0.65;break; //RunpidStraightNTo(80,1800,10,65,1000,0,0,1000,0,40);
               case 41:Kp = 0.12;Ki = 0;Kd =0.3;K_gyro = 0.9;break; //  RunpidTo(100,2000,10,80,1000,0,0,1000,0,38);
               case 42:Kp = 0.09;Ki = 0;Kd =0.5;K_gyro = 1.5;break;//RunpidStraightNTo(30,300,10,0,0,0,0,1800,0,11);
               case 43:Kp = 0.16;Ki = 0;Kd =0.4;K_gyro = 1.8;break; //RunpidStraightNTo(60,1000,20,6,60,0,0,1800,0,36);
               case 44:Kp = 0.13;Ki = 0;Kd =0.1;K_gyro = 0.7;break; // RunpidTo(80,2600,10,65,1000,6,400,1200,180,44,600,2);
               case 45:Kp = 0.16;Ki = 0;Kd =0.4;K_gyro = 1.4;break; //RunpidStraightNTo(60,1000,20,6,60,0,0,1800,0,36);
               case 46:Kp = 0.16;Ki = 0;Kd =0.4;K_gyro = 1.1;break; //RunpidStraightNTo(60,1000,20,6,60,0,0,1800,0,36);
               case 47:Kp = 0.13;Ki = 0;Kd =0.1;K_gyro = 1.7;break; //RunpidStraightNTo(80,1800,10,65,1000,0,0,1000,0,40);
                case 48:Kp = 0.15;Ki = 0;Kd =0.15;K_gyro = 1.7;break;break;//RunpidStraightNTo(30,300,10,0,0,0,0,1800,0,11);
                case 49:Kp = 0.13;Ki = 0;Kd =0.13;K_gyro = 0.35;break; //RunpidStraightNTo(80,1800,10,65,1000,0,0,1000,0,32);
                 case 50:Kp = 0.13;Ki = 0;Kd =0.13;K_gyro = 0.5;break; //RunpidStraightNTo(80,1800,10,65,1000,0,0,1000,0,32);
                  case 51:Kp = 0.09;Ki = 0;Kd =0.16;K_gyro = 0.72;break; //RunpidStraightNTo(80,1800,10,65,1000,0,0,1000,0,51);
                   case 52:Kp = 0.13;Ki = 0;Kd =0.1;K_gyro = 0.3;break; //RunpidStraightNTo(80,1800,10,65,1000,0,0,1000,0,32);
                   case 53:Kp = 0.145;Ki = 0;Kd =0.5;K_gyro = 0.65;break; //RunpidStraightNTo(60,1000,20,6,60,0,0,1800,0,36);
                    case 54:Kp = 0.08;Ki = 0;Kd =0.15;K_gyro = 0.75;break; //RunpidStraightNTo(80,1800,10,65,1000,0,0,1000,0,32);
                    case 55:Kp = 0.16;Ki = 0;Kd =0.4;K_gyro = 1.2;break; //RunpidStraightNTo(60,1000,20,6,60,0,0,1800,0,36);
                    case 56:Kp = 0.12;Ki = 0;Kd =0.3;K_gyro = 0.3;break; //  RunpidTo(100,2000,10,80,1000,0,0,1000,0,38);
                      case 57:Kp = 0.13;Ki = 0;Kd =0.1;K_gyro = 0.8;break; //RunpidStraightNTo(80,1800,10,65,1000,0,0,1000,0,32);
                        case 58:Kp = 0.13;Ki = 0;Kd =0.1;K_gyro = 1.1;break; //RunpidStraightNTo(80,1800,10,65,1000,0,0,1000,0,32);
                          case 59:Kp = 0.13;Ki = 0;Kd =0.1;K_gyro = 0.5;break; //RunpidStraightNTo(80,1800,10,65,1000,0,0,1000,0,32);
                   case 60:Kp = 0.12;Ki = 0;Kd =0.3;K_gyro = 2;break; //  RunpidTo(100,2000,10,80,1000,0,0,1000,0,38);
                    case 61:Kp = 0.16;Ki = 0;Kd =0.4;K_gyro = 0.93;break; //RunpidStraightNTo(60,1000,20,6,60,0,0,1800,0,36);
                    case 62:Kp = 0.16;Ki = 0;Kd =0.4;K_gyro = 0.3;break; //RunpidStraightNTo(60,1000,20,6,60,0,0,1800,0,36);
                    case 63:Kp = 0.12;Ki = 0;Kd =0.3;K_gyro = 0.9;break; //  RunpidTo(100,2000,10,80,1000,0,0,1000,0,38);
                    
                     case 64:Kp = 0.16;Ki = 0;Kd =0.4;K_gyro = 0.65;break; //RunpidStraightNTo(60,1000,20,6,60,0,0,1800,0,36);case 63:Kp = 0.16;Ki = 0;Kd =0.4;K_gyro = 1;break; //RunpidStraightNTo(60,1000,20,6,60,0,0,1800,0,36);
                     case 65:Kp = 0.16;Ki = 0;Kd =0.4;K_gyro = 0.5;break; //RunpidStraightNTo(60,1000,20,6,60,0,0,1800,0,36);case 63:Kp = 0.16;Ki = 0;Kd =0.4;K_gyro = 1;break;
                     case 66:Kp = 0.16;Ki = 0;Kd =0.4;K_gyro = 0.7;break; //RunpidStraightNTo(60,1000,20,6,60,0,0,1800,0,36); 
                     
                      case 67:Kp = 0.07;Ki = 0;Kd =0.3;K_gyro = 0.55;break; //RunpidStraightNTo(80,1800,10,65,1000,0,0,1000,0,32);
                      case 68:Kp = 0.16;Ki = 0;Kd =0.4;K_gyro = 0.8;break; //RunpidStraightNTo(60,1000,20,6,60,0,0,1800,0,36);
                      case 69:Kp = 0.16;Ki = 0;Kd =0.4;K_gyro = 0.5;break; //RunpidStraightNTo(60,1000,20,6,60,0,0,1800,0,36);
                      case 70:Kp = 0.16;Ki = 0;Kd =0.4;K_gyro = 1;Kd_gyro=0;break; //RunpidStraightNTo(60,1000,20,6,60,0,0,1800,0,36); 
                      case 71:Kp = 0.15;Ki = 0;Kd =0.5;K_gyro = 0.7;break; //RunpidStraightNTo(60,1000,20,6,60,0,0,1800,0,36);
                      case 72:Kp = 0.15;Ki = 0;Kd =0.5;K_gyro = 2;break; //RunpidStraightNTo(60,1000,20,6,60,0,0,1800,0,36);
    default:Kp = 0.1;Ki = 0;Kd =0;K_gyro = 0.01;Kd_gyro=0;
 }
  double value_now = 0;
  double EI = 0, ED = 0;
  int sampletime = 10;
  double err_now = err_1 +1;
  double err_last = 0;
  double prev_angle_error=0;
  double angle_ED=0;
  double angle_EI=0;
  double max_v = speed_limit;
  double Kt = 0;
  double Ktv = 0;
  double value_now_L = 0;
  double value_last_L = 0;
  double value_now_R = 0;
  double value_last_R = 0;
  double outputL, outputR;
  double ET = 0;
  double ETV = 0;
  double sum_dec = 0;
  
  double angle_err = 0;
  double acc = 0.2;
    double V = 3;
  LeftMotor1.resetPosition();
  RightMotor1.resetPosition();
  T1.clear();
  T2.clear();
  T3.clear();
  T4.clear();
  TACC.clear();
   // double chushizhi = Inertial1.rotation(degrees);
  while (1) {
     printf("%.2f\n", LeftMotor1.velocity(pct));
    double returnangle =Inertial1.rotation(degrees);
    max_v = acc * TACC.time();
    if (TACC.time() > 0)
      max_v = speed_limit;
    if (max_v >= speed_limit) {
      max_v = speed_limit;
    }
    if (dec_point != -1) {
      if (fabs(LeftMotor1.position(vex::rotationUnits::deg)) > dec_point) {
        max_v =
            speed_limit;
            // (fabs(LeftMotor1.rotation(vex::rotationUnits::deg)) - dec_point) /
            //     50.0;
        if (max_v < speed_limit2) {
          max_v = speed_limit2;
        }
      }
    }
    if (change_steps != -1) {
      if (start_point <= fabs(value_now_L)) {
        steps = change_steps;
        change_steps = -1;
      }
    }
    value_now = LeftMotor1.position(vex::rotationUnits::deg);
    if (T2.time() >= 0) {
      T2.clear();
      value_last_R = value_now_R;
      value_last_L = value_now_L;
      value_now_R = RightMotor1.position(vex::rotationUnits::deg);
      value_now_L = LeftMotor1.position(vex::rotationUnits::deg);
      ETV = (value_now_R - value_last_R) - (value_now_L - value_last_L);
      ET = value_now_R - value_now_L;
      sum_dec += Ktv * ETV;
    }
    if (T3.time() > sampletime) {
      T3.clear();
      EI = EI + err_now;
      err_last = err_now;
      err_now = aim - value_now;
      ED = err_now - err_last;
    }
    if (fabs(err_now) > 100)
      EI = 0;
    outputL = Kp * err_now + Ki * EI + Kd * ED;
    outputR = Kp * err_now + Ki * EI + Kd * ED;
    if (fabs(outputL) > max_v)
      outputL = sgn(outputL) * max_v;
      if (fabs(outputR) > max_v)
      outputR = sgn(outputR) * max_v;
      if(fabs(LeftMotor1.position(vex::rotationUnits::deg))>turn_point&&turn_side==2){
      
    
    angle_EI= angle_EI+angle_err;
    prev_angle_error=angle_err;
    angle_err = newgyro - return_angle;
    angle_ED = angle_err-prev_angle_error;
    
    if (fabs(angle_err) < 1)   angle_err = 0;
    // if(angle_err>0)
    // outputR = outputL - K_gyro * (angle_err);
     
    // else if(angle_err<0)
    outputL = outputL + Kt * ET + Kd_gyro*angle_ED * ETV + K_gyro * (angle_err);
    outputR = outputR - Kt * ET -Kd_gyro*angle_ED - K_gyro * (angle_err);
      }
if(fabs(LeftMotor1.position(vex::rotationUnits::deg))>turn_point&&turn_side==1){
      
    angle_err = calculateAngleError(newgyro , returnangle);
    if (fabs(angle_err) < 1)   angle_err = 0;
    // if(angle_err>0)
    // outputR = outputL - K_gyro * (angle_err);
     
    // else if(angle_err<0)
    // outputL = outputL + Kt * ET + Ktv * ETV + K_gyro * (angle_err);
    outputR = outputR - Kt * ET -Kd_gyro*angle_ED - K_gyro * (angle_err);
      }
      if(fabs(LeftMotor1.position(vex::rotationUnits::deg))>turn_point&&turn_side==0){
      
    angle_err = newgyro - returnangle;
    if (fabs(angle_err) < 1)   angle_err = 0;
    // if(angle_err>0)
    // outputR = outputL - K_gyro * (angle_err);
     
    // else if(angle_err<0)
    outputL = outputL + Kt * ET + Kd_gyro*angle_ED * ETV + K_gyro * (angle_err);
    // outputR = outputR - Kt * ET - Ktv * ETV - K_gyro * (angle_err);
      }
    if (outputL == 0){
      outputR = 0;
    }
    if(outputL>max_v){
      outputL=max_v;
    }
    if(outputR>max_v){
      outputR=max_v;
    }
      LeftVol(outputL);
      RightVol(outputR);
    // LeftMotor1.spin(vex::directionType::fwd,outputL , vex::velocityUnits::pct);
    // RightMotor1.spin(vex::directionType::fwd, outputR, vex::velocityUnits::pct);
    // LeftMotor2.spin(vex::directionType::fwd, outputL, vex::velocityUnits::pct);
    // RightMotor2.spin(vex::directionType::fwd, outputR, vex::velocityUnits::pct);
    // LeftMotor3.spin(vex::directionType::fwd, outputL, vex::velocityUnits::pct);
    // RightMotor3.spin(vex::directionType::fwd, outputR, vex::velocityUnits::pct);
    sleep(sampletime);
    if(turn_right==0){
      if ((fabs(err_now) < err_1)|| T4.time() >= outtime){
      // T1.clear();
       LeftMotor1.stop(vex::brakeType::coast);
       RightMotor1.stop(vex::brakeType::coast);
       LeftMotor2.stop(vex::brakeType::coast);
       RightMotor2.stop(vex::brakeType::coast);
      LeftMotor3.stop(vex::brakeType::coast);
      RightMotor3.stop(vex::brakeType::coast);
      break;
  }
    }
    if(turn_right==1){
      if (((fabs(err_now) < err_1)&&fabs(angle_err) < 3)|| T4.time() >= outtime){
      // T1.clear();
       LeftMotor1.stop(vex::brakeType::coast);
       RightMotor1.stop(vex::brakeType::coast);
       LeftMotor2.stop(vex::brakeType::coast);
       RightMotor2.stop(vex::brakeType::coast);
      LeftMotor3.stop(vex::brakeType::coast);
      RightMotor3.stop(vex::brakeType::coast);
      break;
  }
    }
    
  }
 BaseMotorStop(1);
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

// X、Y坐标更新函数
void UpdateXY() {
    // 本地坐标系变量
    double local_Y_position = 0.0;
    double local_X_position = 0.0;
    double local_length;
    double local_gyro;
    
    // 计算本地坐标系坐标变化
    double Straightmove = 2 * M_PI * WheelRadius * (Encoder1.position(vex::rotationUnits::deg) / 360);
    double Sidemove = 2 * M_PI * WheelRadius * (Encoder2.position(vex::rotationUnits::deg) / 360);
    
    // 获取并更新陀螺仪角度
    double Gyro_rad = Inertial1.rotation(degrees) / (180 / M_PI);
    double Gyroerror_rad = Gyro_rad - Gyrobefore_rad;
    Gyrobefore_rad = Gyro_rad; // 更新之前的角度
    
    // 使用圆弧拟合计算本地坐标
    if (fabs(Gyroerror_rad) < 1e-2) { // 如果 Gyroerror_rad 接近于0，使用近似处理
        local_Y_position = Straightmove;
        local_X_position = Sidemove;
    } else {
        double factor = 2 / Gyroerror_rad;
        local_Y_position = (factor * (Straightmove + Wheel_Y_distance * Gyroerror_rad)) * sin(Gyroerror_rad / 2);
        local_X_position = (factor * (Sidemove + Wheel_X_distance * Gyroerror_rad)) * sin(Gyroerror_rad / 2);
    }
    
    // 如果本地坐标变化量为零，则不进行后续计算
    if (local_X_position == 0 && local_Y_position == 0) {
        return; // 直接返回，不更新位置
    }
    
    // 计算本地坐标系的角度和长度
    local_gyro = atan2(local_Y_position, local_X_position);
    local_length = sqrt(local_Y_position * local_Y_position + local_X_position * local_X_position);
    
    // 更新全局坐标
    double global_gyro = local_gyro - Gyrobefore_rad - (Gyroerror_rad / 2);
    X_position += local_length * cos(global_gyro);
    Y_position += local_length * sin(global_gyro);
    
    // 重置编码器位置
    Encoder1.resetPosition();
    Encoder2.resetPosition();
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

float reduce_0_to_360(float angle) {
  while(!(angle >= 0 && angle < 360)) {
    if( angle < 0 ) { angle += 360; }
    if(angle >= 360) { angle -= 360; }
  }
  return(angle);
}

float clamp(float input, float min, float max){
  if( input > max ){ return(max); }
  if(input < min){ return(min); }
  return(input);
}

bool is_reversed(double input){
  if(input<0) return(true);
  return(false);
}

float to_volt(float percent){
  return(percent*12.8/100.0);
}



// 角度规范化函数，确保角度在 -π 到 π 之间
double wrapAngle(double angle) {
    while (angle > M_PI) angle -= 2 * M_PI;
    while (angle < -M_PI) angle += 2 * M_PI;
    return angle;
}

// 角度误差计算函数
double calculateAngleError(double targetAngle , double currentAngle) {

    // 计算两个角度之间的最短距离
    double angleDiff = targetAngle - currentAngle;
    
    // 根据周期性调整角度差，选择最短路径
     if (fabs(angleDiff) > 180.0) {
        if (angleDiff > 0) {
            angleDiff -= 360.0;
        } else {
            angleDiff += 360.0;
        }
    }

    return angleDiff;
}



// 编码器坐标直接走路
void RunXY_Straight(double speed_limit, double targetX, double targetY,double err_1, double outtime,int p_point) {

    // 计算目标方向
    double err_Y = targetY - Y_position;
    double err_X = targetX - X_position;
    double start_X = X_position;
    double start_Y = Y_position;
    double target_angle_rad = wrapAngle(atan2(err_X, err_Y));
    double target_angle = target_angle_rad * (180 / M_PI);
   

    // 计算直线行驶的距离
    double covered_distance;

    // PID 控制器参数
    double Kp = 2.5;
    double Ki = 0.001;
    double Kd = 3;
    double Kp2 = 4;
    double Ki2 = 0.003;
    double Kd2 = 5;
    double err_last;
    double err_now;
    const double sampletime = 10.0;
    double outputL, outputR;
    double K_gyro = 0.7;
    double angle_err = 0.0;
    switch (p_point) 
{
    case 0: break;
    ////////////////////////////////400 3.25 6M////////////////////////////////////////
    case 1:Kp = 0.15;Ki = 0;Kd =0.12;K_gyro = 0.01;break; //RunpidStraightNTo(100,2970,20,10,400,0,0,1800,0,1);(3050)
    case 2:Kp = 2;Ki = 0.001;Kd =0.4;K_gyro = 0.3;break;
    default:Kp = 2.5;Ki = 0.001;Kd =3;K_gyro = 0.7;
 }

    //  估算直线行驶的距离
    double err_distance = sqrt(pow(err_X, 2) + pow(err_Y, 2));

    //计算误差角度
    angle_err = calculateAngleError(target_angle,return_angle);
   
    // 计时器清零
    T4.clear();

    while (true) {

        // 更新行走距离
        covered_distance = sqrt(pow(X_position - start_X, 2) + pow(Y_position - start_Y, 2));

        // 更新误差
       
        err_now = sqrt(pow(err_X, 2) + pow(err_Y, 2));
         // 陀螺仪误差校正
        err_Y = targetY - Y_position;
        err_X = targetX - X_position;

        // 再次计算误差角度
        target_angle_rad = atan2(err_X, err_Y);
        target_angle = target_angle_rad * (180 / M_PI);
        angle_err = calculateAngleError(target_angle,return_angle);

        // 积分和微分项
        double EI = 0.0, ED = 0.0;
        
        // 微积分计算
        EI = EI + err_now;
        err_last = err_now;
        ED = err_now - err_last;
        
        // 陀螺仪误差校正
        if (fabs(angle_err) < 1) angle_err = 0;

        // 第二套PID参数
        if(err_now < err_distance*0.4){
          Kp = Kp2;
          Ki = Ki2;
          Kd = Kd2;
        }

        // // PID计算
        outputL = Kp * err_now + Ki * EI + Kd * ED;
        outputR = Kp * err_now + Ki * EI + Kd * ED;

        //判断要前进还是后退
     

        // 限制输出值
        if (outputL > fabs(speed_limit)) outputL = speed_limit;
        if (outputR > fabs(speed_limit)) outputR = speed_limit;

        // 方向矫正
      
        outputR = outputR - K_gyro * angle_err;
        outputL = outputL + K_gyro * angle_err;
        
        
        // 调试输出
        printf("%.2f\n", angle_err);

        // 控制电机
        LeftMotor1.spin(vex::directionType::fwd, outputL*0.128, voltageUnits::volt);
        RightMotor1.spin(vex::directionType::fwd, outputR*0.128, voltageUnits::volt);
        LeftMotor2.spin(vex::directionType::fwd, outputL*0.128, voltageUnits::volt);
        RightMotor2.spin(vex::directionType::fwd, outputR*0.128, voltageUnits::volt);
        LeftMotor3.spin(vex::directionType::fwd, outputL*0.128, voltageUnits::volt);
        RightMotor3.spin(vex::directionType::fwd, outputR*0.128, voltageUnits::volt);
        // LeftVol(outputL);
        // RightVol(outputR);
        // 停止条件(误差小于阈值/超过保护时间/行走距离过长)
        if (fabs(err_now) < err_1 || T4.time() > outtime || covered_distance > 1.2*err_distance) {
            LeftMotor1.stop(vex::brakeType::coast);
            RightMotor1.stop(vex::brakeType::coast);
            LeftMotor2.stop(vex::brakeType::coast);
            RightMotor2.stop(vex::brakeType::coast);
            LeftMotor3.stop(vex::brakeType::coast);
            RightMotor3.stop(vex::brakeType::coast);
            break;
        }

        // 延迟
        sleep(sampletime);
    }
    
    // 刹车
    BaseMotorStop(1);
}

// 编码器转弯面向坐标
void FaceToXY(double speed_limit, double targetX, double targetY,double err_1, double outtime) {

    // 计算目标方向
    double err_Y = targetY - Y_position;
    double err_X = targetX - X_position;
    double target_angle_rad = wrapAngle(atan2(err_X, err_Y));
    double target_angle = target_angle_rad * (180 / M_PI);

    double angle_err = 0.0;

    //计算误差角度
    angle_err = calculateAngleError(target_angle,return_angle);

    // 使用 PID 控制器旋转到目标角度
    if(fabs(angle_err)>1){
    TurnVolpidNTo(speed_limit, target_angle,err_1, outtime);
    }
}


bool is_line_settled(float desired_X, float desired_Y, float desired_angle_deg, float current_X, float current_Y){
  return( (desired_Y-Y_position) * cos(to_rad(desired_angle_deg)) <= -(desired_X-X_position) * sin(to_rad(desired_angle_deg)) );
}

float get_absolute_heading(){
 return (reduce_0_to_360(Inertial1.rotation()));
}

float clamp_min_voltage(float drive_output, float drive_min_voltage){
  if(drive_output < 0 && drive_output > -drive_min_voltage){
      return -drive_min_voltage;
  }
  if(drive_output > 0 && drive_output < drive_min_voltage){
    return drive_min_voltage;
  }
  return drive_output;
}

float left_voltage_scaling(float drive_output, float heading_output){
  float ratio = std::max(std::fabs(drive_output+heading_output), std::fabs(drive_output-heading_output))/12.8;
  if (ratio > 1) {
    return (drive_output+heading_output)/ratio;
  }
  return drive_output+heading_output;
}

float right_voltage_scaling(float drive_output, float heading_output){
  float ratio = std::max(std::fabs(drive_output+heading_output), std::fabs(drive_output-heading_output))/12.8;
  if (ratio > 1) {
    return (drive_output-heading_output)/ratio;
  }
  return drive_output-heading_output;
}



//  Drives to a specified point and orientation on the field.
//  * Uses a boomerang controller. The carrot point is back from the target
//  * by the same distance as the robot's distance to the target, times the lead. The
//  * robot always tries to go to the carrot, which is constantly moving, and the
//  * robot eventually gets into position. The heading correction is optimized to only
//  * try to reach the correct angle when drive error is low, and the robot will drive 
//  * backwards to reach a pose if it's faster. .5 is a reasonable value for the lead. 
//  * The setback parameter is used to glide into position more effectively. It is
//  * the distance back from the target that the robot tries to drive to first.

void drive_to_pose(double X_target, double Y_target, double angle_target, double lead, double setback, double drive_min_speed, double drive_max_speed, double heading_max_speed, double drive_settle_error, double drive_settle_time, double drive_timeout, double drive_starti, double heading_starti, int p_point){

double drive_kp=0.1;
double drive_ki=0;
double drive_kd=0.1;
double heading_kp=0.1;
double heading_ki=0;
double heading_kd=0.1;
switch (p_point) 
{
    case 0: break;
    case 1:drive_kp = 0.15;drive_ki = 0;drive_kd =0.12;heading_kp = 0.1;heading_ki = 0.01;heading_kd = 0.1;break; 
    case 2:drive_kp = 0.45;drive_ki = 0.001;drive_kd =1;heading_kp = 0.4;heading_ki = 0;heading_kd = 0.2;break; 
    case 3:drive_kp = 2.8;drive_ki = 0;drive_kd =1;heading_kp = 1.8;heading_ki = 0;heading_kd = 0.8;break;//drive_to_point(0, 30, 50, 100, 40, 1, 200, 1500,0, 0, 5, 0, 0);(50,约为两个个地垫)
    case 4:drive_kp = 2;drive_ki = 0.001;drive_kd =0;heading_kp = 1.5;heading_ki = 0.001;heading_kd = 0;break; 
    default:drive_kp = 0.15;drive_ki = 0;drive_kd =0.12;heading_kp = 0.01;heading_ki = 0.01;heading_kd = 0.01;
 }
 double target_distance = hypot(X_target-X_position, Y_target-Y_position);
 PID drivePID(target_distance, drive_kp, drive_ki, drive_kd, drive_starti, drive_settle_error, drive_settle_time, drive_timeout);
 PID headingPID(to_deg(atan2(X_target-X_position, Y_target-Y_position))-get_absolute_heading(), heading_kp, heading_ki, heading_kd, heading_starti);
 bool line_settled = is_line_settled(X_target, Y_target, angle_target, X_position, Y_position);
 bool prev_line_settled = line_settled;
 bool crossed_center_line = false;
 bool center_line_side = is_line_settled(X_target, Y_target, angle_target+90, X_position, Y_position);
 bool prev_center_line_side = center_line_side;
 while(!drivePID.is_settled()){
   line_settled = is_line_settled(X_target, Y_target, angle_target, X_position, Y_position);
   if(line_settled && !prev_line_settled){ break; }
   prev_line_settled = line_settled;

   center_line_side = is_line_settled(X_target, Y_target, angle_target+90, X_position, Y_position);
   if(center_line_side != prev_center_line_side){
      crossed_center_line = true;
    }

   target_distance = hypot(X_target-X_position, Y_target-Y_position);

   float carrot_X = X_target - sin(to_rad(angle_target)) * (lead * target_distance + setback);
   float carrot_Y = Y_target - cos(to_rad(angle_target)) * (lead * target_distance + setback);

   float drive_error = hypot(carrot_X - X_position, carrot_Y - Y_position);
   float heading_error = reduce_negative_180_to_180(to_deg(atan2(carrot_X - X_position,carrot_Y - Y_position))-get_absolute_heading());

   if(drive_error<drive_settle_error || crossed_center_line || drive_error < setback){
     heading_error = reduce_negative_180_to_180(angle_target-get_absolute_heading()); 
      drive_error = target_distance;
   }

   float drive_output = drivePID.compute(drive_error);
   float heading_scale_factor = cos(to_rad(heading_error));
   drive_output*=heading_scale_factor;
   heading_error = reduce_negative_90_to_90(heading_error);
   float heading_output = headingPID.compute(heading_error);

   drive_output = clamp(drive_output, -fabs(heading_scale_factor)*drive_max_speed, fabs(heading_scale_factor)*drive_max_speed);
   heading_output = clamp(heading_output, -heading_max_speed, heading_max_speed);

   drive_output = clamp_min_voltage(drive_output, drive_min_speed);

   

   LeftMotor1.spin(vex::directionType::fwd, left_voltage_scaling(drive_output, heading_output), voltageUnits::volt);
   RightMotor1.spin(vex::directionType::fwd, right_voltage_scaling(drive_output, heading_output), voltageUnits::volt);
   LeftMotor2.spin(vex::directionType::fwd,left_voltage_scaling(drive_output, heading_output), voltageUnits::volt);
   RightMotor2.spin(vex::directionType::fwd, right_voltage_scaling(drive_output, heading_output), voltageUnits::volt);
   LeftMotor3.spin(vex::directionType::fwd, left_voltage_scaling(drive_output, heading_output), voltageUnits::volt);
   RightMotor3.spin(vex::directionType::fwd, right_voltage_scaling(drive_output, heading_output), voltageUnits::volt);

   

   sleep(10);

 }

}


void drive_to_point(float X_target, float Y_target, float drive_min_speed, float drive_max_speed, float heading_max_speed, float drive_settle_error, float drive_settle_time, float drive_timeout, float drive_starti, float heading_starti, int p_point, int b_steps, float b_point){

float drive_kp=0.1;
float drive_ki=0;
float drive_kd=0.1;
float heading_kp=0.1;
float heading_ki=0;
float heading_kd=0.1;
switch (p_point) 
{
    case 0: break;
    case 1:drive_kp = 2.8;drive_ki = 0;drive_kd =1;heading_kp = 1.5;heading_ki = 0;heading_kd = 0.2;break; 
    case 2:drive_kp = 2.9;drive_ki = 0;drive_kd =1;heading_kp = 1.5;heading_ki = 0;heading_kd = 0.2;break; 
    case 3:drive_kp = 2.9;drive_ki = 0;drive_kd =1;heading_kp = 0.5;heading_ki = 0;heading_kd = 0.1;break; 
    case 4:drive_kp = 3.3;drive_ki = 0;drive_kd =1;heading_kp = 2;heading_ki = 0;heading_kd = 0.8;break;//drive_to_point(0, 30, 50, 100, 40, 1, 200, 1500,0, 0, 4, 0, 0);(30,约为一个地垫)
    case 5:drive_kp = 2.8;drive_ki = 0;drive_kd =1;heading_kp = 1.8;heading_ki = 0;heading_kd = 0.8;break;//drive_to_point(0, 30, 50, 100, 40, 1, 200, 1500,0, 0, 5, 0, 0);(50,约为两个个地垫)
    case 6:drive_kp = 2.7;drive_ki = 0;drive_kd =1;heading_kp = 1.6;heading_ki = 0;heading_kd = 0.8;break;//drive_to_point(0, 72, 50, 100, 40, 1, 200, 1500,0, 0, 6, 0, 0);(72,约为三个地垫)
    case 7:drive_kp = 4;drive_ki = 0;drive_kd =2;heading_kp = 2.3;heading_ki = 0;heading_kd = 1;break;//drive_to_point(0, 12, 90, 100, 60, 1, 200, 1500,0, 0, 7, 0, 0);(12,一个地垫内的微调)
    case 8:drive_kp = 2;drive_ki = 0.001;drive_kd =0;heading_kp = 1.5;heading_ki = 0.001;heading_kd = 0;break; 
    case 9:drive_kp = 3.8;drive_ki = 0;drive_kd =1;heading_kp = 2.5;heading_ki = 0;heading_kd = 0.2;break; 
    case 10:drive_kp = 2;drive_ki = 0;drive_kd =1;heading_kp = 2;heading_ki = 0;heading_kd = 0;break; 
    case 11:drive_kp = 3.1;drive_ki = 0;drive_kd =1;heading_kp = 1.2;heading_ki = 0;heading_kd = 1;break;
    case 12:drive_kp = 3;drive_ki = 0.002;drive_kd =4;heading_kp = 1;heading_ki = 0.002;heading_kd = 4;break;
    default:drive_kp = 0.15;drive_ki = 0;drive_kd =0.12;heading_kp = 0.01;heading_ki = 0.01;heading_kd = 0.01;
 }
  PID drivePID(hypot(X_target-get_X_position(),Y_target-get_Y_position()), drive_kp, drive_ki, drive_kd, drive_starti, drive_settle_error, drive_settle_time, drive_timeout);
  float start_angle_deg = to_deg(atan2(X_target-get_X_position(),Y_target-get_Y_position()));
  PID headingPID(start_angle_deg-get_absolute_heading(), heading_kp, heading_ki, heading_kd, heading_starti);
  bool line_settled = false;
  bool prev_line_settled = is_line_settled(X_target, Y_target, start_angle_deg, get_X_position(), get_Y_position());
  while(!drivePID.is_settled()){
    line_settled = is_line_settled(X_target, Y_target, start_angle_deg, get_X_position(), get_Y_position());
    if(line_settled && !prev_line_settled){ break; }
    prev_line_settled = line_settled;

    float drive_error = hypot(X_target-get_X_position(),Y_target-get_Y_position());
    float heading_error = reduce_negative_180_to_180(to_deg(atan2(X_target-get_X_position(),Y_target-get_Y_position()))-get_absolute_heading());
    float drive_output = drivePID.compute(drive_error);

    float heading_scale_factor = cos(to_rad(heading_error));
    drive_output*=heading_scale_factor;
    heading_error = reduce_negative_90_to_90(heading_error);
    float heading_output = headingPID.compute(heading_error);

    if (drive_error<drive_settle_error) { heading_output = 0; }

    if(heading_output > heading_max_speed){
      heading_output = heading_max_speed;
    }

    if(heading_output < -heading_max_speed){
      heading_output = -heading_max_speed;
    }

    float left_output = drive_output + heading_output;
    float right_output = drive_output - heading_output;

    printf("%.2f\n", get_absolute_heading());

    LeftMotor1.spin(vex::directionType::fwd, left_output*0.128, voltageUnits::volt);
   RightMotor1.spin(vex::directionType::fwd, right_output*0.128, voltageUnits::volt);
   LeftMotor2.spin(vex::directionType::fwd,left_output*0.128, voltageUnits::volt);
   RightMotor2.spin(vex::directionType::fwd, right_output*0.128, voltageUnits::volt);
   LeftMotor3.spin(vex::directionType::fwd, left_output*0.128, voltageUnits::volt);
   RightMotor3.spin(vex::directionType::fwd, right_output*0.128, voltageUnits::volt);

   if (b_steps != -1) {
      if (b_point >= fabs(drive_error)) {
        steps = b_steps;
        b_steps = -1;
      }
    }

    sleep(10);
  }
}




PID::PID(float error, float kp, float ki, float kd, float starti) :
  error(error),
  kp(kp),
  ki(ki),
  kd(kd),
  starti(starti)
{};



PID::PID(float error, float kp, float ki, float kd, float starti, 
float settle_error, float settle_time, float timeout) :
  error(error),
  kp(kp),
  ki(ki),
  kd(kd),
  starti(starti),
  settle_error(settle_error),
  settle_time(settle_time),
  timeout(timeout)
{};



PID::PID(float error, float kp, float ki, float kd, float starti, 
float settle_error, float settle_time, float timeout, float update_period) :
  error(error),
  kp(kp),
  ki(ki),
  kd(kd),
  starti(starti),
  settle_error(settle_error),
  settle_time(settle_time),
  timeout(timeout),
  update_period(update_period)
{};



float PID::compute(float error){
  if (fabs(error) < starti){
    accumulated_error+=error;
  }
  // Checks if the error has crossed 0, and if it has, it eliminates the integral term.
  if ((error>0 && previous_error<0)||(error<0 && previous_error>0)){ 
    accumulated_error = 0; 
  }

  output = kp*error + ki*accumulated_error + kd*(error-previous_error);

  previous_error=error;

  if(fabs(error)<settle_error){
    time_spent_settled+=10;
  } else {
    time_spent_settled = 0;
  }

  time_spent_running+=10;

  return output;
}



bool PID::is_settled(){
  if (time_spent_running>timeout && timeout != 0){
    return(true);
  } // If timeout does equal 0, the move will never actually time out. Setting timeout to 0 is the 
    // equivalent of setting it to infinity.
  if (time_spent_settled>settle_time){
    return(true);
  }
  return(false);
}








void test1() {
  LeftMotor1.spin(fwd, 100, pct);
  wait(150);
  LeftMotor1.stop();
  wait(150);
  LeftMotor1.spin(fwd, -100, pct);
  wait(150);
  testmode = 0;
}


void test2() {
  LeftMotor2.spin(fwd, 100, pct);
  wait(150);
  LeftMotor2.stop();
  wait(150);
  LeftMotor2.spin(fwd, -100, pct);
  wait(150);
  testmode = 0;
}


void test3() {
  RightMotor1.spin(fwd, 100, pct);
  wait(150);
  RightMotor1.stop();
  wait(150);
  RightMotor1.spin(fwd, -100, pct);
  wait(150);
  testmode = 0;
}


void test4() {
  RightMotor2.spin(fwd, 100, pct);
  wait(150);
  RightMotor2.stop();
  wait(150);
  RightMotor2.spin(fwd, -100, pct);
  wait(150);
  testmode = 0;
}

void test5() {
  RightMotor3.spin(fwd, 100, pct);
  wait(150);
  RightMotor3.stop();
  wait(150);
  RightMotor3.spin(fwd, -100, pct);
  wait(150);
  testmode = 0;
}


void test6() {
 LeftMotor3.spin(fwd, 100, pct);
  wait(150);
 LeftMotor3.stop();
  wait(150);
LeftMotor3.spin(fwd, -100, pct);
  wait(150);
  testmode = 0;
}

void RunSonarTo(double speed_limit, int distance,int err__1,int change_steps,int start_point,double newgyro,int mode,int outtime) //用前面超声波控制距离的pid前进函数
{
  //PID参数
  double Kp = 0;
  double Ki = 0;
  double Kd = 0;

  //积分、微分参数
  double  EI = 0.0,ED = 0.0;
  double err_now =0;

  //判断使用1或2号传感器
  if(mode == 1)  err_now = Distance1.objectDistance(mm) - distance;
  if(mode == 2)  err_now = Distance2.objectDistance(mm) - distance;
  else err_now = Distance1.objectDistance(mm) - distance;

  //其他参数
  double returnangle =Inertial1.rotation(degrees);
  double err_last = err_now;
  double outputL = 0,outputR = 0;
  double K_gyro = 0.6;
  double angle_err = 0;

  T4.clear();

  //选择PID参数
  if(fabs(err_now)>=0&&fabs(err_now)<50)Kp=0.4;Ki=0;Kd=10;
  if(fabs(err_now)>=50&&fabs(err_now)<100)Kp=0.21;Ki=0;Kd=5;
  if(fabs(err_now)>=100&&fabs(err_now)<200)Kp=0.165;Ki=0;Kd=4;
  if(fabs(err_now)>=200&&fabs(err_now)<300)Kp=0.135;Ki=0;Kd=4;
  if(fabs(err_now)>=300&&fabs(err_now)<400)Kp=0.13;Ki=0;Kd=4;
  if(fabs(err_now)>=400&&fabs(err_now)<600)Kp=0.101;Ki=0;Kd=4;
  if(fabs(err_now)>=600&&fabs(err_now)<800)Kp=0.095;Ki=0;Kd=4;
  if(fabs(err_now)>=800&&fabs(err_now)<1200)Kp=0.093;Ki=0;Kd=4;
  if(fabs(err_now)>=1200&&fabs(err_now)<1400)Kp=0.087;Ki=0;Kd=4;
  if(fabs(err_now)>=1400)Kp=0.085;Ki=0;Kd=4;

  //特殊情况参数
  // Kp=0.085,Ki=0,Kd=4;

  while (1) {

    //线程

        
   if (change_steps != -1) {
      if (start_point >= fabs( err_now )) {
        steps = change_steps;
        change_steps = -1;
      }
   }





    // 微积分计算
      int k;
      if(mode == 1)  k = Distance1.objectDistance(mm);
      if(mode == 2)  k = Distance2.objectDistance(mm);
      else k = Distance1.objectDistance(mm);
      
    if(k==0) k=999999;
    if(mode == 1){
      err_now = k - distance;
      EI = EI + err_now;
      ED = err_now - err_last;
      err_last = err_now;    
      angle_err = calculateAngleError(newgyro , returnangle);
    }
     else if(mode == 2){
      err_now = distance-k;
      EI = EI + err_now;
      ED = err_now - err_last;
      err_last = err_now;    
      angle_err = calculateAngleError(newgyro , returnangle);
    }
    if (fabs(angle_err) < 1)   angle_err = 0;

      //计算输出
      outputL = Kp * err_now + Ki * EI + Kd * ED;
      outputR = outputL - K_gyro * (angle_err);

    // 限制输出值
    if (outputL > fabs(speed_limit)) outputL = sgn(outputL)*speed_limit;
    if (outputR > fabs(speed_limit)) outputR = sgn(outputR)*speed_limit;
    
    // 控制电机
      // if(mode == 1){
    LeftMotor1.spin(vex::directionType::fwd, outputL*0.128, voltageUnits::volt);
    RightMotor1.spin(vex::directionType::fwd, outputR*0.128, voltageUnits::volt);
    LeftMotor2.spin(vex::directionType::fwd, outputL*0.128, voltageUnits::volt);
    RightMotor2.spin(vex::directionType::fwd, outputR*0.128, voltageUnits::volt);
    LeftMotor3.spin(vex::directionType::fwd, outputL*0.128, voltageUnits::volt);
    RightMotor3.spin(vex::directionType::fwd, outputR*0.128, voltageUnits::volt); 
// }
//     else  if(mode == 2){
//     LeftMotor1.spin(vex::directionType::fwd, -outputL*0.128, voltageUnits::volt);
//     RightMotor1.spin(vex::directionType::fwd, -outputR*0.128, voltageUnits::volt);
//     LeftMotor2.spin(vex::directionType::fwd, -outputL*0.128, voltageUnits::volt);
//     RightMotor2.spin(vex::directionType::fwd, -outputR*0.128, voltageUnits::volt);
//     LeftMotor3.spin(vex::directionType::fwd, -outputL*0.128, voltageUnits::volt);
//     RightMotor3.spin(vex::directionType::fwd, -outputR*0.128, voltageUnits::volt); 
// }
    //停止条件
    if (fabs(err_now) < err__1 || T4.time() > outtime) {
      LeftMotor1.stop(vex::brakeType::coast);
      RightMotor1.stop(vex::brakeType::coast);
      LeftMotor2.stop(vex::brakeType::coast);
      RightMotor2.stop(vex::brakeType::coast);
      LeftMotor3.stop(vex::brakeType::coast);
      RightMotor3.stop(vex::brakeType::coast);
      break;
    } 
  }

  steps=0;
}

///////////////////////////////////////////////////////////////////////////////////
