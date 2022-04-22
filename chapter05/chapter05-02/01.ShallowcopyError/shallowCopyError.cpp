#include <iostream>
#include <cstring>

using namespace std;

class Person{
    private:
        char *name;
        int age;
    public:
        Person(char *myName, int myAge):age(myAge){
            name = new char[strlen(myName) + 1];
            strcpy(name, myName);
        }
        // default copy constructor 는 얕은 복사를 사용을 하므로 주소 값이 같아 진다.
        Person(Person &copy){
            name = new char[strlen(copy.name) + 1];
            strcpy(name, copy.name);
            age = copy.age;
        }
        void ShowPersonInfo() const{
            cout<<"name : "<<name<<endl;
            cout<<"age : "<<age<<endl;
        }
        ~Person(){
            delete []name;
            cout<<"called destructor!"<<endl;
        }
};

int main(int argc, char **argv){
    Person man1("Lee dong woo", 29);
    Person man2 = man1; // 단순 참조를 사용을 하므로 객체의 주소 값이 같다.
    man1.ShowPersonInfo();
    man2.ShowPersonInfo();
    return 0;
}