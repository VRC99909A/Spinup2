#include "main.h"


void CollectorMotor(double distance, int speed){
    CollectorMotorA.set_brake_mode(pros::E_MOTOR_BRAKE_HOLD);
    CollectorMotorB.set_brake_mode(pros::E_MOTOR_BRAKE_HOLD);
    CollectorMotorA.move_relative(distance, speed);
    CollectorMotorB.move_relative(distance, speed);
}

 void CollectorVel(int power) {
  CollectorMotorA.move_voltage(power);
  CollectorMotorB.move_voltage(power);
}


// thread for all collector controls
void Collector_fn(void* param) {

  CollectorMotorA.set_brake_mode(pros::E_MOTOR_BRAKE_HOLD);
  CollectorMotorB.set_brake_mode(pros::E_MOTOR_BRAKE_HOLD);

  while (true) {

    if (master.get_digital(DIGITAL_R1)) {
      CollectorMotorA.move_voltage(10000); //max voltage 12000
      CollectorMotorB.move_voltage(10000); //max voltage 12000
      //pros::delay(20);
    }
    else if (master.get_digital(DIGITAL_R2)) {
      CollectorMotorA.move_voltage(-8000); //max voltage 12000
      CollectorMotorB.move_voltage(-8000); //max voltage 12000
      pros::delay(10);
      CollectorMotorA.move_voltage(0); //max voltage 12000
      CollectorMotorB.move_voltage(0); //max voltage 12000
    }

  }

}
