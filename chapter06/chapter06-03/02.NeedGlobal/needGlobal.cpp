#include <iostream>

using namespace std;

int simObjCnt = 0;
int cmxObjCnt = 0;

class SoSimple{
    public:
        SoSimple(){
            simObjCnt++;
            cout<<"Simple Obj Count : "<<simObjCnt<<"번째 SoSimple 객체"<<endl;
        }
};

class SoComplex{
    public:
        SoComplex(){
            cmxObjCnt++;
            cout<<"mx Obj Count : "<<cmxObjCnt<<"번쨰 SoComplex 객체"<<endl;
        }
        SoComplex(SoComplex &copy){
            cmxObjCnt++;
            cout<<"cmxObj Count : "<<cmxObjCnt<<"번쨰 SoComplex 객체"<<endl;
        }

};

int main(){
    SoSimple sim1;
    SoSimple sim2;

    SoComplex com1;
    SoComplex com2 = com1;
    SoComplex();
    return 0;
}