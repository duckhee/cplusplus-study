#include <iostream>
#include <cstring>

using namespace std;

class Person{
    private:
        char *name;
        int age;
    public:
        Person(char *_name, int myAge): age(myAge){
            name = new char[strlen(_name) + 1];
            strcpy(name, _name);
        }
        Person(){
            name = NULL;
            age = 0;
            cout<<"Called Person()"<<endl;
        }
        void SetPersonInfo(char *_name, int myAge){
            name = _name;
            age = myAge;
        }
        void ShowPersonInfo() const{
            cout<<"name : "<<name<<endl;
            cout<<"age : "<<age<<endl;
        }
        ~Person(){
            delete []name;
            cout<<"Called destructor !"<<endl;
        }
};

int main(int argc, char **argv){
    // 객체 배열 선언
    Person parr[3];
    char nameStr[100];
    char *strPtr;
    int age;
    int len;
    for(int i = 0; i < 3; i++){
        cout<<"name : ";
        cin>>nameStr;
        cout<<"age : ";
        cin>>age;
        len = strlen(nameStr) + 1;
        strPtr = new char[len];
        strcpy(strPtr, nameStr);
        parr[i].SetPersonInfo(strPtr, age);
    }
    parr[0].ShowPersonInfo();
    parr[1].ShowPersonInfo();
    parr[2].ShowPersonInfo();
    return 0;
}