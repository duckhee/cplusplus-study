#include <iostream>

namespace Hybrid {
    void HybFunc(void) {
        std::cout << "So simple function!" << std::endl;
        std::cout << "In namespace Hybrid!" << std::endl;
    }
}

int main(void) {
    /** HybFunc using not namespace name call */
    using Hybrid::HybFunc;
    HybFunc();
    return 0;
}