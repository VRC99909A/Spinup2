#include "main.h"

bool AtDistanceBackClawGoal(int threshold) {
  return (abs((int)(BackClawMotor.get_position()-BackClawMotor.get_target_position())) > threshold);
}

bool AtDistanceBackClawGoalMax(int threshold) {
  return ((int)(BackClawMotor.get_position()) > threshold);
}

bool AtDistanceBackClawGoalMin(int threshold) {
  return ((int)(BackClawMotor.get_position()) < threshold);
}


void BackClaw(double distance, int speed){
    BackClawMotor.set_brake_mode(pros::E_MOTOR_BRAKE_HOLD);
    BackClawMotor.move_relative(distance, speed);
}

//thread for all claw controls
void BackClaw_fn(void* param) {

  BackClawMotor.set_brake_mode(pros::E_MOTOR_BRAKE_HOLD);

  int rot_limit_max, rot_limit_error_min, rot_limit_error_max, rot_limit_min;
  rot_limit_error_min = 100;
  rot_limit_error_max = 1000;
  rot_limit_max = 32200; //was 170
  rot_limit_min = 35800;
  RotationSensor.reset();
  do{
    if (master.get_digital(DIGITAL_X)){
      BackClawMotor.move_velocity(12000); //5000
      do {
        pros::delay(20);
      } while (RotationSensor.get_angle() > rot_limit_max+1500 || RotationSensor.get_angle() < rot_limit_error_max);
      pros::delay(20);
      //pros::delay(20);
    }
    else if (master.get_digital(DIGITAL_B) && RotationSensor.get_angle() < rot_limit_min) {
      BackClawMotor.move_velocity(-50); //-5000
      do {
        pros::delay(20);
      } while (RotationSensor.get_angle() < rot_limit_min);
      pros::delay(20);
      //pros::delay(20);
    }
    else {
      if (rot_limit_error_min < RotationSensor.get_angle() - rot_limit_max && RotationSensor.get_angle() - rot_limit_max < rot_limit_error_max){
        BackClawMotor.move_velocity(2); //5000
        do {
          pros::delay(20);
        } while (RotationSensor.get_angle() > rot_limit_max);
        pros::delay(20);
      }
      else if (rot_limit_error_min <  rot_limit_max - RotationSensor.get_angle() && rot_limit_max - RotationSensor.get_angle() < rot_limit_error_max){
        BackClawMotor.move_velocity(-2); //5000
        do {
          pros::delay(20);
        } while (RotationSensor.get_angle() < rot_limit_max);
        pros::delay(20);
      }
      else{
          BackClawMotor.move_velocity(0);
      }
      pros::delay(20);
    }
  }while(true);

}
