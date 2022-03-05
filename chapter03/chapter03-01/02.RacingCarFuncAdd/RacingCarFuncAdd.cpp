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

    void showCarState() {
        cout << "gamer ID : " << gamerID << endl;
        cout << "fuel : " << fuelGauge << "%" << endl;
        cout << "current Speed : " << curSpeed << "km/s" << endl;
    }

    void accel() {
        if (fuelGauge <= 0) {
            return;
        } else {
            fuelGauge -= FUEL_STEP;
        }
        if (curSpeed + ACC_STEP >= MAX_SPD) {
            curSpeed = MAX_SPD;
            return;
        }
        curSpeed += ACC_STEP;
    }

    void breakCar() {
        if (curSpeed < BRK_STEP) {
            curSpeed = 0;
            return;
        }
        curSpeed -= BRK_STEP;
    }
} Car;

int main(int argc, char **argv) {
    Car run99 = {"run99", 100, 0};
    run99.accel();
    run99.accel();
    run99.showCarState();
    run99.breakCar();
    run99.showCarState();
    Car *sped97 = (Car *) malloc(sizeof(Car));
    bzero(sped97->gamerID, sizeof(ID_LEN));
    strcpy(sped97->gamerID, "sped97");
    sped97->fuelGauge = 100;
    sped97->curSpeed = 0;
    sped97->accel();
    sped97->breakCar();
    sped97->showCarState();
    free(sped97);
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