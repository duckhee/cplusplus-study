#include <iostream>

using namespace std;

class Point;

class PointOP{
    private:
        int opCnt;
    public:
        PointOP():opCnt(0){

        }
        PointOP(int opCount):opCnt(opCount){

        }
        Point PointAdd(const Point &, const Point&);
        Point PointSub(const Point &, const Point&);
        ~PointOP(){
            cout<<"Operation times : "<<this->opCnt<<endl;
        }
};

class Point{
    private:
        int x;
        int y;
    public:
        Point(const int &xPos, const int &yPos):x(xPos), y(yPos){

        }
        friend Point PointOP::PointAdd(const Point& p1, const Point& p2);
        friend Point PointOP::PointSub(const Point &p1, const Point&p2);
        friend void ShowPointPos(const Point &p);
};

Point PointOP::PointAdd(const Point &p1, const Point &p2){
    opCnt++;
    return Point(p1.x + p2.x, p1.y + p2.y);
}

Point PointOP::PointSub(const Point &p1, const Point &p2){
    opCnt++;
    return Point(p1.x - p2.x, p1.y - p2.y);
}

int main(){
    Point pos1(1, 2);
    Point pos2(2, 4);
    PointOP op;

    ShowPointPos(op.PointAdd(pos1, pos2));
    ShowPointPos(op.PointSub(pos2, pos1));
    return 0;
}

void ShowPointPos(const Point &p){
    cout<<"x : "<<p.x<<", "<<"y : "<<p.y<<endl;
}