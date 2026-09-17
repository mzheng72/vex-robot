#include "vex.h"
using namespace vex;
using signature = vision::signature;
using code = vision::code;

brain  Brain;
controller Controller = controller();

motor LeftMotor1 = motor(PORT8, ratio6_1,1);//5
motor LeftMotor2 = motor(PORT9, ratio6_1,1);//6
motor LeftMotor3 = motor(PORT10, ratio6_1, 1);//7
motor RightMotor1 = motor(PORT3, ratio6_1, 0);//13
motor RightMotor2 = motor(PORT5, ratio6_1, 0);//14
motor RightMotor3 = motor(PORT7, ratio6_1,0);//15
motor intake1 = motor(PORT18, ratio6_1,  0);//
motor intake2 = motor(PORT4, ratio6_1, 0);
motor clip = motor(PORT11, ratio18_1, 0);
motor catapult = motor(PORT11, ratio36_1, 0);
motor push = motor(PORT11, ratio36_1, 0);
motor updown1 = motor(PORT17, ratio18_1,1);
motor updown2 = motor(PORT11, ratio18_1,0);
motor flywheel1 = motor(PORT11, ratio6_1, 1);
motor flywheel2 = motor(PORT11, ratio6_1, 0);
digital_out airpoweredA = digital_out(Brain.ThreeWirePort.A);
digital_out airpoweredB = digital_out(Brain.ThreeWirePort.B);
digital_out airpoweredC = digital_out(Brain.ThreeWirePort.C);
digital_out airpoweredD = digital_out(Brain.ThreeWirePort.D);
digital_out airpoweredE = digital_out(Brain.ThreeWirePort.E);
digital_out airpoweredG = digital_out(Brain.ThreeWirePort.H);
digital_out airpoweredH = digital_out(Brain.ThreeWirePort.H);

limit Limit1 =   limit(Brain.ThreeWirePort.H);

// sonar Sonar1 =   sonar(Brain.ThreeWirePort.E);
// limit Limit_push =   limit(Brain.ThreeWirePort.C);
rotation Encoder1 = rotation(PORT6,0);
rotation Encoder2 = rotation(PORT2,0);
rotation Updownrotation = rotation(PORT19,0);
inertial Inertial1 = inertial(PORT20);
optical Optical1 = optical(PORT15);
optical Optical2 = optical(PORT11);
distance Distance1 = distance(PORT1);//前距离传感器
distance Distance2 = distance(PORT21);//后距离传感器
distance Distance3 = distance(PORT14);
// optical Optical1 = optical(PORT20);

const unsigned int PutPct[101] = {
  0,  1,  2,  3,  4,  5,  5,  6,  6,  7,  
  7 , 7,  8,  8,  9,  9,  10, 11, 12, 13, 
  14, 15, 16, 16, 17, 18, 19, 20, 22, 23, 
  22, 24, 26, 28, 28, 29, 30, 31, 31, 32, 
  33, 34, 35, 36, 37, 38, 39, 40, 40, 41, 
  41, 41, 42, 43, 44, 45, 46, 46, 47, 48, 
  49, 50, 51, 52, 55, 57, 59, 61, 63, 65, 
  67, 69, 71, 73, 75, 77, 79, 81, 83, 85, 
  85, 88, 88, 91, 91, 94, 94, 95, 97, 97,
  100,
};
const unsigned int PutVol[101] = {
  0,  1,  2,  3,  4,  4,  4,  5,  5,  5,  
  6 , 6,  7,  7,  8,  8,   9, 10, 11, 12, 
  12, 14, 14, 16, 16, 18, 18, 20, 20, 22, 
  22, 24, 24, 26, 26, 27, 27, 28, 28, 29, 
  29, 30, 31, 31, 32, 32, 32, 33, 33, 34, 
  34, 35, 35, 36, 37, 37, 38, 39, 40, 40, 
  41, 41, 42, 43, 44, 45, 46, 46, 47, 48, 
  49, 50, 51, 52, 55, 57, 59, 61, 63, 65, 
  67, 69, 71, 73, 75, 77, 79, 81, 83, 85, 
  85, 88, 88, 91, 91, 94, 94, 95, 97, 97,
  100
};

bool initializing = false;
bool SCREEN_ON =true;//false为所有屏幕关闭
bool BSCREEN_ON =true;//false为主机屏幕关闭
bool CSCREEN_ON =true;//false为遥控器屏幕关闭
int lock2 = 48;
int lock3 = 0;

int controlmode = 1;
int testmode=0;
double speedmode = 0;
int count =0;
//double Intakemode = 0;
//double Kspd = 1;
bool auto_manual_select = false;
int intaking = 0;
int pushing = 0;
int clipping = 0;
int updowning = 0;
int  flywheeling = 0;
int flywheelrpm=0;

 int airpoweringA=0;
  int airpoweringB=0;
 int airpoweringC=0;
 int airpoweringD=0;
 int airpoweringE=0;
 int airpoweringG=0;
 int airpoweringH=1;
 
int UpDownGear = 7;
int PushGear=25;

int Pushdegeree=20;

double kCA1 = 1;  //右摇杆转弯系数
double kCA2 = 1;   //右摇杆直走系数

double kCA3 = 0.5;   //左摇杆直走系数
double kCA4 = 0.3;   //左摇杆转弯系数
double blindCA = 2;
int batteryalert_level=30;

int LowUpdown=30;
int MiddleUpdown=50;

int flage = 1;
int flage1 = 1;
int flage2 = 0;
int flage3 = 0;
int flage4=0;
int flage5=0;
int flage6=0;
int flage7=0;
int flage8=0;
int flage9=0;
int flage10=0;
bool flage11=true;
int flage12=2;
int flage13=0;
int flage14=0;
int flage15=0;
int flage16=1;
int flage17=0;
int flage18=1;
int flage19=0;
int flage20=0;
int flage21=0;
int flage22=0;
int flage23=0;
int flage24=0;
int flage25=0;
int flage26=0;
int flage27=0;
int flage28=0;
double X_position=0.0;
double Y_position=0.0;
double  WheelRadius=1;//从动轮半径（英寸）
double  Wheel_X_distance=1.5;//横向从动轮轮到旋转中线的位置
double  Wheel_Y_distance=-0.5;//纵向从动轮轮到旋转中心的位置
double  Gyrobefore_rad=0.0;
char zhanwei='R';


double dis=0;

double initialdis=78;
int side=2;
int auton = 0;
int Rooler_auto1_1=0;
int Rooler_auto2_1=0;
int Rooler_auto3_1=0;
int CD=0;

double return_angle=Inertial1.rotation(degrees);
double initial_degree = 0;

vex::timer T1;
vex::timer T2;
vex::timer T3;
vex::timer T4;
vex::timer T5;
vex::timer TAUTO1_1;
vex::timer TAUTO1_2;
vex::timer TAUTO2_1;
vex::timer TAUTO2_2;
vex::timer TAUTO3_1;
vex::timer TAUTO3_2;
vex::timer TAUTO66_3;
vex::timer TACC;
vex::timer FINISH;
vex::timer TURN1;
vex::timer TURN2;
vex::timer T_intake;
vex::timer T_push;
vex::timer T_clip;
vex::timer T_updown;
vex::timer T_rooler;

/////////////////////////

///////////////////////////

int steps=0;

int abs(double num)//取绝对值
{
  if(num>=0)return 1;
  else return -1;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////
// user function
