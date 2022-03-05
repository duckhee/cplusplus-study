#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

typedef struct _Pointer {
    int xpos;
    int ypos;

    void showPosition() {
        cout << "[" << xpos << ", " << ypos << "]" << endl;
    }

    void addPointer(const _Pointer &pos) {
        xpos += pos.xpos;
        ypos += pos.ypos;
    }

    void movePos(int x, int y) {
        xpos += x;
        ypos += y;
    }

} Pointer;

int main(int argc, char **argv) {
    Pointer pos1 = {12, 4};
    Pointer pos2 = {20, 30};
    pos1.movePos(-7, 10);
    pos1.showPosition();
    pos1.addPointer(pos2);
    pos1.showPosition();
    return 0;
}
