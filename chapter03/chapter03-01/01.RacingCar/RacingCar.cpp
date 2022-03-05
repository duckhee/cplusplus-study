#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

#define ID_LEN              20
#define MAX_SPD             200
#define FUEL_STEP           2
#define ACC_STEP            10
#define BRK_STEP            10

typedef struct _car {
    char gamerID[ID_LEN];
    int fuelGauge;
    int curSpeed;
} Car;

void showCarState(const Car &car);

void accel(Car &car);

void breakCar(Car &car);

int main(int argc, char **argv) {
    Car run99 = {"run99", 100, 0};
    accel(run99);
    accel(run99);
    showCarState(run99);
    breakCar(run99);
    showCarState(run99);

    Car *sped77 = (_car *) malloc(sizeof(Car));
    bzero(sped77->gamerID, ID_LEN);
    strcpy(sped77->gamerID, "sped77");
    sped77->fuelGauge = 100;
    sped77->curSpeed = 0;
    accel(*sped77);
    breakCar(*sped77);
    showCarState(*sped77);

    free(sped77);
    return 0;
}


void showCarState(const Car &car) {
    cout << "owner ID : " << car.gamerID << endl;
    cout << "fuel : " << car.fuelGauge << "%" << endl;
    cout << "current Speed : " << car.curSpeed << "km/s" << endl;
}

void accel(Car &car) {
    if (car.fuelGauge < 0) {
        return;
    } else {
        car.fuelGauge -= FUEL_STEP;
    }

    if (car.curSpeed + ACC_STEP >= MAX_SPD) {
        car.curSpeed = MAX_SPD;
        return;
    }
    car.curSpeed += ACC_STEP;
}

void breakCar(Car &car) {
    if (car.curSpeed < BRK_STEP) {
        car.curSpeed = 0;
        return;
    }
    car.curSpeed -= BRK_STEP;
}