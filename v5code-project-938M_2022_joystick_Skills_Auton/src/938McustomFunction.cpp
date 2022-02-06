#include "vex.h"
void MogoLiftUp()
{
         MogoLift.stop();
         MogoLift.setVelocity(100, percent);

         MogoLift.spin(reverse);

}

void MogoLiftUpStop()
{
         MogoLift.stop(hold);
         
}



void MogoLiftDown()
{
         MogoLift.setVelocity(100, percent);  

         MogoLift.spin(forward);
}


void MogoLiftDownStop()
{
         MogoLift.stop(hold);
}





void MogoDragDown()
{
         MogoDragger.setVelocity(100, percent);

         MogoDragger.spin(forward);

}

void MogoDragDownStop()
{
         MogoDragger.stop(hold);
         
}



void MogoDragUp()
{
         MogoDragger.setVelocity(100, percent);  

         MogoDragger.spin(reverse);
}


void MogoDragUpStop()
{
         MogoDragger.stop(hold);
}





/*
void RingIntakeIn()
{
         RingIntake.setVelocity(100, percent);

         RingIntake.spin(reverse);

}

void RingIntakeInStop()
{
         RingIntake.stop();
         
}



void RingIntakeOut()
{
         RingIntake.setVelocity(100, percent);  

         RingIntake.spin(forward);
}


void RingIntakeOutStop()
{
         RingIntake.stop();
}
*/


void DriveTrainStop(void)
{
   FR.stop(hold);
   FL.stop(hold);
   BR.stop(hold);
   BL.stop(hold);
}



void DriveTrainReleased(void)
{
   FR.spinFor(forward, 0.000000001, degrees, false);
   FL.spinFor(forward, 0.000000001, degrees, false);
   BR.spinFor(forward, 0.000000001, degrees, false);
   BL.spinFor(forward, 0.000000001, degrees, false);
}





void RobotForwardReverse(int degrees,int MotorPower,double delay)
{
   // Set MotorPower for designed Robot Speed
   FR.setVelocity(MotorPower,percent);
   FL.setVelocity(MotorPower,percent);
   BR.setVelocity(MotorPower, percent);
   BL.setVelocity(MotorPower, percent);
   

   // Spin the Motors in the Direction and amount of degrees specified in the parameters.
   FR.spinFor(fwd,degrees,deg,false);
   FL.spinFor(fwd,degrees,deg,false);
   BR.spinFor(fwd,degrees,deg,false);
   BL.spinFor(fwd,degrees,deg,true);


 // Wait after Movement is complete.
   wait(delay,msec);
}

void RobotTurnAuton(int degrees,int MotorPower,double delay)
//Positive intigers is turning right
{
   //Set MotorPower for Robot speed
   FR.setVelocity(MotorPower,percent);
   FL.setVelocity(MotorPower,percent);
   BR.setVelocity(MotorPower, percent);
   BL.setVelocity(MotorPower, percent);


   //Spin the Motors in the Direction and amount of degrees specified in the parameters
   FR.spinFor(reverse,degrees,deg,false);
   FL.spinFor(forward,degrees,deg,false);
   BR.spinFor(reverse,degrees,deg,false);
   BL.spinFor(forward,degrees,deg,true);

  //Wait after movement is complete
   wait(delay,msec);
}

void RobotStrafeAuton (int degrees,int MotorPower,double delay)
{
   //Sets the motor power for the drivetrain motors
   FR.setVelocity(MotorPower,percent);
   FL.setVelocity(MotorPower,percent);
   BR.setVelocity(MotorPower, percent);
   BL.setVelocity(MotorPower, percent);

   // Spin the Motors in the Direction and amount of degrees specified in the parameters.
   FR.spinFor(reverse,degrees,deg,false);
   FL.spinFor(fwd,degrees,deg,false);
   BR.spinFor(fwd,degrees,deg,false);
   BL.spinFor(reverse,degrees,deg,true);

 //Wait after moverment is complete
   wait(delay,msec);
}
/*
void RobotScoreAuton(int degrees,int MotorPower,double delay)
{
   RingIntake.setVelocity(MotorPower,percent);

   RingIntake.spinFor(reverse,degrees,deg);
   

 // Wait after Movement is complete.
   wait(delay,msec);
}*/

void RobotMogoLiftAuton (int degrees,int MotorPower,double delay)
{
   MogoLift.setVelocity(MotorPower,percent);

   MogoLift.spinFor(reverse,degrees,deg,true);

 // Wait after Movement is complete.
   wait(delay,msec);
}

void RobotMogoDragAuton (int degrees,int MotorPower,double delay)
{
  MogoDragger.setVelocity(MotorPower, percent);
  
  MogoDragger.spinFor(reverse, degrees, deg);
  
   // Wait after Movement is complete.
   wait(delay,msec);
}
/*
void RobotForwardReverseScore (int degrees, int MotorPower, double delay)
{
   // Set MotorPower for designed Robot Speed
   FR.setVelocity(MotorPower,percent);
   FL.setVelocity(MotorPower,percent);
   BR.setVelocity(MotorPower, percent);
   BL.setVelocity(MotorPower, percent);
   RingIntake.setVelocity(100, percent);   

   // Spin the Motors in the Direction and amount of degrees specified in the parameters.
   FR.spinFor(fwd,degrees,deg,false);
   FL.spinFor(fwd,degrees,deg,false);
   BR.spinFor(fwd,degrees,deg,false);
   BL.spinFor(fwd,degrees,deg,false);
   RingIntake.spinFor(reverse,degrees*3,deg,true);

 // Wait after Movement is complete.
   wait(delay,msec);
}
*/
/*
void turnCorrectTo0 (int margin)
{
  float head = Inertial.heading();

  FR.setVelocity(15, pct);
  BR.setVelocity(15, pct);
  FL.setVelocity(15, pct);
  BL.setVelocity(15, pct);

  while(head > margin || head < margin * -1) 
  {
    if (head < 0) {
      FR.spin(reverse);
      BR.spin(reverse);
      FL.spin(fwd);
      BL.spin(fwd);
      head = Inertial.heading();
    } else if (head > 0) {
      FR.spin(fwd);
      BR.spin(fwd);
      FL.spin(reverse);
      BL.spin(reverse);
      head = Inertial.heading();
    }
  }
  FR.stop();
  BR.stop();
  FL.stop();
  BL.stop();
}*/
// void turnPerfect90() 
// {
//   while (head != 90) {
//     if (Inertial.heading <)
//   }
// }

/*
void turnCorrect (double margin)
{
  double head = Inertial.heading();
  FR.setVelocity(15, pct);
  BR.setVelocity(15, pct);
  FL.setVelocity(15, pct);
  BL.setVelocity(15, pct);

  while(head > margin || head < margin)
  {
    
      head = Inertial.heading();
     if (head < margin) {   
      Brain.Screen.print(" head = %f, margin = %f", Inertial.heading(), margin);

      printf(" I am here A ");
      FR.spin(reverse);
      BR.spin(reverse);
      FL.spin(fwd);
      BL.spin(fwd);
      head = Inertial.heading();
    }    
  
     else if (head > margin) {
     Brain.Screen.print(" head = %f, margin = %f", Inertial.heading(), margin);

      
      FR.spin(fwd);
      BR.spin(fwd);
      FL.spin(reverse);
      BL.spin(reverse);
      head = Inertial.heading();

      printf(" I am here B");
    }   

  head = Inertial.heading();
  printf(" I am here D");
  }
  FR.stop();
  BR.stop();
  FL.stop();
  BL.stop();
}*/
/*
void turnCorrect (double margin)
{ double head = Inertial.heading();
  double target;

if (target >= head) 
{
  target = margin - head;
}

else 
{
  target = (360-head) + margin;
}
  FR.setVelocity(15, pct);
  BR.setVelocity(15, pct);
  FL.setVelocity(15, pct);
  BL.setVelocity(15, pct);

  FR.spinFor(reverse, target, degrees, false);
  BR.spinFor(reverse, target, degrees, false);
  FL.spinFor(fwd, target, degrees, false);
  BL.spinFor(fwd, target, degrees, true);
}*/
 
/*void turnCorrect (double margin)
{ 
 Inertial.resetRotation();
 double head = Inertial.rotation(degrees);
   FR.setVelocity(25, pct);
   BR.setVelocity(25, pct);
   FL.setVelocity(25, pct);
   BL.setVelocity(25, pct);
 
   while(head > (margin + 0.5) || head < (margin - 0.5))
   {
       head = Inertial.rotation(degrees);
      if (head < (margin - 0.5)) {   
       FR.spin(reverse);
       BR.spin(reverse);
       FL.spin(fwd);
       BL.spin(fwd);
       head = Inertial.rotation(degrees);
     }    
   
      else if (head > (margin + 0.5)) {      
       FR.spin(fwd);
       BR.spin(fwd);
       FL.spin(reverse);
       BL.spin(reverse);
       head = Inertial.rotation(degrees);
     }   
   }
   Brain.Screen.print(Inertial.rotation(degrees));
 if (head <= (margin - 0.5) && head >= (margin + 0.5)){
    FR.stop();
    BR.stop();
    FL.stop();
    BL.stop();
    head = Inertial.rotation(degrees);  
   }
}*/
void turnCorrectRight (double margin)
{ 
 Inertial.resetRotation();
 double head = Inertial.rotation(degrees);
   FR.setVelocity(25, pct);
   BR.setVelocity(25, pct);
   FL.setVelocity(25, pct);
   BL.setVelocity(25, pct);
 
   while(head < margin-0.5)
   {
       head = Inertial.rotation(degrees);
      if (head < margin-0.5)
      {   
       FR.spin(reverse);
       BR.spin(reverse);
       FL.spin(fwd);
       BL.spin(fwd);
       head = Inertial.rotation(degrees);
      }    
   
   }
    FR.stop();
    BR.stop();
    FL.stop();
    BL.stop();     
}

void turnCorrectLeft (double margin)
{ 
 Inertial.resetRotation();
 margin=margin*-1;
 double head = Inertial.rotation(degrees);
   FR.setVelocity(25, pct);
   BR.setVelocity(25, pct);
   FL.setVelocity(25, pct);
   BL.setVelocity(25, pct);
 
  while(head > margin+0.5)
  {
      head = Inertial.rotation(degrees);
    if(head > margin+0.5)
    {
      FR.spin(fwd);
      BR.spin(fwd);
      FL.spin(reverse);
      BL.spin(reverse);  
      head = Inertial.rotation(degrees);
    } 
  }
    FR.stop();
    BR.stop();
    FL.stop();
    BL.stop();     
}
 
 
 
 
 
 






void turnRight90 ()
{ 
Inertial.resetRotation();
double head = Inertial.rotation(degrees);
  FR.setVelocity(25, pct);
  BR.setVelocity(25, pct);
  FL.setVelocity(25, pct);
  BL.setVelocity(25, pct);

  while(head < 90 )
  {
      head = Inertial.rotation(degrees);
    if(head < 90){
      FR.spin(reverse);
      BR.spin(reverse);
      FL.spin(fwd);
      BL.spin(fwd);  
      head = Inertial.rotation(degrees);
    } 
  }
  Brain.Screen.print(Inertial.rotation(degrees));
if (head >= 90){
   FR.stop();
   BR.stop();
   FL.stop();
   BL.stop();
   head = Inertial.rotation(degrees);  
  }
   }







  void turnLeft90 ()
{ 
Inertial.resetRotation();
double head = Inertial.rotation(degrees);
  FR.setVelocity(25, pct);
  BR.setVelocity(25, pct);
  FL.setVelocity(25, pct);
  BL.setVelocity(25, pct);

  while(head > -90 )
  {
      head = Inertial.rotation(degrees);
    if(head > -90){
      FR.spin(fwd);
      BR.spin(fwd);
      FL.spin(reverse);
      BL.spin(reverse);  
      head = Inertial.rotation(degrees);
    } 
  }
  Brain.Screen.print(Inertial.rotation(degrees));
if (head <= -90){
   FR.stop();
   BR.stop();
   FL.stop();
   BL.stop();
   head = Inertial.rotation(degrees);  
  }
   }
  /*
  int Num = 1; 

  int loc = 0;
  FR.setVelocity(40, pct);
  BR.setVelocity(40, pct);
  FL.setVelocity(40, pct);
  BL.setVelocity(40, pct);  
  FR.spin(reverse);
  BR.spin(reverse);
  FL.spin(forward);
  BL.spin(forward);  
   while(Num)
   {
       Brain.Screen.clearScreen();

      Brain.Screen.print("spinning motors");

      Brain.Screen.print(Inertial.rotation(degrees));
      loc = Inertial.rotation(degrees);
   
       if(loc == margin)
       {

          Num = 0;

       }


   }
  FR.stop();
  BR.stop();
  FL.stop();
  BL.stop();
*/

  /*
   //Brain.Screen.print(" A0 head=%f, margin=%f", Inertial.heading(), margin);
   //Brain.Screen.print(" A0 ");
  FR.setVelocity(15, pct);
  BR.setVelocity(15, pct);
  FL.setVelocity(15, pct);
  BL.setVelocity(15, pct);  
 
  double head = Inertial.heading();
  double target = margin - head;
while(1 == 1) {
Brain.Screen.print(Inertial.heading(degrees)); 

  if (target == 0){
    FR.stop();
    BR.stop();
    FL.stop();
    BL.stop();  
    head = Inertial.heading();
  }




  //Brain.Screen.print(" A1 ");


  //Brain.Screen.print(" A2 ");
  else if(target != 0){
    FR.spin(reverse);
    BR.spin(reverse);
    FL.spin(fwd);
    BL.spin(fwd);  
    head = Inertial.heading();
}
*/


 //Brain.Screen.print(" A3 head=%f", Inertial.heading());


  // if (Inertial.heading() > margin ){
  //   FR.spin(fwd);
  //   BR.spin(fwd);
  //   FL.spin(reverse);
  //   BL.spin(reverse);
  //   head = Inertial.heading();
  // }



















