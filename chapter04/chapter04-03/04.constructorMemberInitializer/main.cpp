#include <iostream>
#include "Point.h"
#include "Rectangle.h"

using namespace std;

int main(int argc, char ** argv){
    Rectangle rec(1, 1, 5, 5);
    rec.ShowRectInfo();
    return 0;
}