using namespace vex;
extern brain Brain;
extern controller Controller;

#define SCREEN_MAX_WIDTH 480//x
#define SCREEN_MAX_HEIGHT 272//y
#define sleep(a) vex::task::sleep(a)
#define CONSTRAIN(x, lower, upper) ( (x) < (lower) ? (lower) : ( (x) >( upper) ? (upper) :(x) ) )


extern motor LeftMotor1;
extern motor LeftMotor2;
extern motor RightMotor1;
extern motor RightMotor2;
extern motor RightMotor3;
extern motor LeftMotor3;

extern motor intake1;
extern motor intake2;
extern motor clip;
extern motor push;
extern motor push1;
extern motor catapult;
extern motor updown1;
extern motor updown2;
extern motor flywheel1 ;
extern motor flywheel2;

extern digital_out airpoweredA;
extern digital_out airpoweredB;
extern digital_out airpoweredC;
extern digital_out airpoweredD;
extern digital_out airpoweredE;
extern digital_out airpoweredG;
extern digital_out airpoweredH;


extern rotation Encoder1;
extern rotation Encoder2;
extern rotation Updownrotation;
extern gyro Gyro1;
extern pot Pot1;
extern limit Limit1;
extern limit Limit_push;
extern line Line1;
extern sonar Sonar1;
extern inertial Inertial1;
extern distance Distance1;
extern distance Distance2;
extern distance Distance3;
extern optical Optical1;
extern int CA1, CA2, CA3, CA4;
extern bool BtnL1, BtnL2, BtnR1, BtnR2, BtnA, BtnB, BtnX, BtnY, BtnUp, BtnDown, BtnLeft, BtnRight;
extern bool initializing;
extern bool SCREEN_ON;
extern bool BSCREEN_ON;
extern bool CSCREEN_ON;

extern const unsigned int PutPct[];
extern const unsigned int PutVol[];

extern int lock2;
extern int lock3 ;

extern int controlmode; 
extern int testmode;
extern double speedmode;
extern int count;
//extern double Intakemode;
//extern double Kspd;
extern bool auto_manual_select;
extern int intaking;
extern int pushing;
extern int pushing1;
extern int clipping;
extern int updowning;
extern int airpoweringA;
extern int airpoweringB;
extern int airpoweringC;
extern int airpoweringD;
extern int airpoweringE;
extern int airpoweringG;
extern int airpoweringH;

extern int side;
extern int Rooler_auto1_1;
extern int Rooler_auto2_1;
extern int Rooler_auto3_1;

extern int intake_control();

extern int UpDownGear ;
extern int PushGear;
// extern int U;
extern int Pushdegeree;


extern double kCA1 ;
extern double kCA2;
extern double kCA3 ;
extern double kCA4;
extern void RightMotorstop();
extern void LeftMotorstop();


extern double blindCA ;
extern int batteryalert_level ;
extern void TurnrightpidN(int max_speed=100,double aim=0,double howerr=0.7,double goals=0,int outtime=12000) ;
extern void TurnleftpidN(int max_speed=100,double aim=0,double howerr=0.7,double goals=0,int outtime=12000);

extern int LowUpdown;
extern int MiddleUpdown;

extern int flage;
extern int flage1;
extern int flage2;
extern int flage3;
extern int flage4;
extern int flage5;
extern int flage6;
extern int flage7;
extern int flage8;
extern int flage9;
extern int flage10;
extern int  flywheeling;
extern int flywheelrpm;
extern bool flage11;
extern int flage12;
extern int flage13;
extern int flage14;
extern int flage15;
extern int flage16;
extern int flage17;
extern int flage18;
extern int flage19;
extern int flage20;
extern int flage21;
extern int flage22;
extern int flage23;
extern int flage24;
extern int flage25;
extern int flage26;
extern int flage27;
extern int flage28;
extern int auton;
extern char zhanwei;
extern double dis;
extern double initialdis;
extern double  X_position;
extern double  Y_position;
extern double  WheelRadius;
extern double  Wheel_X_distance;
extern double  Wheel_Y_distance;
extern double  Gyrobefore_rad;
extern double  return_angle;

extern int CD;

extern double stsdouble;

extern int sgn(double number);
extern int setMotorPct(int Value);
extern int abs(double num);

extern void test1();
extern void test2();
extern void test3();
extern void test4();
extern void test5();
extern void test6();
extern void test7();
extern void test8();

extern vex::timer T1;
extern vex::timer T2;
extern vex::timer T3;
extern vex::timer T4;
extern vex::timer T5;
extern vex::timer TAUTO1_1;
extern vex::timer TAUTO1_2;
extern vex::timer TAUTO2_1;
extern vex::timer TAUTO2_2;
extern vex::timer TAUTO3_1;
extern vex::timer TAUTO3_2;
extern vex::timer TAUTO66_3;
extern vex::timer TACC;
extern vex::timer FINISH;
extern vex::timer TURN1;
extern vex::timer TURN2;
extern vex::timer T_intake;
extern vex::timer T_push;
extern vex::timer T_clip;
extern vex::timer T_updown;
extern vex::timer T_rooler;

extern int steps;
extern void  vexcodeInit( void );

extern void AllMotorStop(int mode);
extern void BaseMotorStop(int mode);
extern void IntakeStop(int mode);
extern void UpDownStop(int mode);
extern void PushStop(int mode);
extern void ClipStop(int mode);
extern void FlywheelStop(int mode );
extern void RoolerStop(int mode );
extern void CatapultStop(int mode );

extern void PushReset();
extern void BaseMotorReset();
extern void UpDownReset();
extern void ClipReset();
extern void FlywheelReset();
extern void CatapultReset() ;

extern void Left(int speedpct);
extern void Right(int speedpct);
extern void LeftVol(int vol_input);
extern void RightVol(int vol_input);
extern void Run(int basepct);
extern void RunVol(int basepct);
extern void Turn(int turnpct);
extern void Intake(int getpct);
extern void UpDown(int uppct);
extern void Push( int pushpct);
extern void Clip(int clippct);
extern void wait(int waittime);
extern void Flywheel(int flywheelpct) ;
extern void FlywheelVel(int vel_input);
extern void FlywheelVol(int vol_input);
extern void IntakeVol(int vol_input) ;
extern void PushVol(int vol_input) ;
extern void Rooler(int vol_input) ;
extern void UpdownVol(int vol_input);
extern void  CatapultVol(int vol_input);



extern void RunAuto(int basepct, int outtime);
extern void RunAuto2(int basepct,int basepct2, int outtime,int Ipec1=0,int Ipec2=0);
extern void RunVolAuto(int basepct, int outtime);
extern void TurnAuto(int basepct, int outtime);
extern void IntakeAuto(int getpct, int outtime);
extern void RoolerAuto(int basepct, int outtime);
extern void UpDownAuto(int uppct, int outtime);
extern void PushAuto(int pushpct2, int pushtime);
extern void ClipAuto(int clippct2, int cliptime);
extern void CatapultAuto(int basepct, int outtime);
extern void FlywheelAuto(int flywheelpct, int flywheeltime);
extern void FlywheelVelAuto(int flywheelpct, int outtime);
extern void FlywheelVolAuto(int flywheelpct, int outtime);

extern void UpDownencode(int pct,int degree);
extern void UpDownencodeN(int pct, int degree,int outtime, int p_point);
// extern void UpDownencodeTo(int pct, int degree);

extern void Pushencode(int pct, int degree);
extern void Runencode(int pct,int degree,int outtime=4000);
extern void Intakeencode(int pct, int degre);
extern void Clipencode(int pct, int degree);

extern void UpDowntask(int degree);
extern void Runpid(int maxpct, int encode, int outtime);
extern void Pushtask(int degree,int pct1);

extern void Runpid(int maxpct, int encode, int outtime);
extern void Turnpid(int maxpct, int encode, int outtime) ;
extern void Flywheelpid(int frpm, int change_steps=-1, int start_point=0) ;
extern void Flywheelvolpid(int frpm, int gear=1,int change_steps=-1, int start_point=0);

extern void auto2();
extern void auto1();
extern void auto3();
extern void auto4();
extern void auto5();
extern void auto6();
extern void auto7();
extern void auto8();
extern void auto9();
extern void auto10();
extern void auto11();
extern void autoA();
extern void autoB();


float reduce_0_to_360(float angle);

float reduce_negative_180_to_180(float angle);

float reduce_negative_90_to_90(float angle);

float to_rad(float angle_deg);

float to_deg(float angle_rad);
extern void LeftCircle(int maxpower, int deg1, int outtime);


extern void RunXY(double speed_limit, double targetX, double targetY,double err_1, double outtime);
extern void UpdateXY();
extern void RunXY_Straight(double speed_limit, double targetX, double targetY,double err_1, double outtime,int p_point);
extern void FaceToXY(double speed_limit, double targetX, double targetY,double err_1, double outtime);

 

extern void RunpidStraight(double speed_limit=70,int aim=100,double newgyro=0,double speed_limit2=40,int dec_point=-1,int change_steps=-1,int start_point=0,int outtime=1800,int p_point=0);
extern void RunpidStraightTo(double speed_limit=70,int aim=100,double newgyro=0,double speed_limit2=40,int dec_point=-1,int change_steps=-1,int start_point=0,int outtime=1800,int p_point=-1);
extern void Run_spin_pid(double speed_limit, int aim,double err_1,double speed_limit2, int dec_point, int change_steps,int start_point,int outtime, double newgyro, int p_point,int turn_point,int turn_side=2,int turn_right=0);
extern void RunpidsinleN(double speed_limitL=100,double speed_limitR=50, int aim=500,int change_steps=-1,int start_point=0,double Nerr=8,int outtime=5500);
extern void just_stop(int stopmod=1);
extern void RunpidTo(double speed_limit, int aim,double err_1,double speed_limit2, int dec_point, int change_steps,int start_point,int outtime, double newgyro, int p_point,int turn_point,int turn_side=2,int turn_right=0);

extern void RunLine(int v=80, int colour=60 ,int at_least_time=0);
extern void RunLineStraight(int v=80, int colour=60 ,int at_least_S=200);

extern double returnangle;

extern void TurnencodepidN(int aim,int newgyro,double speed_limit=40,double speed_limit2=30,int dec_point=-1,bool (*pf)(void)=NULL,int start_point=0);
extern void TurnpidSingle(int max_speed=100,double aim=0,double B=0.2,bool side=0, double Kp=2.4,int error=1,int switch_left=1,int switch_right=1,int outtime=900);
extern void TurnpidSingleTo(int max_speed=100,double aim=0,double B=0.2,bool side=0, double Kp=2.4,int error=1,int switch_left=1,int switch_right=1 ,int outtime=900 );
extern void RunAutoStraight(int v,int time);
extern void RunAutoStraightTo(int v, int time,int angle) ;

extern void just_run_straight(double output,double newgyro);
extern void just_run_straightTo(double output,double newgyro);

extern void IntakeReset();
extern void IntakeencodeTo(int pct,int degree);
extern void IntakeencodeFor(int pct,int degree);
extern void Intakeencode(int pct, int degree);

extern void PushencodeFor(int pct,int degree);
extern void PushencodeTo(int pct,int degree);

extern void UpDownencodeTo(int pct, int degree);
extern void UpDownencodeFor(int pct,int degree);

extern double SpeedLimit(int speed,int max=100);

extern void PIDmove(int Aim,int maxspeed=100,int StartIntegrate=100,int AccTime=500,int tolerance=8);
extern void PIDturn_1(int Aim);
extern void PIDTurn_encoder(int goal);

extern void front_sonar_run(int distance,double direction,int speed_limit=90,bool limit_acc=true);

extern void RunTouch(int v=60,int outtime=2500);
// extern void RunSonarTo(int distance=200,int speed_limit=80,double direction=0,bool limit_acc=0);
// extern void RunSonar(int distance=200,int speed_limit=80,double direction=0,bool limit_acc=0);

extern void SonarPID(int Aim=2000,int maxspeed=60);
// void RunSonarTo(int distance=200,int speed_limit=80,double direction=0,int err__1=20 ,bool limit_acc=0, int change_steps=-1,int start_point=0);
void RunSonar(int distance=200,int speed_limit=80,double direction=0,int err__1=20,bool limit_acc=0, int change_steps=-1,int start_point=0);
void RunSonarbackTo(int distance=200,int speed_limit=80,double direction=0,int err__1=20 ,bool limit_acc=0, int change_steps=-1,int start_point=0);
void RunSonarback(int distance=200,int speed_limit=80,double direction=0,int err__1=20,bool limit_acc=0, int change_steps=-1,int start_point=0);
void RunSonar_back_2(int distance=200,int speed_limit=80,double direction=0,int err__1=20,bool limit_acc=0, int change_steps=-1,int start_point=0);

extern void RunpidStraightN(double speed_limit=70, int aim=100,double err_1=5,double speed_limit2=40, int dec_point=-1, int change_steps=-1,int start_point=0,int outtime=18000,double newgyro=0,int p_point=-1);
//速度，距离，误差值，第二速度，减速点，运行多线程序号，运行线程距离，保护时间，修正方向,pid参数选择
extern void RunpidStraightNTo(double speed_limit=70, int aim=100,double err_1=5,double speed_limit2=40, int dec_point=-1, int change_steps=-1,int start_point=0,int outtime=18000,double newgyro=0,int p_point=-1);
//速度，距离，误差值，第二速度，减速点，运行多线程序号，运行线程距离，保护时间，修正方向（方位）,pid参数选择
extern void TurnpidN(int max_speed=100,double aim=0,double howerr=0.7,double goals=0,int outtime=12000); 
//速度，角度，误差，保护时间
extern void TurnpidNTo(int max_speed=100,double aim=0,double howerr=0.7,int outtime=12000);
//速度，角度（方位），误差，保护时间
extern void TurnpidLNTo(int max_speed=100,double min_speed=0,double aim=0,double howerr=0.7,int outtime=12000);

extern void RunVolpid(double aim=0,double threshold=0,double targetangle=0);

extern void TurnVolpidNTo(int max_speed=100, double aim=0, double howerr=0.7, int outtime=12000,int p_point=-1);

extern void TurnVolpidN(int max_speed=100, double aim=0, double howerr=0.7, int outtime=12000,int p_point=-1);

extern void TurnVolpidSingle(int max_speed=100, double aim=0, double B=1,bool side=1,double Kp=0.7, int error=1,int switch_left=0, int switch_right=0,int outtime=4000);

extern void fPIDTurn(double dDegrees, double P, double D);

extern void runturnvolpid(double aim=0, double threshold=10.0,double targetangle=0);

extern void RunVolpid(double aim,double newgyro,double threshold);

extern void set_location(float X_value,float Y_value);

extern void RunSonarTo(double speed_limit=80,int distance=200,int err__1=20 , int change_steps=-1,int start_point=0,double newgyro=0,int mode =1,int outtime=5000);
////////////////////////////////////////////////////////////////////////////////////////
float reduce_0_to_360(float angle);

float clamp(float input, float min, float max);

bool is_reversed(double input);

float to_volt(float percent);

extern void turn_drive_to_point(float X_target, float Y_target, float drive_min_speed, float drive_max_speed, float heading_max_speed, float drive_settle_error, float drive_settle_time, float drive_timeout, float drive_starti, float heading_starti, int p_point, int b_steps, float b_point);

bool is_line_settled(float desired_X, float desired_Y, float desired_angle_deg, float current_X, float current_Y);

class PID
{
public:
  float error = 0;
  float kp = 0;
  float ki = 0;
  float kd = 0;
  float starti = 0;
  float settle_error = 0;
  float settle_time = 0;
  float timeout = 0;
  float accumulated_error = 0;
  float previous_error = 0;
  float output = 0;
  float time_spent_settled = 0;
  float time_spent_running = 0;
  float update_period = 10;

  PID(float error, float kp, float ki, float kd, float starti);

  PID(float error, float kp, float ki, float kd, float starti, float settle_error, float settle_time, float timeout);

  PID(float error, float kp, float ki, float kd, float starti, float settle_error, float settle_time, float timeout, float update_period);

  float compute(float error);

  bool is_settled();
};

float clamp_min_voltage(float drive_output, float drive_min_voltage);

float left_voltage_scaling(float drive_output, float heading_output);

float right_voltage_scaling(float drive_output, float heading_output);

extern void drive_to_point(float X_target, float Y_target, float drive_min_speed, float drive_max_speed, float heading_max_speed, float drive_settle_error, float drive_settle_time, float drive_timeout, float drive_starti, float heading_starti, int p_point, int steps, float b_point);

extern void drive_to_pose(double X_target, double Y_target, double angle_target, double lead, double setback, double drive_min_speed, double drive_max_speed, double heading_max_speed, double drive_settle_error, double drive_settle_time, double drive_timeout, double drive_starti, double heading_starti, int p_point);

extern double initial_degree;

extern double calculateAngleError(double targetAngle , double currentAngle);