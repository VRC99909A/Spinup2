#include "main.h"

void LeftOne(){
    ShooterVel(-8000);
    CollectorVel(-4000);
    Drive(50, 50);
    pros::delay(1000);

    CollectorVel(0);
    pros::delay(500);

    Drive(-130, 25);
    pros::delay(1000);

    
    Turn(-20, 50);
        do {
            pros::delay(20);
        } while (!AtDistanceDriveGoal(5));

    pros::delay(2000);

    piston.set_value(true);

    CollectorVel(4000);
    pros::delay(3000);

    ShooterVel(0);
    CollectorVel(0);
    piston.set_value(false);
    Drive(50, 50);

}

/**Shoot 2 discs and change roller color + shoot 3 discs in middle of field**/
void LeftTwo(){

    ShooterVel(-15000);
    CollectorVel(-4000);
    Drive(50, 50);
    pros::delay(1000);

    CollectorVel(0);
    pros::delay(500);

    Drive(-130, 25);
    pros::delay(1000);

    
    Turn(-18, 50);
        do {
            pros::delay(20);
        } while (!AtDistanceDriveGoal(5));

    pros::delay(2000);

    CollectorVel(4000);
    pros::delay(2500);

    ShooterVel(0);
    CollectorVel(0);
    Drive(50, 50);



    Turn(-310, 50);
        do {
            pros::delay(20);
        } while (!AtDistanceDriveGoal(5));

    pros::delay(1000);

    Drive(1200, 75);
    pros::delay(2200);

    CollectorVel(8000);
    Drive(200, 50);
    pros::delay(3500);
    CollectorVel(0);
    ShooterVel(-12000);

    //Shooting time
    Turn(200, 50);
        do {
            pros::delay(20);
        } while (!AtDistanceDriveGoal(5));

    pros::delay(1000);

    CollectorVel(5000);
    

}

/**comment**/
void RightOne() {
    //shooter faces away from us
    Drive(-500, 50);
        do {
            pros::delay(20);
        } while (!AtDistanceDriveGoal(5));

    pros::delay(2000);


    Turn(-215, 50);
        do {
            pros::delay(20);
        } while (!AtDistanceDriveGoal(5));

    pros::delay(2000);
    
    CollectorVel(-4000);
    Drive(50, 50);
    pros::delay(1000);
    
    Drive(-50, 50);
}

/**comment**/
void RightTwo() {

    ShooterVel(-6000);
    pros::delay(2000);
    CollectorVel(-4000);
    pros::delay(3000);


    Drive(500, 50);
        do {
            pros::delay(20);
        } while (!AtDistanceDriveGoal(5));

    pros::delay(1500);


    Turn(215, 50);
        do {
            pros::delay(20);
        } while (!AtDistanceDriveGoal(5));

    pros::delay(1500);
    
    CollectorVel(-4000);
    Drive(50, 50);
    pros::delay(1000);
    
    Drive(-50, 50);
}

/**comment**/
void Shell(){
    ShooterVel(-10000);
    CollectorVel(-4000);
    Drive(50, 50);
    pros::delay(1000);

    CollectorVel(0);
    pros::delay(500);

    Drive(-130, 25);
    pros::delay(1000);

    
    Turn(300, 50);
        do {
            pros::delay(20);
        } while (!AtDistanceDriveGoal(5));

    pros::delay(2000);

    CollectorVel(4000);
    pros::delay(3000);

    ShooterVel(0);
    CollectorVel(0);
    Drive(50, 50);
}





/**varirables and functions array for auton selector**/
int autonselector = 0;
//define and initialize string array "titles[]" as constant
const char *titles[] = {"LeftOne   ", "LeftTwo   ", "RightOne  ", "RightTwo  ", "Shell     ", "SkillsOne ", "SkillsTwo "};

//define and initialize an array of function pointers for all auton functions
void (*scripts[])() = {&LeftOne, &LeftTwo, &RightOne, &RightTwo, &Shell, &SkillsAutonOne, &SkillsAutonTwo};

//define auton script runner function - run the selected auton script through on screen "autonselector"
void LCDScriptExecute() {scripts[autonselector]();}
