#include <iostream>
#include <stdbool.h>
#include "Point.hpp"

using namespace std;

bool Point::InitMembers(int xPos, int yPos){
    if(xPos < 0 || yPos < 0){
        cout<<"out of value"<<endl;
        return false;
    }
    x = xPos;
    y = yPos;
    return true;
}

int Point::GetX() const {
    return x;
}

int Point::GetY() const{
    return y;
}

bool Point::SetX(int xPos){
    if(xPos < 0 || xPos > 100){
        cout<<"out of value "<<endl;
        return false;
    }
    x = xPos;
    return true;
}

bool Point::SetY(int yPos){
    if(yPos < 0 || yPos > 100){
        cout<<"out of value"<<endl;
        return false;
    }
    y = yPos;
    return true;
}