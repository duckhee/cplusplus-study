#include <iostream>

using namespace std;

class SoSimple{
    private:
        int num1;
        int num2;
    public:
        SoSimple(int n1, int n2):num1(n1), num2(n2){

        }
        /**
        SoSimple(SoSimple &copy):num1(copy.num1), num2(copy.num2){
            cout<<"Called SoSimple(SoSimple &copy)"<<endl;
        }
        */
       // 복사시 원ㅗ 데이터를 변경을 할 수 없도록 설정을 하기 위한 const
       explicit SoSimple(const SoSimple &copy):num1(copy.num1), num2(copy.num2){
            cout<<"Called SoSimple(SoSimple &copy)"<<endl;
        }
        void ShowSimpleData(){
            cout<<num1<<endl;
            cout<<num2<<endl;
        }
};

int main(int argc, char **argv){
    SoSimple sim1(15, 30);
    cout<<"Init Constructor Before"<<endl;
    //SoSimple sim2 = sim1; // 다음과 같이 사용을 하지 못하게 하기 위해서는 explicit라는 키워드를 복사 생성자에 달아주면 된다.
    SoSimple sim2(sim1);
    cout<<"Init Constructor After"<<endl; // using copy object Init constructor
    sim2.ShowSimpleData();
    return 0;
}