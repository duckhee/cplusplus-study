#include <iostream>

using namespace std;

class SoSimple{
    private:
        int num;
    public:
        SoSimple(int n):num(n){

        }
        // 주소값을 반환
        SoSimple& AddNum(int n){
            num += n;
            return *this; // 주소 값을 담고 있는 포인터 변수 반환
        }
        void SimpleFunc(){
            cout<<"SimpleFunc : "<<num<<endl;
        }
        void SimpleFunc() const{
            cout<<"const SimpleFunc : "<<num<<endl;
        }
};

void YourFunc(const SoSimple &obj){
    obj.SimpleFunc();
}

int main(){
    SoSimple obj1(2);
    const SoSimple obj2(7);

    obj1.SimpleFunc();
    obj2.SimpleFunc();

    YourFunc(obj1);
    YourFunc(obj2);
    return 0;
}
