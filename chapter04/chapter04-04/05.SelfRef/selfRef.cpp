#include <iostream>
#include <cstdio>

using namespace std;

class SelfRef{
    private:
        int num;
    public:
        SelfRef(int n) : num(n){
            cout<<"Object Constructor"<<endl;
        }
        SelfRef& Adder(int n){
            this->num += n;
            // return This Object
            return *this;
        }
        // return this Object
        SelfRef& ShowTwoNumber(){
            cout<<"number :: "<<num<<endl;
            return *this;
        }
};

int main(int argc, char **argv){
    // create object
    SelfRef obj(3);
    // get object address
    SelfRef &ref = obj.Adder(2);
    obj.ShowTwoNumber();
    ref.ShowTwoNumber();
    // get ref pointer address 
    printf("get ref Address : %p\r\n", &ref);
    return 0;
}