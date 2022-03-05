#ifndef __CAR_INLINE_H__
#define __CAR_INLINE_H__

#include <iostream>
#include <cstring>

using namespace std;

namespace CAR_CONST{
    enum{
        ID_LEN = 20,
        MAX_SPD = 200,
        FUEL_STEP = 2,
        ACC_STEP = 10,
        BRK_STEP = 10
    };
};

class Car{
    private:
        char gamerID[CAR_CONST::ID_LEN];
        int fuelGauge;
        int curSpeed;
    public:
        void InitMember(char *ID, int fuel);
        void ShowCarState();
        void Accel();
        void Break();
};

inline void Car::ShowCarState(){
    cout << "owner ID : " << gamerID << endl;
    cout << "fuel : " << fuelGauge << "%" << endl;
    cout << "current Speed : " << curSpeed << "km/s" << endl;
}

inline void Car::Break(){
    if(curSpeed < CAR_CONST::BRK_STEP){
        curSpeed = 0;
        return;
    }
    curSpeed -= CAR_CONST::BRK_STEP;
}

#endif