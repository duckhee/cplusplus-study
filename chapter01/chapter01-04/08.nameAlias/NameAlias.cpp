#include <iostream>

using namespace std;

int num = 10;

void globalAccess();

namespace AAA {
    namespace BBB {
        namespace CCC {
            int num1, num2;
        }
    }
}

int main() {

    AAA::BBB::CCC::num1 = 20;
    AAA::BBB::CCC::num2 = 30;

    /** namespace alias setting */
    namespace ABC = AAA::BBB::CCC;

    cout << ABC::num1 << endl;
    cout << ABC::num2 << endl;
    globalAccess();
    return 0;
}

void globalAccess() {
    int num = 25;
    cout << "local value : " << num << endl;
    cout << "global value : " << ::num << endl;
}