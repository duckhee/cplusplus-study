#include <iostream>

/** macro function */
#define SQUARE_DEF(x) ((x)*(x))

using namespace std;

/** inline function */
inline int SQUARE(int x) {
    return x * x;
}

/** template function */
template<typename T>
inline T SQUARE_TEMP(T x) {
    return x * x;
}

int main(int argc, char **argv) {
    cout << SQUARE(5) << endl;
    cout << SQUARE_DEF(5) << endl;
    cout << SQUARE_TEMP(5) << endl;
    cout << SQUARE(12) << endl;
    cout << SQUARE_DEF(12) << endl;
    cout << SQUARE_TEMP(12) << endl;
    cout << SQUARE(3.14) << endl;
    cout << SQUARE_DEF(3.14) << endl;
    cout << SQUARE_TEMP(3.14) << endl;
    return 0;
}