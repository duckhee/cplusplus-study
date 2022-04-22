#include <iostream>

using namespace std;

class SoSimple{
    private:
        int num;
    public:
        SoSimple(int n):num(n){

        }
        SoSimple(const SoSimple &copy):num(copy.num){
            cout<<"called SoSimple(const SoSimple &copy)"<<endl;
        }
        SoSimple &AddNum(int n){
            num += n;
            return *this;
        }
        void ShowData() const{
            cout<<"num : "<<num<<endl;
        }
};

SoSimple SoSimpleFuncObj(SoSimple obj){
    cout<<"return before"<<endl;
    return obj;
}

int main(int argc, char **argv){
    SoSimple sim(7);
    // method chaining 형태는 임시 객체를 생성해서 최종적으로 반환할 때, 복사한 객체를 반환한다.
    SoSimpleFuncObj(sim).AddNum(30).ShowData();
    sim.ShowData();
    return 0;
}