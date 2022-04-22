#include <iostream>
#include <cstring>

using namespace std;

class Temporary{
    private:
        int num;
    public:
        Temporary(int n):num(n){
            cout<<"Create Object : "<<num<<endl;
        }
        ~Temporary(){
            cout<<"destroy obj : "<<num<<endl;
        }
        void ShowTempInfo() const{
            cout<<"My num is "<<num<<endl;
        }
};

int main(int argc, char **argv){
    Temporary(100);
    cout<<"************ after make ! ************ "<<endl<<endl;
    Temporary(200).ShowTempInfo();
    cout<<"************ after make ! ************ "<<endl<<endl;

    // 참조자에 참조되는 임시객체는 바로 소멸되지 않는다.
    const Temporary &ref = Temporary(300);
    cout<<"************ end of main ! ************ "<<endl<<endl;
    return 0;
}