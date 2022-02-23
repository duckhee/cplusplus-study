#include <iostream>

using namespace std;

int main(int argc, char** argv){
    int val1, val2;
    int result = 0;
    cout<<"two number input : ";
    cin>>val1>>val2;
    if(val1 < val2){
        for(int i = val1 + 1; i < val2; i++){
            result += i;
        }
    }else{
        for(int i = val2 + 1; i < val1; i++){
            result += i;
        }
    }
    cout<<"between two number integer value add result : "<<result<<endl;
    return 0;
}