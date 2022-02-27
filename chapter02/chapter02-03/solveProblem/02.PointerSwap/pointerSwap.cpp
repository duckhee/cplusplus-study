#include <iostream>

using namespace std;

void pointerSwap(int *(&val1), int *(&val2)) {
    int *ptr = val1;
    val1 = val2;
    val2 = ptr;
}

int main(int argc, char **argv) {
    int num1 = 5;
    int *ptr1 = &num1;
    int num2 = 10;
    int *ptr2 = &num2;
    cout << "ptr1 : " << *ptr1 << endl;
    cout << "ptr2 : " << *ptr2 << endl;

    pointerSwap(ptr1, ptr2);
    cout << "ptr1 : " << *ptr1 << endl;
    cout << "ptr2 : " << *ptr2 << endl;
    return 0;
}