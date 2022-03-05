#include <iostream>

using namespace std;

class Point{
    public:
        int x;
        int y;
};

class Rectangle{
    public:
        Point upLeft;
        Point lowRight;
    public:
        void ShowRectInfo(){
            cout<<"up Left : ["<<upLeft.x<<", "<<upLeft.y<<"]"<<endl;
            cout<<"low right : ["<<lowRight.x<<", "<<lowRight.y<<"]"<<endl;
        }
};

int main(void){
    Point pos1 = {-2, 4};
    Point pos2 = {5, 9};
    Rectangle rec = {pos1, pos2};
    rec.ShowRectInfo();
    return 0;
}