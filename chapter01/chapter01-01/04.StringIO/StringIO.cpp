#include <iostream>

using namespace std;

int main(int argc, char **argv){
    char name[100];
    char lang[200];

    cout<<"what's your name? ";
    cin>>name;

    cout<<"what's your faorite program language? ";
    cin>>lang;

    cout<<"my name is "<<name<<endl;
    cout<<"my favorite program language is "<<lang<<endl;
    return 0;
}