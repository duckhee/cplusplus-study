#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

namespace CAR_CONST{
        enum {
        ID_LEN = 20,
        MAX_SPD = 200,
        FUEL_STEP = 2,
        ACC_STEP = 10,
        BRK_STEP = 10
    };
};



typedef struct _Car{
    char gamerID[CAR_CONST::ID_LEN];
    int fuelGauge;
    int curSpeed;
    void Accel();
    void ShowCarState();
    void Break();
} Car;

typedef struct _CCar{
    char gamerID[CAR_CONST::ID_LEN];
    int fuelGauge;
    int curSpeed;
    void (*Accel)(_CCar *car);
    void (*ShowCarState)(_CCar *car);
    void (*Break)(_CCar *car);
} CCar;

void CAccel(CCar *car);
void CShowCarState(CCar *car);
void CBreak(CCar *car);

int main(int argc, char **argv){
    Car run99 = {"run99", 100, 0};
    run99.Accel();
    run99.Accel();
    run99.ShowCarState();
    run99.Break();
    run99.ShowCarState();

    Car sped77 = {"sped77", 100, 0};
    sped77.Accel();
    sped77.Break();
    sped77.ShowCarState();

    cout<<"c style test"<<endl;
    CCar *test = (CCar *)malloc(sizeof(CCar));
    bzero(test->gamerID, sizeof(CAR_CONST::ID_LEN));
    strcpy(test->gamerID, "tester");
    test->fuelGauge = 100;
    test->curSpeed = 0;
    test->Accel = CAccel;
    test->ShowCarState = CShowCarState;
    test->ShowCarState(test);
    return 0;
}

void Car::Accel(){
        if (fuelGauge <= 0) {
            return;
        } else {
            fuelGauge -= CAR_CONST::FUEL_STEP;
        }

        if ((curSpeed + CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPD) {
            curSpeed = CAR_CONST::MAX_SPD;
            return;
        }
        curSpeed += CAR_CONST::ACC_STEP;

}



void Car::ShowCarState(){
    cout << "owner ID : " << gamerID << endl;
    cout << "fuel : " << fuelGauge << "%" << endl;
    cout << "current Speed : " << curSpeed << "km/s" << endl;
}

void Car::Break(){
        if (curSpeed < CAR_CONST::BRK_STEP) {
            curSpeed = 0;
            return;
        }
        curSpeed -= CAR_CONST::BRK_STEP;
}

/** c style struct function */

void CAccel(CCar *car){
        if (car->fuelGauge <= 0) {
            return;
        } else {
            car->fuelGauge -= CAR_CONST::FUEL_STEP;
        }

        if ((car->curSpeed + CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPD) {
            car->curSpeed = CAR_CONST::MAX_SPD;
            return;
        }
        car->curSpeed += CAR_CONST::ACC_STEP;

}
void CShowCarState(CCar *car){
    cout << "owner ID : " << car->gamerID << endl;
    cout << "fuel : " << car->fuelGauge << "%" << endl;
    cout << "current Speed : " << car->curSpeed << "km/s" << endl;
}


void CBreak(CCar *car){
        if (car->curSpeed < CAR_CONST::BRK_STEP) {
            car->curSpeed = 0;
            return;
        }
        car->curSpeed -= CAR_CONST::BRK_STEP;
}
