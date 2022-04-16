#include <iostream>

using namespace std;

class AAA{
    public:
        AAA(){
            cout<<"empty object"<<endl;
        }
        void ShowYourName(){
            cout<<"I'm class AAA"<<endl;
        }
};

class BBB{
    private:
        AAA &ref;
        const int &num;
    public:
        BBB(AAA &ref, const int &n):ref(ref), num(n){

        }
        void ShowYourName(){
            ref.ShowYourName();
            cout<<"and "<<endl;
            cout<<"I ref num "<<num<<endl;
        }
};

int main(int argc, char **argv){
    AAA obj1;
    BBB obj2(obj1, 20);
    obj2.ShowYourName();
    return 0;
}