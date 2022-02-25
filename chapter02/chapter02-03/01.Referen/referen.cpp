/**
 * File Name        : referen.cpp
 * author           : Doukhee Won
 * Date             : 2022/02/26
 * Version          : v0.0.1
 */
#include <iostream>

using namespace std;

int main(int argc, char **argv) {
    int num1 = 1020;
    /** num1 address variable num2 */
    int &num2 = num1;

    num2 = 3047;
    cout << "Val : " << num1 << endl;
    /** reference value */
    cout << "Ref : " << num2 << endl;

    cout << "Val : " << &num1 << endl;
    cout << "ref : " << &num2 << endl;
    return 0;
}