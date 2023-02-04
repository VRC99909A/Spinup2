#include "main.h"

//define all motors here
/**pros::Motor::Motor_object ( const std::uint8_t port,
                     const pros::motor_gearset_e_t gearset,
                     const bool reverse,
                     const pros::motor_encoder_units_e_t encoder_units );
**/
/*drivetrain motors - green gearset*/
pros::Motor FLMotor(FLMotorPort, pros::E_MOTOR_GEARSET_18, true, pros::E_MOTOR_ENCODER_DEGREES);
pros::Motor FRMotor(FRMotorPort, pros::E_MOTOR_GEARSET_18, false, pros::E_MOTOR_ENCODER_DEGREES);
pros::Motor BLMotor(BLMotorPort, pros::E_MOTOR_GEARSET_18, true, pros::E_MOTOR_ENCODER_DEGREES);
pros::Motor BRMotor(BRMotorPort, pros::E_MOTOR_GEARSET_18, false, pros::E_MOTOR_ENCODER_DEGREES);
/*shooter motors - blue gearset*/
pros::Motor ShooterFMotor(ShooterBMotorPort, pros::E_MOTOR_GEARSET_06, true, pros::E_MOTOR_ENCODER_DEGREES);
pros::Motor ShooterBMotor(ShooterFMotorPort, pros::E_MOTOR_GEARSET_06, false, pros::E_MOTOR_ENCODER_DEGREES);
/*collector motors - blue gearset*/
pros::Motor CollectorMotorA(CollectorPortA, pros::E_MOTOR_GEARSET_06, false, pros::E_MOTOR_ENCODER_DEGREES);
pros::Motor CollectorMotorB(CollectorPortB, pros::E_MOTOR_GEARSET_06, true, pros::E_MOTOR_ENCODER_DEGREES);
/*back claw motors - red gearset*/
//pros::Motor SnapMotor(SnapMotorPort, pros::E_MOTOR_GEARSET_36, true, pros::E_MOTOR_ENCODER_DEGREES);
//define all controllers here
/**
pros::Controller::Controller ( pros::controller_id_e_t id )

id 	-> The ID of the controller (e.g. the master or partner controller)
Must be one of E_CONTROLLER_MASTER or E_CONTROLLER_PARTNER
**/
pros::Controller master(pros::E_CONTROLLER_MASTER);
//pros::Controller partner(pros::E_CONTROLLER_PARTNER);

//define all sensors here
//pros::Imu ImuSensor(ImuPort);
//pros::Distance DistanceSensor(DistanceSensorPort);
//pros::Rotation RotationSensor(RotationPort);

//define pistons here
pros::ADIDigitalOut piston (ShooterPistonPort,false);

pros::ADIDigitalOut cannonA (CannonAPistonPort, false);
pros::ADIDigitalOut cannonB (CannonBPistonPort, false);


/** 
pros::ADIGyro::ADIGyro ( std::uint8_t port,
                         double multiplier = 1 )

port 	The ADI port number (from 1-8, ‘a’-‘h’, ‘A’-‘H’) to initialize as a gyro
multiplier 	A scalar value that will be mutliplied by the gyro heading value
**/
//pros::ADIGyro gyro(GyroPort);
