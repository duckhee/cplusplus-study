#ifndef __RECTANGLE_H__
#define __RECTANGLE_H__

#include "Point.hpp"

class Rectangle{
    private:
        Point upLeft;
        Point lowRight;
    public:
        bool InitMember(const Point &ul, const Point &lr);
        void ShowRectInfo() const;
};

#endif