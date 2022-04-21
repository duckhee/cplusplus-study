#include <iostream>

using namespace std;

class SoSimple{
    private:
        int num;
    public:
        SoSimple(int n):num(n){
            cout<<"num = "<<num<<endl;
            cout<<"address = "<<this<<endl;
        }
        void ShowSimpleData(){
            cout<<num<<endl;
        }
        SoSimple *GetThisPointer(){
            return this;
        }
};

int main(int argc, char **argv){
    SoSimple sim1(100);
    SoSimple *ptr = sim1.GetThisPointer();
    cout<<"pointer : "<<ptr<<endl;
    ptr->ShowSimpleData();
    SoSimple sim2(200);
    SoSimple *ptr2 = sim2.GetThisPointer();
    cout<<"Pointer Sim2 = "<<ptr2<<endl;
    ptr2->ShowSimpleData();
    /** new keyword use */
    SoSimple *ptr3 = new SoSimple(300);
    cout<<"Pointer Sim3 = "<<ptr3<<endl;
    ptr3->ShowSimpleData();
    return 0;
}