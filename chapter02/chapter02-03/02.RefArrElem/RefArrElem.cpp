/**
 * File Name        : RefArrElem.cpp
 * author           : Doukhee Won
 * Date             : 2022/02/26
 * Version          : v0.0.1
 */
#include <iostream>

using namespace std;

int main(int argc, char **argv) {
    int arr[3] = {1, 3, 5};
    int &ref1 = arr[0];
    int &ref2 = arr[1];
    int &ref3 = arr[2];

    cout << ref1 << endl << ref2 << endl << ref3 << endl;
    return 0;
}