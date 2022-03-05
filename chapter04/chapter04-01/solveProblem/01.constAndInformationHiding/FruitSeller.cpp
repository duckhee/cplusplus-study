#include <iostream>
#include "FruitSeller.hpp"

using namespace std;

void FruitSeller::InitMembers(int price, int num, int money){
    APPLE_PRICE = price;
    numOfApple = num;
    myMoney = money;
}
int FruitSeller::SaleApples(int money){
    if(money < 0){
        cout<<"wrong value"<<endl;
        return 0;
    }
    int num = money / APPLE_PRICE;
    numOfApple -= num;
    myMoney += money;
    return num;
}

void FruitSeller::ShowSaleResult() const {
    cout<<"num of apple : "<<numOfApple<<endl;
    cout<<"sell result : "<<myMoney<<endl;
}