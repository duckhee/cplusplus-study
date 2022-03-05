#include <iostream>
#include <cstring>
#include "Car.h"

using namespace std;

void Car::InitMember(char *ID, int fuel){
    strcpy(gamerID, ID);
    fuelGauge = fuel;
    curSpeed = 0;
}

void Car::ShowCarState(){
    cout << "owner ID : " << gamerID << endl;
    cout << "fuel : " << fuelGauge << "%" << endl;
    cout << "current Speed : " << curSpeed << "km/s" << endl;
}

void Car::Accel(){
    if(fuelGauge <= 0){
        return;
    }else{
        fuelGauge -= CAR_CONST::FUEL_STEP;
    }

    if((curSpeed + CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPD){
        curSpeed = CAR_CONST::MAX_SPD;
        return;
    }
    curSpeed += CAR_CONST::ACC_STEP;
}

void Car::Break(){
    if(curSpeed < CAR_CONST::BRK_STEP){
        curSpeed = 0;
        return;
    }
    curSpeed -= CAR_CONST::BRK_STEP;
}