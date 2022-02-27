#include <iostream>

using namespace std;

void countRef(int &val) {
    val++;
}

void changeSign(int &val) {
    int temp = val;
    val = -temp;
}

int main(int argc, char **argv) {
    int val = 10;
    cout << "val : " << val << endl;
    countRef(val);
    cout << "val : " << val << endl;
    changeSign(val);
    cout << "val : " << val << endl;

    return 0;
}