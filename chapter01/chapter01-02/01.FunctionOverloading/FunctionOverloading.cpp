#include <iostream>

using namespace std;

void MyFunc(void){
    cout<<"MyFunction(void) called"<<endl;
}

void MyFunc(char c){
    cout<<"MyFunction(char c) called"<<endl;
}

void MyFunc(int a, int b){
    cout<<"MyFunction(int a, int b) called"<<endl;
}

int main(int argc, char **argv){
    MyFunc();
    MyFunc('A');
    MyFunc(12, 13);
    return 0;
}