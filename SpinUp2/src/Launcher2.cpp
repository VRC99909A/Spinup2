#include "main.h"


void Launcher(){
    cannonA.set_value(true);
    cannonB.set_value(true);
    pros::delay(200);
    cannonA.set_value(false);
    cannonB.set_value(false);
    //pros::delay(20);
}

//thread for all shooter controls
void Launcher_fn(void* param) {
  while (true) {
    //cannonA.set_value(false);
    //cannonB.set_value(false);
    if (master.get_digital(DIGITAL_A) && master.get_digital(DIGITAL_B)) { //Launcher mech
      Launcher();
    //pros::delay(20);
    }
  }
}