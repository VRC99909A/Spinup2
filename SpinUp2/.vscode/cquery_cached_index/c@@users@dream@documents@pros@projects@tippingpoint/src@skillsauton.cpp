#include "main.h"

/**Start of SkillsAutonOne**/
void SkillsAutonOne(){

  Claw(500.0, 100);
  do {
    pros::delay(20);
  } while (!AtDistanceClawGoal(5));
  pros::delay(500);

  Drive(-300, 100);//pull back a little
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  pros::delay(500);

  BackClaw(350.0, 100); //lift BackClaw to capture alliance goal on bridge
  do {
    pros::delay(20);
  } while (!AtDistanceBackClawGoal(10));
  pros::delay(500);

  Drive(100, 100);//go forward a little
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  pros::delay(500);

  Rotate(-50.0, 100); //turn right
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  pros::delay(500);

  Drive(350, 100);//go forward a little
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  pros::delay(1000);

  Rotate(-300.0, 100); //turn right
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  pros::delay(500);

  DriveVel(200);
  Snap(-150.0, 100);
  Claw(-600.0, 100);
  pros::delay(1100);
  //Drive towards mobile goa
  //use snap to get neutal mobile goal
  Snap(200.0, 100);
  pros::delay(250);
  DriveVel(0);
  Claw(500.0, 100);

  pros::delay(500);

  BackClaw(-90.0, 100); //go little lower
  Drive(550, 100);//go forward a little
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  pros::delay(250);

  Rotate(-265.0, 100); //turn right
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  pros::delay(500);

  Drive(2300, 100);//push rings all the way
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  pros::delay(1000);
  //Lift(-3000.0, 150);

  Drive(-1425, 100);//push rings all the way
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  pros::delay(1000);

  Rotate(300.0, 100); //turn left
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  pros::delay(500);

  Drive(700, 100);//drive till bridge
  pros::delay(2000);

  Snap(-150.0, 100);
  //first goal deposited

  Drive(-500, 100);//drive backwards
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  pros::delay(500);

  Claw(-500.0, 100);
  Rotate(-475.0, 100); //turn right
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  pros::delay(500);


  DriveVel(200);
  pros::delay(500);
  //Drive towards mobile goal
  //use snap to get neutal mobile goal
  Snap(200.0, 100);
  pros::delay(250);
  DriveVel(0);
  Claw(500.0, 100);

  Drive(-400, 100);//drive backwards towards bridge area
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  pros::delay(500);

  Rotate(550.0, 100); //turn left
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  pros::delay(500);


  Snap(-150.0, 100);
  Drive(850, 150);//drive till bridge
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  pros::delay(500);

  //neutral goal deposited

  Drive(-250, 100);//drive away from bridge
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  pros::delay(500);

  Rotate(275.0, 100); //turn left
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  pros::delay(500);

  BackClaw(-200.0, 100); //lower backclaw
  do {
    pros::delay(20);
  } while (!AtDistanceBackClawGoal(10));
  pros::delay(500);

  Drive(400, 100);//drive away from alliance goal
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  pros::delay(500);

  Claw(-500.0, 100);
  Rotate(625.0, 100); //do a 180 turn
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  pros::delay(500);

  DriveVel(200);
  pros::delay(400);
  //Drive towards alliance mobile goal
  //use snap to get goal
  Snap(200.0, 100);
  pros::delay(250);
  DriveVel(0);
  Claw(500.0, 100);

  Rotate(265.0, 100); //turn left towards goal
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  pros::delay(500);

  Snap(-150.0, 100);
  Drive(700, 100);//drive till bridge
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  pros::delay(500);
  //alliance goal deposited

  Drive(-400, 100);//drive away from bridge
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  pros::delay(500);






















  //ImuSensor.reset(); //reset inertial sensor
/*
  DriveVel(200);
  BackClaw(200.0, 100);
  Claw(200.0, 100);
  do {
    pros::delay(20);
  } while (!AtDistanceClawGoal(5));
  Snap(-150.0, 100);
  Claw(-300.0, 100);
  pros::delay(700);
  //Drive towards mobile goa
  //use snap to get neutal mobile goal
  Snap(200.0, 100);
  pros::delay(150);
  DriveVel(0);
  Claw(400.0, 100);

  Drive(-300, 200);//pull back a little
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));

  Rotate(150.0, 200); //turn left 35 degree to capture the alliance goal on the right
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));


  Drive(-600, 200);//drive backwards to capture alliance goal on the right
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));

  BackClaw(370.0, 100); //lift BackClaw to capture alliance goal on the right
  do {
    pros::delay(20);
  } while (!AtDistanceBackClawGoal(10));
  pros::delay(500); //allow time for the backclaw to lift up

  Drive(1500, 200);//drive forward towards the platform
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));

  Claw(650.0, 100);//raise seesaw to get ready to deposite low neutal goal
  Drive(1100, 200);//drive forward to push rings out of the way
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));

  Drive(-300, 200);//pull back
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));

  Rotate(-150.0, 100); //turn right 35 degree to face platform
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));

  Drive(400, 200);//drive forward to level the platform
  pros::delay(1000);
  Drive(-400, 200);//pull back
  Claw(-100.0, 100);//lower seesaw

  Snap(-250.0, 100); //open up snap
  Drive(800, 200);//thrust forward towards the platform
  pros::delay(1000);
// first goal deposited


  Drive(-700, 200);//pull back
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));

  Drive(-800, 200);//drive backward to push tall neutal goal to alliance zone
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));

  Drive(600, 200);//drive back up towards the platform
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));

  BackClaw(-200.0, 200); //lower backclaw
  do {
    pros::delay(20);
  } while (!AtDistanceBackClawGoal(10));

  Claw(-400.0, 100); //lower seesaw
  BackClaw(-170.0, 100); //lower backclaw
  do {
    pros::delay(20);
  } while (!AtDistanceBackClawGoal(10));
  pros::delay(500);

  Drive(400, 200);//drive forward to allow clearance between alliance goal
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));

  BackClaw(370.0, 100); //raise backclaw
  do {
    pros::delay(20);
  } while (!AtDistanceBackClawGoal(10));

  Rotate(-620.0, 100); //make 180 degree turn on the right
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));

  Claw(-300.0, 100); //lower seesaw

  DriveVel(200);
  pros::delay(400);
  Snap(400.0, 100);//close snap to capture low neutal goal on the right
  pros::delay(500);
  DriveVel(0);

  Claw(500.0, 100); //raise seesaw
  Rotate(620.0, 100); //turn 180 to face platform on the left
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));

  DriveVel(200);
  pros::delay(750);
  Snap(-250.0, 100); //open up snap
  pros::delay(2000);
  //Claw(-100.0, 100); //lower seesaw
  DriveVel(0);
  Drive(-300, 100);//pull back
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));


// first stage complete

    Rotate(310.0, 100); //turn left 90 degree to capture the alliance goal on the right
    do {
      pros::delay(20);
    } while (!AtDistanceDriveGoal(5));

    Claw(-375.0, 100);

    DriveVel(200);
    pros::delay(750);
    Snap(400.0, 100);//close snap to captur low neutal goal on the right
    pros::delay(500);
    DriveVel(0);

    Rotate(620.0, 100); //turn left 90 degree to capture the alliance goal on the right
    do {
      pros::delay(20);
    } while (!AtDistanceDriveGoal(5));

    Drive(2500, 200);//thrust forward towards the platform
    pros::delay(3000);
  // third goal deposited


    Drive(-700, 200);//pull back
    do {
      pros::delay(20);
    } while (!AtDistanceDriveGoal(5));


    Rotate(-310.0, 100); //turn left 90 degree to capture the alliance goal on the right
    do {
      pros::delay(20);
    } while (!AtDistanceDriveGoal(5));
    DriveVel(-200);//pull back
    pros::delay(1000);
    //next step is to lift up the goal with the backclaw next to the bridge then go stack both goals
    */
}





/**Start of SkillsAutonTwo**/
//start on the right side
void SkillsAutonTwo(){

  DriveVel(200);
  Claw(200.0, 100);
  do {
    pros::delay(20);
  } while (!AtDistanceClawGoal(5));
  Snap(-150.0, 100);
  Claw(-300.0, 100);
  pros::delay(850);
  //Drive towards mobile goa
  //use snap to get neutal mobile goal
  Snap(200.0, 100);
  pros::delay(150);
  DriveVel(0);
  Claw(100.0, 100);

  Drive(-300, 100);//pull back a little
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));


  Rotate(150.0, 50); //turn left 35 degree to capture the alliance goal on the right
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));


  Drive(-500, 80);//drive backwards to capture alliance goal on the right
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));

  BackClaw(170.0, 100); //lift BackClaw to capture alliance goal on the right
  pros::delay(500); //allow time for the backclaw to lift up



  Drive(2300, 200);//drive forward towards the platform
  Claw(500.0, 100);
  pros::delay(3200);
  Drive(200, 100);//drive forward towards the platform
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  pros::delay(500);
  Drive(-330, 100);//pull back
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));

  Rotate(-163.0, 100); //turn right 35 degree to face platform
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));

  Drive(450, 200);//thrust forward towards the platform
  pros::delay(1000);
  Claw(-100.0, 100);
  Drive(500.0, 200);
  pros::delay(1000);
  Snap(-250.0, 100); //open up snap
  DriveVel(0);
// first goal deposited
  Drive(-350, 50);//pull back
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));

  Rotate(375.0, 100); //turn right to face neutral goal on left
  Claw(-500.0, 100);
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  DriveVel(200);
  pros::delay(850);

  Snap(400.0, 100);//close snap to capture low neutal goal
  pros::delay(250);

  DriveVel(0);

  Claw(500.0, 100);

  Rotate(630.0, 100); //turn right 180 to face previous position
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));

  Drive(1220.0, 100);//drive forward to previous position
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  pros::delay(250);

  Rotate(240.0, 50); //turn left to face goal
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  pros::delay(250);
  Drive(800, 200);//thrust forward towards the platform
  Snap(-250.0, 100); //open up snap
  pros::delay(1000);

  BackClaw(-170.0, 100);
  Drive(-800.0, 100);//drive backward to previous position
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));






/*
  Rotate(275.0, 100); //turn left
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
*/
  Claw(-500.0, 100);
  Drive(400.0, 100);
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  Rotate(-635.0, 100); //turn right
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));

  DriveVel(100);
  pros::delay(700);
  Snap(260.0, 100);
  pros::delay(250);
  DriveVel(0);

  Claw(500.0, 100);
  Rotate(-650.0, 100); //turn right 180 to face alliance goal in AWPZ
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));

  DriveVel(200);
  Snap(-150.0, 100);
  pros::delay(1500);
  DriveVel(0);

  Drive(-200.0, 100);
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));

  Rotate(-330.0, 100); //turn left
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));

  pros::delay(250);

  Drive(-2000.0, 200);
  Claw(-500.0, 100);//drive backwards to goal in AWPZ
  //Claw(-500.0, 100);
  pros::delay(1750);
  BackClaw(190.0, 100);
  pros::delay(250);
  Drive(50.0, 25);
  do {
    pros::delay(20);
  } while (!AtDistanceBackClawGoal(10));

  DriveVel(200);
  Claw(500.0, 100);
  pros::delay(3000);
  DriveVel(0);


//NEW UWUWAUWAUWAUWAUWAWUAUWAUAWUWUAUWAUUUWUWUWWUUWUWUWAUWAWAWAWUWUWUWUAWUWAUAUW





Drive(-500.0, 100);
pros::delay(300);
Claw(-700.0, 100);
do {
  pros::delay(20);
} while (!AtDistanceDriveGoal(5));

pros::delay(500);

Rotate(365.0, 100);
do {
  pros::delay(20);
} while (!AtDistanceDriveGoal(5));


DriveVel(100);
pros::delay(800);
Snap(300.0, 100);
pros::delay(250);
DriveVel(0);

Drive(-300.0, 100);
Claw(100.0, 100);
do {
  pros::delay(20);
} while (!AtDistanceDriveGoal(5));

Rotate(485.0, 100);
do {
  pros::delay(20);
} while (!AtDistanceDriveGoal(5));

Claw(500.0, 100);
DriveVel(200);
pros::delay(3500);
DriveVel(0);

Drive(-600.0, 100);
do {
  pros::delay(20);
} while (!AtDistanceDriveGoal(5));
Rotate(-355.0, 100);
do {
  pros::delay(20);
} while (!AtDistanceDriveGoal(5));
Drive(1100.0, 100);
do {
  pros::delay(20);
} while (!AtDistanceDriveGoal(5));
Rotate(325.0, 100);
do {
  pros::delay(20);
} while (!AtDistanceDriveGoal(5));
pros::delay(250);
Snap(-150.0, 100);
Drive(600.0, 200);
pros::delay(500);




BackClaw(-190.0, 100);
Drive(-700.0, 100);//drive backward to previous position
do {
  pros::delay(20);
} while (!AtDistanceDriveGoal(5));






/*
Rotate(275.0, 100); //turn left
do {
  pros::delay(20);
} while (!AtDistanceDriveGoal(5));
*/
Claw(-700.0, 100);
Drive(400.0, 100);
do {
  pros::delay(20);
} while (!AtDistanceDriveGoal(5));

Rotate(-620.0, 100); //turn right
do {
  pros::delay(20);
} while (!AtDistanceDriveGoal(5));

DriveVel(100);
pros::delay(500);
Snap(260.0, 100);
pros::delay(1000);
DriveVel(0);

Claw(500.0, 100);
Rotate(-675.0, 100); //turn right 180 to face alliance goal in AWPZ
do {
  pros::delay(20);
} while (!AtDistanceDriveGoal(5));

DriveVel(200);
Snap(-250.0, 100);
pros::delay(1000);
DriveVel(0);

Drive(-1500.0, 200);
do {
  pros::delay(20);
} while (!AtDistanceDriveGoal(5));














//SHEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEESH


  Drive(-200.0, 100);
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));



  Rotate(-290.0, 100); //turn left
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));

  pros::delay(5000);

  Drive(-2000.0, 200);
  Claw(-500.0, 100);//drive backwards to goal in AWPZ
  //Claw(-500.0, 100);
  pros::delay(2500);

  BackClaw(170.0, 100); //lift BackClaw to capture alliance goal in AWPZ
  Drive(50.0, 50);
  do {
    pros::delay(20);
  } while (!AtDistanceBackClawGoal(10));

  DriveVel(200);
  Claw(500.0, 100);
  pros::delay(4000);
  DriveVel(0);


//NEW UWUWAUWAUWAUWAUWAWUAUWAUAWUWUAUWAUUUWUWUWWUUWUWUWAUWAWAWAWUWUWUWUAWUWAUAUW









Drive(-400.0, 100);
do {
  pros::delay(20);
} while (!AtDistanceDriveGoal(5));

pros::delay(500);

Rotate(360.0, 100);
do {
  pros::delay(20);
} while (!AtDistanceDriveGoal(5));


DriveVel(50);
pros::delay(1000);
Snap(300.0, 100);
pros::delay(250);
DriveVel(0);

Drive(-400.0, 100);
do {
  pros::delay(20);
} while (!AtDistanceDriveGoal(5));

Rotate(360.0, 100);
do {
  pros::delay(20);
} while (!AtDistanceDriveGoal(5));

Claw(500.0, 100);
DriveVel(200);
pros::delay(4000);
DriveVel(0);

Drive(-600.0, 100);
do {
  pros::delay(20);
} while (!AtDistanceDriveGoal(5));
Rotate(-325.0, 100);
do {
  pros::delay(20);
} while (!AtDistanceDriveGoal(5));
Drive(700.0, 100);
do {
  pros::delay(20);
} while (!AtDistanceDriveGoal(5));




  /*HERE

  Claw(-400.0, 100); //lower seesaw
  BackClaw(-170.0, 100); //lower backclaw
  do {
    pros::delay(20);
  } while (!AtDistanceBackClawGoal(10));
  pros::delay(500);

  Drive(400, 80);//drive forward to allow clearance between alliance goal
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));

  BackClaw(370.0, 100); //raise backclaw
  pros::delay(1000);

  Rotate(-620.0, 100); //make 180 degree turn on the right
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));

  Claw(-300.0, 100); //lower seesaw

  Drive(600, 80);//drive towards the alliance goal
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));

  FLMotor.move_velocity(30); //drive forward slowly to capture low neutal goal on the left
  BLMotor.move_velocity(30);
  FRMotor.move_velocity(30);
  BRMotor.move_velocity(30);
  Snap(400.0, 100);//close snap to capture low neutal goal on the right
  pros::delay(500);
  FLMotor.move_velocity(0);
  BLMotor.move_velocity(0);
  FRMotor.move_velocity(0);
  BRMotor.move_velocity(0);

  Claw(500.0, 100); //raise seesaw
  Rotate(620.0, 100); //turn 180 to face platform on the left
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));

  Snap(-250.0, 100); //open up snap
  pros::delay(1000);
  Drive(1550, 100);//drive forward to platform (forward step)
  pros::delay(3000);
  //Claw(-100.0, 100); //lower seesaw

  Drive(-300, 200);//pull back
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));


// first stage complete

    Rotate(500.0, 100); //turn left 90 degree to capture the alliance goal on the right
    do {
      pros::delay(20);
    } while (!AtDistanceDriveGoal(5));

    Claw(-375.0, 100);

    Drive(500.0, 100);//drive forward to capture low neutal goal on the right
    do {
      pros::delay(20);
    } while (!AtDistanceDriveGoal(5));

    FLMotor.move_velocity(30); //drive forward slowly to capture low neutal goal on the left
    BLMotor.move_velocity(30);
    FRMotor.move_velocity(30);
    BRMotor.move_velocity(30);
    Snap(400.0, 100);//close snap to captur low neutal goal on the right
    pros::delay(500);
    FLMotor.move_velocity(0);
    BLMotor.move_velocity(0);
    FRMotor.move_velocity(0);
    BRMotor.move_velocity(0);

    Rotate(750.0, 100); //turn left 90 degree to capture the alliance goal on the right
    do {
      pros::delay(20);
    } while (!AtDistanceDriveGoal(5));

    Snap(-250.0, 100); //open up snap
    Drive(2500, 100);//thrust forward towards the platform
    pros::delay(2000);
  // third goal deposited


    Drive(-700, 80);//pull back
    do {
      pros::delay(20);
    } while (!AtDistanceDriveGoal(5));

HERE
*/

/**
    Drive(1300, 100);//drive forward
    do {
      pros::delay(20);
    } while (!AtDistanceDriveGoal(5));
    Drive(-300, 100);//drive forward
    Claw(-500.0, 100); //lower seesaw
    pros::delay(1000);


    RotateDegreesLeft(185.0);

    Drive(300.0, 50); //drive forward
    pros::delay(1000);


    FLMotor.move_velocity(30); //drive forward slowly to capture low neutal goal on the left
    BLMotor.move_velocity(30);
    FRMotor.move_velocity(30);
    BRMotor.move_velocity(30);
    Snap(400.0, 100);//close snap to capture low neutal goal on the right
    pros::delay(500);
    FLMotor.move_velocity(0);
    BLMotor.move_velocity(0);
    FRMotor.move_velocity(0);
    BRMotor.move_velocity(0);

    Drive(-300, 100);//pull back a little
    do {
      pros::delay(20);
    } while (!AtDistanceDriveGoal(5));

    Rotate(150.0, 100); //turn left 35 degree to capture the alliance goal on the right
    do {
      pros::delay(20);
    } while (!AtDistanceDriveGoal(5));

    Drive(-600, 80);//drive backwards to capture alliance goal on the right
    do {
      pros::delay(20);
    } while (!AtDistanceDriveGoal(5));

    BackClaw(370.0, 100); //lift BackClaw to capture alliance goal on the right
    do {
      pros::delay(20);
    } while (!AtDistanceBackClawGoal(10));
    pros::delay(500); //allow time for the backclaw to lift up

    Drive(1500, 80);//drive forward towards the platform
    do {
      pros::delay(20);
    } while (!AtDistanceDriveGoal(5));

    Claw(650.0, 100);//raise seesaw to get ready to deposite low neutal goal
    Drive(1100, 80);//drive forward to push rings out of the way
    do {
      pros::delay(20);
    } while (!AtDistanceDriveGoal(5));

    Drive(-300, 80);//pull back
    do {
      pros::delay(20);
    } while (!AtDistanceDriveGoal(5));

    Rotate(-150.0, 100); //turn right 35 degree to face platform
    do {
      pros::delay(20);
    } while (!AtDistanceDriveGoal(5));




    Drive(400, 100);//drive forward to level the platform
    pros::delay(1000);
    Drive(-400, 100);//pull back
    Claw(-100.0, 100);//lower seesaw

    Snap(-250.0, 100); //open up snap
    Drive(400, 100);//thrust forward towards the platform
    pros::delay(1000);

    //Claw(-200.0, 100); //lower seesaw to deposit goal
    Drive(-700, 80);//pull back
    do {
      pros::delay(20);
    } while (!AtDistanceDriveGoal(5));



    BackClaw(-200.0, 100); //lower backclaw
    pros::delay(1000);

    Claw(-400.0, 100); //lower seesaw
    BackClaw(-170.0, 100); //lower backclaw
    do {
      pros::delay(20);
    } while (!AtDistanceBackClawGoal(10));
    pros::delay(500);

    Drive(400, 80);//drive forward to allow clearance between alliance goal
    do {
      pros::delay(20);
    } while (!AtDistanceDriveGoal(5));

    BackClaw(370.0, 100); //raise backclaw
    pros::delay(1000);

    Rotate(-620.0, 100); //make 180 degree turn on the right
    do {
      pros::delay(20);
    } while (!AtDistanceDriveGoal(5));

    Claw(-300.0, 100); //lower seesaw

    Drive(600, 80);//drive towards the alliance goal
    do {
      pros::delay(20);
    } while (!AtDistanceDriveGoal(5));

    FLMotor.move_velocity(30); //drive forward slowly to capture the alliance goal
    BLMotor.move_velocity(30);
    FRMotor.move_velocity(30);
    BRMotor.move_velocity(30);
    Snap(400.0, 100);//close snap to capture the alliance goal
    pros::delay(500);
    FLMotor.move_velocity(0);
    BLMotor.move_velocity(0);
    FRMotor.move_velocity(0);
    BRMotor.move_velocity(0);

    Claw(500.0, 100); //raise seesaw
    Rotate(620.0, 100); //turn 180 to face platform on the left
    do {
      pros::delay(20);
    } while (!AtDistanceDriveGoal(5));

    Snap(-250.0, 100); //open up snap
    pros::delay(1000);
    Drive(1300, 100);//drive forward to platform
    pros::delay(3000);
    //Claw(-100.0, 100); //lower seesaw

    Drive(-300, 100);//pull back
    do {
      pros::delay(20);
    } while (!AtDistanceDriveGoal(5));


**/
}
