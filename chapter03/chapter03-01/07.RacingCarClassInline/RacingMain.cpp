#include "CarInline.h"

int main(int argc, char **argv){
    Car run99;
    run99.InitMember("run99", 100);
    run99.Accel();
    run99.Accel();
    run99.Accel();
    run99.ShowCarState();
    run99.Break();
    run99.ShowCarState();
    return 0;
}