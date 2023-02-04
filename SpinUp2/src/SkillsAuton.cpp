#include "main.h"

/**Start of SkillsAutonOne**/
void SkillsAutonOne(){
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
    Drive(-50, 50);

    Turn(-20, 50);
        do {
            pros::delay(20);
        } while (!AtDistanceDriveGoal(5));

    pros::delay(2000);

    Drive(50, 50);

    Launcher();
  
}   

/**Start of SkillsAutonTwo**/
//start on the right side
void SkillsAutonTwo(){
    piston.set_value(true);
    ShooterVel(-7500);
    CollectorVel(4000);
    pros::delay(4000); //shoots two preloads into high goal
    piston.set_value(false);
    CollectorVel(0);
    ShooterVel(0);

    //make a method for line 59-83 later
    CollectorVel(10000);
    Drive(150, 50);
    pros::delay(1000);
                                        //collects first match load
    Drive(-150, 50);
    pros::delay(1000);


    Drive(150, 50);
    pros::delay(1000);
                                        //collects second match load
    Drive(-150, 50);
    pros::delay(1000);


    Drive(150, 50);
    pros::delay(1000);
    ShooterVel(-7500);
                                        //collects third match load
    Drive(-150, 50);
    CollectorVel(0);
    pros::delay(1000);
    piston.set_value(true);
    CollectorVel(4000);
    pros::delay(60000); //shoots three match loads into high goal



}
