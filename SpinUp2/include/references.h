//define all motor ports constant variables here
/*drivetrain motor ports*/
#define FLMotorPort 1
#define FRMotorPort 9
#define BLMotorPort 17
#define BRMotorPort 16
/*shooter motor ports*/
#define ShooterFMotorPort 2
#define ShooterBMotorPort 18
/*collector ports*/
#define CollectorPortA 12
#define CollectorPortB 4

//define all sensor ports constant variables here
//#define ImuPort 2
//#define DistanceSensorPort 9
//#define RotationPort 21

//define all ADI ports here
#define ShooterPistonPort 'C'

#define CannonAPistonPort 'A'
#define CannonBPistonPort 'B'

 //declare global motor object variables here
 /*drivetrain motor variables*/
extern pros::Motor FLMotor;
extern pros::Motor FRMotor;
extern pros::Motor BLMotor;
extern pros::Motor BRMotor;
 /*shooter motor variables*/
extern pros::Motor ShooterFMotor;
extern pros::Motor ShooterBMotor;
/*collector motor variables*/
extern pros::Motor CollectorMotorA;
extern pros::Motor CollectorMotorB;

 //declare global controller object variable here
extern pros::Controller master;
extern pros::Controller partner;

//declare global sensor object variables here
//extern pros::Imu ImuSensor;
//extern pros::Distance DistanceSensor;
//extern pros::Rotation RotationSensor;
/**
extern pros::ADIGyro gyro;
**/
//declare global piston object variables here
extern pros::ADIDigitalOut piston;

extern pros::ADIDigitalOut cannonA;
extern pros::ADIDigitalOut cannonB;

//declare global variables that map controller joysticks for drivetrain variables
extern int LeftFrontControl;
extern int RightFrontControl;
extern int LeftBackControl;
extern int RightBackControl;
extern int power;
extern int turn;
extern int shift;

//declare drive train function prototype
/*drive train task thread function prototype*/
void DriveTrain_fn(void* param);
/*drive train functions*/
bool AtDistanceDriveGoal(int);
void Drive(double, int);
void DriveVel(int);
void Turn(double, int);
void Shift(double, int);

//declare shooter function prototype
void Shooter_fn(void* param);
void ShooterMotor(double, int);

void ShooterPiston();
void ShooterVel(int);

//declare launcher function prototype
void Launcher_fn(void* param);
void Launcher();

//declare collector function prototype
void Collector_fn(void* param);
void CollectorMotor(double, int);
void CollectorVel(int);
//bool AtDistanceCollectorGoal(int);

//declare functions for antonomous.cpp
void LeftOne();
void LeftTwo();
void RightOne();
void RightTwo();
void Shell();

void SkillsAutonOne();
void SkillsAutonTwo();
/* variables and functions for auton selector */
//deckare autonselector - LED on screen auton selection indicator
extern int autonselector;
//declare string array "titles[]" as constant to store auto script function names for LED display
extern const char *titles[7];
//declare an array of function pointers for all auton script functions
extern void (*scripts[7])();
//declare auton script runner function - to be called in the main
//or you can directly call through function pointer array - scripts[autonselector]();
void LCDScriptExecute();
