#include <iostream>

using namespace std;

typedef struct __Point {
    int xpos;
    int ypos;
} Point;


Point *ptrAdr(Point &p1, Point &p2) {
    Point *ptr = (__Point *) malloc(sizeof(__Point));
    ptr->xpos = p1.xpos + p2.xpos;
    ptr->ypos = p1.ypos + p2.ypos;
    return ptr;
}

int main(int argc, char **argv) {
    Point *p1 = (Point *) malloc(sizeof(Point));
    Point *p2 = (Point *) malloc(sizeof(Point));

    p1->xpos = 10;
    p1->ypos = 20;
    p2->xpos = 5;
    p2->ypos = 15;
    cout << "p1 xpos : " << p1->xpos << endl;
    cout << "p1 ypos : " << p1->ypos << endl;
    cout << "p2 xpos : " << p2->xpos << endl;
    cout << "p2 ypos : " << p2->ypos << endl;

    Point *ptr = ptrAdr(*p1, *p2);

    cout << "ptr xpos : " << ptr->xpos << endl;
    cout << "ptr ypos : " << ptr->ypos << endl;
    free(p1);
    free(p2);
    free(ptr);
    return 0;
}
