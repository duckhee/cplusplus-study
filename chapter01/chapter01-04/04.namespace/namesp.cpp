#include <iostream>

using namespace std;

namespace BestComImpl {
    void SimpleFunc(void);
}

namespace BestComImpl {
    void PrettyFunc(void);
}

namespace ProgComImpl {
    void SimpleFunc(void);
}

namespace ProgComImpl {
    void PrettyFunc(void);
}

namespace firstImpl {
    int num = 1;

    void printNumber() {
        cout << "number : " << num << endl;
    }

    namespace secondImpl {
        int num = 2;

        void printNumber() {
            cout << "number : " << num << endl;
        }
    }
    namespace subSecondImpl {
        int num = 3;

        void printNumber() {
            cout << "number : " << num << endl;
        }
    }

}

int main(int argc, char **argv) {
    BestComImpl::SimpleFunc();
    cout << endl;
    firstImpl::printNumber();
    firstImpl::secondImpl::printNumber();
    firstImpl::subSecondImpl::printNumber();
    return 0;
}

void BestComImpl::SimpleFunc() {
    cout << "BestCom define function SimpleFunc" << endl;
    /** call same namespace function call */
    PrettyFunc();
    /** another name space function call */
    ProgComImpl::SimpleFunc();
}

void BestComImpl::PrettyFunc() {
    cout << "So Pretty!" << endl;
}

void ProgComImpl::SimpleFunc() {
    cout << "ProgCom define function SimpleFunc" << endl;
}
