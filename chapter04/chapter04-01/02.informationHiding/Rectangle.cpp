#include <iostream>
#include "Rectangle.hpp"

using namespace std;

bool Rectangle::InitMember(const Point &ul, const Point &lr){
    if(ul.GetX() > lr.GetX() || ul.GetY() > lr.GetY()){
        cout<<"wrong position value"<<endl;
        return false;
    }
    upLeft = ul;
    lowRight = lr;
    return true;
}

void Rectangle::ShowRectInfo() const{
    cout<<"up left : ["<<upLeft.GetX() << ", "<<upLeft.GetY() <<"]"<<endl;
    cout<<"low right : ["<<lowRight.GetX() <<", "<<lowRight.GetY() << endl;
}