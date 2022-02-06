#include "vex.h"
void MogoLiftUp(void);
void MogoLiftUpStop(void);
void MogoLiftDown(void);
void MogoLiftDownStop(void);

void MogoDragDown(void);
void MogoDragDownStop(void);
void MogoDragUp(void);
void MogoDragUpStop(void);
/*
void RingIntakeIn(void);
void RingIntakeInStop(void);
void RingIntakeOut(void);
void RingIntakeOutStop(void);
*/
void DriveTrainStop(void);
void DriveTrainReleased(void);

void RobotForwardReverse (int degrees,int MotorPower,double delay);

//void RobotScoreAuton (int degrees,int MotorPower,double delay);

void RobotTurnAuton (int degrees,int MotorPower,double delay);

void RobotMogoLiftAuton (int degrees,int MotorPower,double delay);

void RobotStrafeAuton (int degrees,int MotorPower,double delay);

void RobotMogoDragAuton (int degrees,int MotorPower,double delay);

//void RobotForwardReverseScore (int degrees, int MotorPower, double delay);




//void turnCorrectTo0 (int margin);
void turnCorrect (double margin);
void turnCorrectRight(double margin);
void turnCorrectLeft(double margin);

void turnRight90();
void turnLeft90();


//void TurnInertial (int margin);



