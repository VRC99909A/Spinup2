#include "main.h"


void ShooterPiston(){  
  //piston.set_value(true);
  //pros::delay(200);
  //piston.set_value(false);
}

/**
void Launcher(){
    cannonA.set_value(true);
    cannonB.set_value(true);
    pros::delay(200);
    cannonA.set_value(false);
    cannonB.set_value(false);
    //pros::delay(20);
}
**/

void ShooterMotor(double distance, int speed){
    ShooterFMotor.move_relative(distance, speed);
    ShooterBMotor.move_relative(distance, speed);
}

void ShooterVel(int power) {
  ShooterFMotor.move_voltage(power);
  ShooterBMotor.move_voltage(power);
}

//thread for all shooter controls
void Shooter_fn(void* param) {

  ShooterFMotor.set_brake_mode(pros::E_MOTOR_BRAKE_BRAKE);
  ShooterBMotor.set_brake_mode(pros::E_MOTOR_BRAKE_BRAKE);
  int counter_L1 = 0;
  int counter_L2 = 0;
  while
   (true) {

    //if (master.get_digital(DIGITAL_L1) && counter_L1 == 0) {
        //ShooterFMotor.move_voltage(-5500);
        //ShooterBMotor.move_voltage(-5500);
        //pros::delay(1000);
        //counter_L1 = 1;
        //counter_L2 = 0;
    //}
    //else if (master.get_digital(DIGITAL_L1) && counter_L1 == 1){
    //    ShooterFMotor.move_voltage(0);
    //    ShooterBMotor.move_voltage(0);
    //    pros::delay(1000);
    //    counter_L1 = 0;
    //    counter_L2 = 0;
    //}
    if (master.get_digital(DIGITAL_L1)) {
        piston.set_value(true);
        ShooterFMotor.move_voltage(-7500); //-7000
        ShooterBMotor.move_voltage(-7500);
        pros::delay(1000);
        CollectorMotorA.move_voltage(4000); //max voltage 12000
        CollectorMotorB.move_voltage(4000); //max voltage 12000
    }
    else if (master.get_digital(DIGITAL_L2)){
        piston.set_value(false);
        ShooterFMotor.move_voltage(0);
        ShooterBMotor.move_voltage(0);
        CollectorMotorA.move_voltage(0); //max voltage 12000
        CollectorMotorB.move_voltage(0); //max voltage 12000
        pros::delay(1000);
    }

   // if (master.get_digital(DIGITAL_DOWN)) { //Shooter mech
      //ShooterPiston();
      //pros::delay(20);
   // }

   // if (master.get_digital(DIGITAL_A) && master.get_digital(DIGITAL_B)) { //Launcher mech
     // Launcher();
    //pros::delay(20);
  //}
  }
}
