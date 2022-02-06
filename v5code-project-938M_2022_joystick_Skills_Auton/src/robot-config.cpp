#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
motor FL = motor(PORT1, ratio18_1, false);
motor BL = motor(PORT2, ratio18_1, false);
motor FR = motor(PORT3, ratio18_1, true);
motor BR = motor(PORT8, ratio18_1, true);
controller Controller1 = controller(primary);
motor MogoLift = motor(PORT17, ratio36_1, false);
motor MogoDragger = motor(PORT12, ratio18_1, false);
inertial Inertial = inertial(PORT4);

// VEXcode generated functions
// define variable for remote controller enable/disable
bool RemoteControlCodeEnabled = true;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}