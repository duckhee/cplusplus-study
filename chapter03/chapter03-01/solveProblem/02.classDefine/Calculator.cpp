#include "Calculator.hpp"
#include <iostream>

using namespace std;

void Calculator::Init(){
    addCount = 0;
    subCount = 0;
    multiCount = 0;
    divCount = 0;
}

double Calculator::Add(double num1, double num2){
    addCount ++;
    return num1 + num2;
}

double Calculator::Min(double num1, double num2){
    subCount++;
    return num1 - num2;
}

double Calculator::Mul(double num1, double num2){
    multiCount++;
    return num1 * num2;
}

double Calculator::Div(double num1, double num2){
    divCount++;
    return num1 / num2;
}

void Calculator::ShowOpCount(){
    cout<<"add count : "<<addCount<<endl;
    cout<<"sub count : "<<subCount<<endl;
    cout<<"multi count : "<<multiCount<<endl;
    cout<<"div count : "<<divCount<<endl;
}