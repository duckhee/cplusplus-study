#include "Printer.hpp"
#include <iostream>
#include <cstring>

using namespace std;

void Printer::SetString(char *s){
    strcpy(str, s);
}

void Printer::ShowString(){
    cout<<str<<endl;
}