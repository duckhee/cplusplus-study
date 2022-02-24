#include <iostream>

using namespace std;

namespace BestComImpl {
    void SimpleFunc(void);
}

namespace ProgComImpl {
    void SimpleFunc(void);
}

int main(int argc, char **argv) {
    BestComImpl::SimpleFunc();
    ProgComImpl::SimpleFunc();
    return 0;
}

void BestComImpl::SimpleFunc() {
    cout << "BestComImpl Define function" << endl;
}

void ProgComImpl::SimpleFunc() {
    cout << "ProgCom Define function" << endl;
}