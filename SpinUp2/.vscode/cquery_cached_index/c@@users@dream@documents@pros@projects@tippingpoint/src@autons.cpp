#include "main.h"

/****auton function for scoring on goal on bridge****/
void LeftOne(){
  Lift(-500.0, 100);
  DriveVel(200);
  Claw(200.0, 100);
  do {
    pros::delay(20);
  } while (!AtDistanceClawGoal(5));
  Snap(-150.0, 100);
  Claw(-300.0, 100);
  pros::delay(800);
  //Drive towards mobile goa
  //use snap to get neutal mobile goal
  Snap(200.0, 100);
  pros::delay(150);
  DriveVel(0);
  Claw(200.0, 100);
  //back up a little
  DriveVel(-200);
  pros::delay(750);
  Claw(100.0, 100);
  pros::delay(750);
  Claw(-200.0, 100);
}



/**auton function for scoring on goal on bridge**/
void LeftTwo(){
  Lift(-500.0, 100);
  DriveVel(200);
  BackClaw(200.0, 100);
  Claw(200.0, 100);
  do {
    pros::delay(20);
  } while (!AtDistanceClawGoal(5));
  Snap(-150.0, 100);
  Claw(-300.0, 100);
  pros::delay(800);
  //Drive towards mobile goa
  //use snap to get neutal mobile goal
  Snap(200.0, 100);
  pros::delay(150);
  DriveVel(0);
  Claw(400.0, 100);
  //back up a little
  Drive(-50.0, 50);
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));

  Rotate(280.0, 100); //turn left
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  BackClaw(-200.0, 100);
  Drive(-300.0, 100);
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  Rotate(125.0, 100); //turn left
    do {
      pros::delay(20);
    } while (!AtDistanceDriveGoal(5));
  Drive(-350.0, 100);
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));

  //lift backclaw to capture middle tall goal
  Drive(-200.0, 50);
  BackClaw(200.0, 200); //lift BackClaw to capture alliance goal on the right
  do {
    pros::delay(20);
  } while (!AtDistanceBackClawGoal(10));
  pros::delay(500); //allow time for the backclaw to lift up

  Rotate(-525.0, 200); //turn left
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  pros::delay(500);
  Drive(-300.0, 200);
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  pros::delay(250);
  Rotate(-140.0, 100); //turn left
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  pros::delay(20);
  Drive(-500.0, 200);
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  pros::delay(250);

  Rotate(130.0, 100); //turn left
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  Drive(-1200.0, 200);
  pros::delay(900);
  BackClaw(-200.0, 200); //lift BackClaw to capture alliance goal on the right
  pros::delay(350);
  Drive(-200.0, 200);
  pros::delay(750);
  /*
  Drive(400.0, 200);
  Claw(250.0, 100);
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));

  Rotate(450.0, 200);
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  Drive(1000.0, 200);
  pros::delay(750);
  Drive(-400.0, 200);
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  pros::delay(250);
  Rotate(-150.0, 100); //turn left
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  Drive(-800.0, 200);
  pros::delay(250);
  Lift(-100000.0, 100);
  */
}















void LeftWild(){
  Lift(-50.0, 100);
  Drive(550.0, 100);
  Claw(200.0, 100);
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  Rotate(330.0, 100);
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  Snap(-150.0, 100);
  Claw(-300.0, 100);
  DriveVel(-200);
  pros::delay(3000);
  DriveVel(0);
  BackClaw(180.0, 100);
  pros::delay(500);
  Drive(150.0, 50);
  pros::delay(750);
  Rotate(-320.0, 100);
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  Lift(-10000.0, 100);
  Drive(-500.0, 100);
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  Drive(600.0, 100);
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  Drive(-500.0, 100);
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  Drive(500.0, 50);
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  pros::delay(250);
  Drive(-500.0, 50);
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  pros::delay(250);
  BackClaw(-180.0, 100);
}


void RightOne() {
  Lift(-500.0, 100);
  DriveVel(200);
  Claw(200.0, 100);
  do {
    pros::delay(20);
  } while (!AtDistanceClawGoal(5));
  Snap(-150.0, 100);
  Claw(-300.0, 100);
  pros::delay(800);
  //Drive towards mobile goa
  //use snap to get neutal mobile goal
  Snap(200.0, 100);
  pros::delay(150);
  DriveVel(0);
  Claw(400.0, 100);
  DriveVel(-200);

  //back up a little
}



/**auton function for taking mobile goal out of triangle & scoring**/
void RightTwo() {
  //put back claw down
   /**
   Claw(500.0, 75);
   do {
     pros::delay(20);
   } while (!AtDistanceClawGoal(5));
   pros::delay(20);
   //put front claw back down
   Claw(-500.0, 75);
   //drive toward mobile goal
   Drive(-750.0, 100);
   do {
     pros::delay(20);
   } while (!AtDistanceDriveGoal(5));
   pros::delay(20);
   //use claw to lift mobile goal up
   BackClaw(370.0, 100);
   do {
     pros::delay(20);
   } while (!AtDistanceBackClawGoal(10));
   pros::delay(500);
   //deposit preload from roller onto mobile goal
   Lift(-500.0, 50);
   do {
     pros::delay(20);
   } while (!AtDistanceLiftGoal(5));
   pros::delay(20);
   //rotate to make front face neutral goal
   Drive(400.0, 100);
   do {
     pros::delay(20);
   } while (!AtDistanceDriveGoal(5));
   pros::delay(20);
   Rotate(390.0, 100);
   do {
     pros::delay(20);
   } while (!AtDistanceDriveGoal(5));
   pros::delay(20);
   //drive to reach neutral mobile goal
   Drive(400.0, 100);
   pros::delay(1000);
   Drive(-400.0, 100);
   do {
     pros::delay(20);
   } while (!AtDistanceDriveGoal(5));
   pros::delay(20);
   Rotate(300.0, 100);
   do {
     pros::delay(20);
   } while (!AtDistanceDriveGoal(5));
   pros::delay(750);
   Drive(1000.0, 100);
   do {
     pros::delay(20);
   } while (!AtDistanceDriveGoal(5));
   pros::delay(1000);
   Snap(500.0, 100);
   do {
     pros::delay(20);
   } while (!AtDistanceSnapGoal(5));
   pros::delay(20);
   //pick up neutral mobile goal
   //drive back into home zone
   Drive(-10000.0, 25);
   **/
   Claw(300.0, 100);
   do {
     pros::delay(20);
   } while (!AtDistanceClawGoal(5));

   Snap(-150.0, 75);

   Claw(-375.0, 100);
   //Drive towards mobile goal
   Drive(1550.0, 200);
   do {
     pros::delay(20);
   } while (!AtDistanceDriveGoal(500));

   Snap(200.0, 100);
   do {
     pros::delay(20);
   } while (!AtDistanceSnapGoal(5));

   Rotate(-200.0, 100); //turn right with back facing middle tall goal
   do {
     pros::delay(20);
   } while (!AtDistanceDriveGoal(200));

   Drive(-220, 100);//pull back a little
   do {
     pros::delay(20);
   } while (!AtDistanceDriveGoal(200));

   Rotate(-250.0, 100); //turn right with back facing middle tall goal
   do {
     pros::delay(20);
   } while (!AtDistanceDriveGoal(200));

   //back towards middle tall goal
   Drive(-400.0, 100);
   do {
     pros::delay(20);
   } while (!AtDistanceDriveGoal(5));

   //lift backclaw to capture middle tall goal
   BackClaw(370.0, 100); //lift BackClaw to capture alliance goal on the right
   do {
     pros::delay(20);
   } while (!AtDistanceBackClawGoal(10));
   pros::delay(500); //allow time for the backclaw to lift up

   Rotate(-150.0, 100); //turn right
   do {
     pros::delay(20);
   } while (!AtDistanceDriveGoal(5));

   //drive towards home zone
   Drive(1500.0, 100);
   do {
     pros::delay(20);
   } while (!AtDistanceDriveGoal(5));


}
/**
void RightRing() {
  Claw(300.0, 100);
  do {
    pros::delay(20);
  } while (!AtDistanceClawGoal(5));

  Snap(-150.0, 75);

  Claw(-375.0, 100);
  //Drive towards mobile goal
  Drive(1575.0, 100);
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  Claw(100.0, 100);

  Snap(200.0, 100);
  do {
    pros::delay(20);
  } while (!AtDistanceSnapGoal(5));


  Drive(-500, 200);//pull back a little
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));

  Rotate(300.0, 100); //turn left
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));


}
**/

void BothOne(){
  //front claw goes up to score ring with lever
  Claw(300.0, 50);
  do {
    pros::delay(20);
  } while (!AtDistanceClawGoal(5));
  pros::delay(20);
  //put front claw down
  Claw(-300.0, 50);
  //Drive straight till middle
  Drive(750.0, 100);
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  pros::delay(1000);
  //Rotate so back claw faces mobile goal in WPZ
  Rotate(315.0, 75);
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  pros::delay(750);
  //Drive till reach goal in WPZ
  Drive(-2575.0, 100);
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  pros::delay(1000);
  //use back claw to collect mobile goal
  BackClaw(360.0, 100);
  do {
    pros::delay(20);
  } while (!AtDistanceBackClawGoal(10));
  pros::delay(500);
  //deposit preload from roller onto mobile goal
  Lift(-450.0, 50);
  do {
    pros::delay(20);
  } while (!AtDistanceLiftGoal(5));
  pros::delay(20);
  //Drive out of WPZ
  Drive(500.0, 75);
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  pros::delay(1000);

}



void BothTwo(){
  //front claw goes up to score ring with lever
  Claw(300.0, 100);
  do {
    pros::delay(20);
  } while (!AtDistanceClawGoal(5));
  //pros::delay(200);
  //open snap up
  Snap(-150.0, 75);
  //do {
  //  pros::delay(20);
  //} while (!AtDistanceSnapGoal(5));
  //pros::delay(200);
  //put front claw down
  Claw(-375.0, 100);
  //Drive towards mobile goal
  Drive(1550.0, 100);
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  //pros::delay(500);
  //use snap to get neutal mobile goal
  //Drive(175.0, 25);
  Snap(200.0, 100);
  do {
    pros::delay(20);
  } while (!AtDistanceSnapGoal(5));
  //drive backward slowly
  Drive(-500.0, 100);
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  pros::delay(1000);
  //Rotate so back claw faces mobile goal in WPZ
  Rotate(325.0, 75);
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  pros::delay(750);
  //Drive till reach goal in WPZ
  Drive(-2500.0, 100);
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  pros::delay(1000);
  //use back claw to collect mobile goal
  BackClaw(370.0, 100);
  do {
    pros::delay(20);
  } while (!AtDistanceBackClawGoal(10));
  pros::delay(500);
  //deposit preload from roller onto mobile goal
  LiftMotor.move_voltage(-10000); //run ring belt
  //Drive out of WPZ
  Drive(500.0, 100);
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  pros::delay(1000);
  LiftMotor.move_voltage(0); //run ring belt
}



void LeftMiddle(){

  //front claw goes up to score ring with lever
  Lift(-50.0, 1100);
  Claw(300.0, 100);
  Drive(950.0, 200);
  do {
    pros::delay(20);
  } while (!AtDistanceClawGoal(5));

  Snap(-150.0, 75);

  Claw(-375.0, 100);
  //Drive towards mobile goal
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));

  pros::delay(500);

  Rotate(-175.0, 100); //turn right
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));

  DriveVel(200);
  pros::delay(1000);
  DriveVel(100);
  Snap(200.0, 100);
  do {
    pros::delay(20);
  } while (!AtDistanceSnapGoal(5));
  pros::delay(250);
  DriveVel(0);
  //pros::delay(500);
  Claw(100.0, 100);
  do {
    pros::delay(20);
  } while (!AtDistanceClawGoal(5));
  //drive backward slowly into home zone
  Drive(-1400.0, 200);
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  Rotate(800.0, 100);
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  pros::delay(500);
  Snap(-150.0, 100);
  Claw(-100.0, 100);
  DriveVel(200);
  pros::delay(750);
  Drive(-300.0, 100);
}



//Auton_wreckingBall
void Shell(){
  //front claw goes up to score ring with lever
  DriveVel(200);
  Claw(200.0, 100);
  do {
    pros::delay(20);
  } while (!AtDistanceClawGoal(5));
  Snap(-150.0, 75);
  Claw(-200.0, 100);
  pros::delay(900);
  DriveVel(0);
  Snap(200.0, 100);
  do {
    pros::delay(20);
  } while (!AtDistanceSnapGoal(5));
  Claw(100.0, 100);
  //pros::delay(500);
  //drive backward slowly into home zone
  Drive(-1300.0, 100);
}





/**varirables and functions array for auton selector**/
int autonselector = 0;
//define and initialize string array "titles[]" as constant
const char *titles[] = {"LeftOne   ", "LeftTwo   ", "LeftWild ", "LeftMiddle", "RightOne  ", "RightTwo  ", "BothOne   ", "BothTwo   ", "Shell     ", "SkillsOne ", "SkillsTwo "};

//define and initialize an array of function pointers for all auton functions
void (*scripts[])() = {&LeftOne, &LeftTwo, &LeftWild, &LeftMiddle, &RightOne, &RightTwo, &BothOne, &BothTwo, &Shell, &SkillsAutonOne, &SkillsAutonTwo};

//define auton script runner function - run the selected auton script through on screen "autonselector"
void LCDScriptExecute() {scripts[autonselector]();}
