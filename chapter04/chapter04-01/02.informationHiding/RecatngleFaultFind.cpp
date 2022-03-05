#include <iostream>
#include "Point.hpp"
#include "Rectangle.hpp"

using namespace std;

int main(int argc, char **argv){
    Point pos1;
    if(!pos1.InitMembers(-2, 4)){
        cout<<"Init Failed"<<endl;
    }
    if(!pos1.InitMembers(2, 4)){
        cout<<"Init Failed"<<endl;
    }
    Point pos2;
    if(!pos2.InitMembers(5, 9)){
        cout<<"Init Failed"<<endl;
    }
    Rectangle rec;
    if(!rec.InitMember(pos2, pos1)){
        cout<<"Init Failed"<<endl;
    }
    if(!rec.InitMember(pos1, pos2)){
        cout<<"Init Failed"<<endl;
    }
    rec.ShowRectInfo();
    return 0;
}