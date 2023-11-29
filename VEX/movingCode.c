void moveForward(double dist0, double vel0){
    motor_move_absolute(FRONT_RIGHT_MOTOR, dist0, vel0);
    motor_move_absolute(BACK_RIGHT_MOTOR, dist0, vel0);
    motor_move_absolute(FRONT_LEFT_MOTOR, dist0, vel0);
    motor_move_absolute(BACK_LEFT_MOTOR, dist0, vel0);
}

void movebackward(double dist0, double vel0){
    motor_move_absolute(FRONT_RIGHT_MOTOR, dist0, -1 * vel0);
    motor_move_absolute(BACK_RIGHT_MOTOR, dist0, -1 * vel0);
    motor_move_absolute(FRONT_LEFT_MOTOR, dist0, -1 * vel0);
    motor_move_absolute(BACK_LEFT_MOTOR, dist0, -1 * vel0);
}

void turnLeft(double rot0, double vel0){
    while(imu_get_rotation(IMU_PORT) > -90){
        motor_move(FRONT_LEFT_MOTOR, -1 * vel0);
        motor_move(FRONT_RIGHT_MOTOR, vel0);
        motor_move(BACK_LEFT_MOTOR, -1 * vel0);
        motor_move(BACK_RIGHT_MOTOR, vel0);
    }
}

void turnRight(double rot0, double vel0){
    while(imu_get_rotation(IMU_PORT) > -90){
        motor_move(FRONT_LEFT_MOTOR, vel0);
        motor_move(FRONT_RIGHT_MOTOR, -1 * vel0);
        motor_move(BACK_LEFT_MOTOR, vel0);
        motor_move(BACK_RIGHT_MOTOR, -1 * vel0);
    }
} 
