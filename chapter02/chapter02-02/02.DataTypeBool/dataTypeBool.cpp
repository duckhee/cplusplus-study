/**
 * File Name        : dataTypeBool.cpp
 * author           : Doukhee Won
 * Date             : 2022/02/26
 * Version          : v0.0.1
 */
#include <iostream>

using namespace std;

bool isPositive(int num) {
    return num <= 0 ? false : true;
}

int main(int argc, char **argv) {
    bool isPos;
    int num;
    cout << "Input number : ";
    cin >> num;
    isPos = isPositive(num);
    isPos ? cout << "Positive number" << endl : cout << "Negative number" << endl;
    return 0;
}
