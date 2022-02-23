#include <iostream>

using namespace std;

int main(int argc, char **argv){
    int val1;
    cout<<"first number input : ";
    cin>>val1;
    
    int val2;
    cout<<"second number input : ";
    cin>>val2;

    int result = val1 + val2;
    cout<<"add result : "<<result<<endl;
    return 0;
}