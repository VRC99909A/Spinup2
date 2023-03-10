//define all motor ports constant variables here
/*drivetrain motor ports*/
#define FLMotorPort 1
#define FRMotorPort 10
#define BLMotorPort 17
#define BRMotorPort 16
/*ring belt motor ports*/
#define LiftMotorPort 4
/*front claw motor port*/
#define ClawMotorPort 8
/*back claw motor port*/
#define BackClawMotorPort 3
/*snap claw motor port*/
#define SnapMotorPort 11
//port 4 fried - old brain
//port 5 fried - old brain
//port 7 fried - old brain
//port 12 fried - old brain
//port 13 fried - old brain
//port 14 fried - old brain
//port 15 fried - old brain
//port 19 fried - old brain
//port 20 fried - old brain
//define all sensor ports constant variables here
#define ImuPort 2
#define DistanceSensorPort 9
#define RotationPort 21

 //declare global motor object variables here
 /*drivetrain motor variables*/
extern pros::Motor FLMotor;
extern pros::Motor FRMotor;
extern pros::Motor BLMotor;
extern pros::Motor BRMotor;
 /*ring belt motor variables*/
extern pros::Motor LiftMotor;
/*front claw motor variables*/
extern pros::Motor ClawMotor;
/*back claw motor variables*/
extern pros::Motor BackClawMotor;
/*snap claw motor variables*/
extern pros::Motor SnapMotor;

 //declare global controller object variable here
extern pros::Controller master;
extern pros::Controller partner;

//declare global sensor object variables here
extern pros::Imu ImuSensor;
extern pros::Distance DistanceSensor;
extern pros::Rotation RotationSensor;
/**
extern pros::ADIGyro gyro;
**/

//declare global variables that map controller joysticks for drivetrain variables
extern int LeftControl;
extern int RightControl;
extern int power;
extern int turn;

//declare drive train function prototype
/*drive train task thread function prototype*/
void DriveTrain_fn(void* param);
/*drive train functions*/
bool AtDistanceDriveGoal(int);
void Drive(double, int);
void DriveVel(int);
void Rotate(double, int);

void TurnLeftToHeading(double target);
void TurnRightToHeading(double target);
void TurnLeftToZero();
void TurnRightToZero();
void CorrectToZero();
void TurnLeftDegrees(double degrees);

//declare ring belt function prototype
void Lift_fn(void* param);
void Lift(double, int);

bool AtDistanceLiftGoal(int);

//declare front claw function prototype
void Claw_fn(void* param);
void Claw(double, int);

bool AtDistanceClawGoal(int);

//declare back claw function prototype
void BackClaw_fn(void* param);
void BackClaw(double, int);

bool AtDistanceBackClawGoal(int);
bool AtDistanceBackClawGoalMin(int);
bool AtDistanceBackClawGoalMax(int);

//declare front claw function prototype
void Snap_fn(void* param);
void Snap(double, int);

bool AtDistanceSnapGoal(int);

//declare functions for antonomous.cpp
void LeftOne();
void LeftTwo();
void LeftWild();
void RightOne();
void RightTwo();
void BothOne();
void BothTwo();
void LeftMiddle();
void Shell();

void SkillsAutonOne();
void SkillsAutonTwo();
/* variables and functions for auton selector */
//deckare autonselector - LED on screen auton selection indicator
extern int autonselector;
//declare string array "titles[]" as constant to store auto script function names for LED display
extern const char *titles[11];
//declare an array of function pointers for all auton script functions
extern void (*scripts[11])();
//declare auton script runner function - to be called in the main
//or you can directly call through function pointer array - scripts[autonselector]();
void LCDScriptExecute();
