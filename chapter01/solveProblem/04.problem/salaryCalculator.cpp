#include <iostream>

using namespace std;

int main(int argc, char **argv){
    const int normalSalary = 50;
    int incentiveSalary = 0;
    int salePrice = 0;

    for(; ;){
        cout<<"input sale price : ";
        cin>>salePrice;
        if(salePrice == -1){
            break;
        }
        incentiveSalary = salePrice * 0.12;
        cout<<"your salary total : $"<<normalSalary + incentiveSalary<<"0000"<<endl;
    }
    return 0;
}