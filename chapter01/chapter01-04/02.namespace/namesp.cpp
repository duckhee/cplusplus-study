
#include <iostream>

/** :: is scope resolution operator */

namespace BestComImpl {
    void SimpleFunc(void) {
        std::cout << "bestCom define function" << std::endl;
    }
}

namespace ProgComImpl {
    void SimpleFunc(void) {
        std::cout << "ProgCom define function" << std::endl;
    }
}

int main(void) {
    BestComImpl::SimpleFunc();
    ProgComImpl::SimpleFunc();
    return 0;
}