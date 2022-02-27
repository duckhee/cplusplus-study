#include <iostream>

using namespace std;

int &refRetFuncOne(int &ref) {
    ref++;
    return ref;
}

int main(int argc, char **argv) {
    int num1 = 1;
    int num2 = refRetFuncOne(num1);
    num1 += 1;
    num2 += 100;
    cout << "num1 : " << num1 << endl;
    cout << "num2 : " << num2 << endl;
    return 0;
}