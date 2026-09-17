#include "vex.h"
using namespace vex;
void autonomous(void) {

  switch ( auton ) {
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
    default: break;
  }
  AllMotorStop(0);
  //BaseMotorReset();
}


