#include <iostream>
#include <cstring>

using namespace std;

class Person{
    private:
        char *name;
        int age;
    public:
        Person(char *_name, int _age):age(_age){
            int len = strlen(_name) + 1;
            name = new char[len];
            strcpy(name, _name);
        }
        Person(){
            name = NULL;
            age = 0;
        }
        void SetPersonInfo(char *_name, int _age){
            name = new char[strlen(_name) + 1];
            strcpy(name, _name);
            age = _age;
        }
        void ShowPersonInfo() const{
            cout<<"name : "<<name<<", age : "<<age<<endl;
        }
        ~Person(){
            delete []name;
            cout<<"called desctructor"<<endl;
        }
};

int main(int argc, char **argv){
    // Object Array
    Person *parr[3];
    // name temp
    char nameStr[100];
    int age;
    for(int i = 0 ; i < 3; i++){
        cout<<"name :";
        cin>>nameStr;
        cout<<"age : ";
        cin>>age;
        parr[i] = new Person(nameStr, age);
    }
    parr[0]->ShowPersonInfo();
    parr[1]->ShowPersonInfo();
    parr[2]->ShowPersonInfo();
    // delete object
    delete parr[0];
    delete parr[1];
    delete parr[2];
    return 0;
}