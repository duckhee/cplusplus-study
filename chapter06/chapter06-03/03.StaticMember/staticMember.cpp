#include <iostream>

using namespace std;

class SoSimple{
    private:
        static int simObjCnt;
    public:
        SoSimple(){
            simObjCnt++;
            cout<<"SoSimple Object Counter : "<<simObjCnt<<endl;
        }
};
// static 인수는 초기화를 해주어야한다.
int SoSimple::simObjCnt = 0;

class SoComplex{
    private:
        static int cmxObjCnt;
    public:
        SoComplex(){
            cmxObjCnt++;
            cout<<"SoComplex Object Counter : "<<cmxObjCnt<<endl;
        }
        SoComplex(SoComplex &copy){
            cmxObjCnt++;
            cout<<"Copy SoComplex Object Counter : "<<cmxObjCnt<<endl;
        }
};

int SoComplex::cmxObjCnt = 0;

int main(){
    SoSimple sim1;
    SoSimple sim2;

    SoComplex cmx1;
    SoComplex cmx2 = cmx1;
    SoComplex();
    return 0;
}