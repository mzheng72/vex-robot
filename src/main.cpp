/*-----------------------------------------------------------------------------*/
/*   创未来机器人程序，仅限内部使用，不可外传                                      */
/*   历史队号：56666/56787/56789/999/988/96666/9698/7890/10999/10988/8432/7755  */
/*   此程序经历多代程序员积累，望珍惜，站在巨人的肩膀上创造吧                       */
/*   经过努力你有可能还无法获得冠军，但是始终要保证着一颗追逐冠军的心                */
/*   越努力约幸运，享受参赛过程，不断拼搏                                         */
/*   世锦赛冠军队号：2014:7268B，2016：9698B，2021：7890E,2022: 9698B,2023:9698B/38X */
/*                                                                             */
/*-----------------------------------------------------------------------------*/
#include "vex.h"
using namespace vex;
competition Competition;

void pre_auton(void) { vexcodeInit();}
extern void autonomous( void );
extern void drivercontrol( void );
extern int screenchoose( void ); 

int main()  {

  pre_auton();
  Competition.autonomous(autonomous);
  Competition.drivercontrol(drivercontrol);
  vex::task screen(screenchoose);

  while (true) {
    wait(100);
  }

}
