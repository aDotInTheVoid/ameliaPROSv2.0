#ifndef _HARDWARE_H_
#define _HARDWARE_H_


#define ARM_MOTORS_PER_SIDE  1


const int leftArmMotors  [ARM_MOTORS_PER_SIDE] = {6};
const int rightArmMotors [ARM_MOTORS_PER_SIDE] = {7};

int armSpeed = 100;

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


const int joystickNumber = 1;
#endif
