#include <iostream>

using namespace std;

int main(int argc, char **argv){
    int val = 0;
    cout<<"multiplication table"<<endl;
    cout<<"multiple number input : ";
    cin>>val;

    for(int i = 1; i < 10; i++){
        cout<<val<<"x"<<i<<"="<<val * i<<endl;
    }
    
    return 0;
}