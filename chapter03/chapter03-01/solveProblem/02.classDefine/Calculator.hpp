#ifndef __CALCULATOR_H__
#define __CALCULATOR_H__

#include <iostream>

using namespace std;

class Calculator{
    private:
        int addCount;
        int subCount;
        int multiCount;
        int divCount;
    public:
        void Init();
        double Add(double, double);
        double Min(double, double);
        double Mul(double, double);
        double Div(double, double);
        void ShowOpCount();
};

#endif