#ifndef _HARDWARE_H_
#define _HARDWARE_H_

int leftArmMotorsNum = 1;
int leftArmMotors[3] = {1, 2, 3};

enum Drivetrain {
    rightFrontMotor = 1,
    leftFrontMotor,
    rightBackMotor,
    leftBackMotor = 10
};

enum Joystick {
    turnJoystick = 1,
    forwardJoystick = 3,
    armButtons = 5
};

#endif
