/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       VEX                                                       */
/*    Created:      Thu Sep 26 2019                                           */
/*    Description:  Competition Template                                      */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// FL                   motor         1               
// BL                   motor         2               
// FR                   motor         3               
// BR                   motor         8               
// Controller1          controller                    
// MogoLift             motor         17              
// MogoDragger          motor         12              Fg
// Inertial             inertial      4               
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"
#include "938McustomFunction.h"
using namespace vex;

// A global instance of competition
competition Competition;


// define your global instances of motors and other devices here

/*---------------------------------------------------------------------------*/
/*                          Pre-Autonomous Functions                         */
/*                                                                           */
/*  You may want to perform some actions before the competition starts.      */
/*  Do them in the following function.  You must return from this function   */
/*  or the autonomous and usercontrol tasks will not be started.  This       */
/*  function is only called once after the V5 has been powered on and        */
/*  not every time that the robot is disabled.                               */
/*---------------------------------------------------------------------------*/

void pre_auton(void) {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();

   Inertial.calibrate();
    while(Inertial.isCalibrating())
    {

        wait(1,seconds);
    Brain.Screen.print("sensor calibrating");
    }
  Brain.Screen.clearScreen();
    wait(2,seconds);
  // All activities that occur before the competition starts
  // Example: clearing encoders, setting servo positions, ...
  
}

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              Autonomous Task                              */
/*                                                                           */
/*  This task is used to control your robot during the autonomous phase of   */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/

void autonomous(void) {
  // ..........................................................................
  // Insert autonomous user code here.
  // ..........................................................................
/*RobotForwardReverse(450,50,50);
RobotTurnAuton(450,50,50);
RobotMogoLiftAuton(400,100,50);
RobotStrafeAuton(450,50,50);
RobotForwardReverseScore(450,50,50);*/

//Remeber to put the robot to line up with the mogo on the ramp.
//RobotMogoLiftAuton(-465,100,50);

//turnCorrect(180);
//RobotMogoLiftAuton(-465,100,50); This is for the Mogo lift to go all the way down from starting position

//Picks up goal holding down the ramp
RobotMogoLiftAuton(-465,100,50);
RobotForwardReverse(550,75,50);
//RobotMogoLiftAuton(150,100,50);
//RobotForwardReverse(-300,75,50);
//RobotMogoLiftAuton(-150,100,50);
//RobotForwardReverse(150,25,50);
RobotMogoDragAuton(-200,100,50);
RobotMogoLiftAuton(466,100,600);
RobotMogoDragAuton(200,100,200);
//RobotForwardReverse(-470,75,50);
RobotForwardReverse(-100,75,50);
RobotMogoLiftAuton(-460,100,50);
RobotForwardReverse(250,75,50);


//Goes for the netral goal at middle
turnCorrectLeft(87);
RobotForwardReverse(950,75,50);
RobotForwardReverse(740,25,50);
RobotMogoLiftAuton(200,100,50);
RobotForwardReverse(955,75,50);


//Goes for the opposite color goal on the win point line
//turnRight90();
turnCorrectRight(85);
RobotMogoDragAuton(-1325,100,50);
RobotForwardReverse(-350,25,50);
RobotMogoDragAuton(200,100,50);
RobotMogoDragAuton(200,100,50);
RobotForwardReverse(220,75,50);


//Drives to our color goal on the win point line
//turnCorrect(-90);
turnLeft90();
RobotForwardReverse(-1990,75,50);
//Deposites a mogo midway
RobotMogoDragAuton(-410,100,50);
RobotForwardReverse(-490,75,50);
turnCorrectLeft(86);
//turnLeft90();
RobotForwardReverse(-2080,75,50);
RobotForwardReverse(-500,25,50);


//Picks up our color mogo on the win point line
RobotMogoDragAuton(200,50,50);
RobotMogoDragAuton(1175,100,50);



//Code for four goals on the ramp


//Goes to the neutral goal at middle
RobotForwardReverse(155,75,50);
turnCorrectLeft(87);
//turnLeft90();
RobotForwardReverse(-225,75,50);


//Picks up the neutral mogo at middle
RobotMogoDragAuton(-400,50,50);
RobotMogoDragAuton(400,100,50);
RobotMogoDragAuton(-1325,100,50);
RobotForwardReverse(-500,25,50);
RobotMogoDragAuton(400,100,50);
RobotMogoDragAuton(400,100,50);


//Prepares to get on the ramp
RobotForwardReverse(-1400,75,50);
turnRight90();
RobotForwardReverse(-100,75,50);
turnCorrectLeft(40);
RobotForwardReverse(-800,75,50);
turnCorrectRight(40);


//Get on the ramp
RobotForwardReverse(1000,75,50);                                                                                                                                                                





//do u wanna know why weepingbell and likitongue are jessie and james pokemon??? No...



/*while(true){
  Brain.Screen.print(Inertial.heading());

  wait(100, msec);
  Brain.Screen.clearLine();

}*/







}

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              User Control Task                            */
/*                                                                           */
/*  This task is used to control your robot during the user control phase of */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/

void usercontrol(void) {
  // User control code here, inside the loop
  while (1) {
    // This is the main execution loop for the user control program.
    // Each time through the loop your program should update motor + servo
    // values based on feedback from the joysticks.

    // ........................................................................
    // Insert user code here. This is where you use the joystick values to
    // update your motors, etc.
    // ........................................................................
    

    //in testing mode 
    //If it doesn't work, try reversing the motor

    Controller1.ButtonL1.pressed(MogoLiftUp);

    Controller1.ButtonL1.released(MogoLiftUpStop);



    Controller1.ButtonL2.pressed(MogoLiftDown);

    Controller1.ButtonL2.released(MogoLiftDownStop);
    


    Controller1.ButtonR1.pressed(MogoDragUp);

    Controller1.ButtonR1.released(MogoDragUpStop);



    Controller1.ButtonR2.pressed(MogoDragDown);

    Controller1.ButtonR2.released(MogoDragDownStop);

/*
    Controller1.ButtonR1.pressed(RingIntakeIn);

    Controller1.ButtonR1.released(RingIntakeInStop);



    Controller1.ButtonR2.pressed(RingIntakeOut);

    Controller1.ButtonR2.released(RingIntakeOutStop);


 FL.spin(vex::directionType::fwd, Controller1.Axis3.position(),vex::velocityUnits::pct);
 FR.spin(vex::directionType::fwd, Controller1.Axis2.position(),vex::velocityUnits::pct);
 BL.spin(vex::directionType::fwd, Controller1.Axis3.position(),vex::velocityUnits::pct);
 BR.spin(vex::directionType::fwd, Controller1.Axis2.position(),vex::velocityUnits::pct);
*/


  Controller1.ButtonDown.pressed(DriveTrainStop);
  Controller1.ButtonDown.released(DriveTrainReleased);

    

    //                              Drive forward                  Turn right                 Strafe right       Stupid code that made it work somehow :/
    FL.spin(directionType::fwd, (Controller1.Axis3.value() +Controller1.Axis1.value() +Controller1.Axis4.value() -Controller1.Axis2.value()/127), velocityUnits::pct);
    FR.spin(directionType::fwd, (Controller1.Axis3.value() -Controller1.Axis1.value() -Controller1.Axis4.value() -Controller1.Axis2.value()/127), velocityUnits::pct);
    BL.spin(directionType::fwd, (Controller1.Axis3.value() +Controller1.Axis1.value() -Controller1.Axis4.value() -Controller1.Axis2.value()/127), velocityUnits::pct);
    BR.spin(directionType::fwd, (Controller1.Axis3.value() -Controller1.Axis1.value() +Controller1.Axis4.value() -Controller1.Axis2.value()/127), velocityUnits::pct);

  





    wait(20, msec); // Sleep the task for a short amount of time to
                    // prevent wasted resources.
  }
}


//Main will set up the competition functions and callbacks.

int main() {
  // Set up callbacks for autonomous and driver control periods.
  Competition.autonomous(autonomous);
  Competition.drivercontrol(usercontrol);

  // Run the pre-autonomous function.
  pre_auton();

  // Prevent main from exiting with an infinite loop.
  while (true) {
    wait(100, msec);
  }
}
