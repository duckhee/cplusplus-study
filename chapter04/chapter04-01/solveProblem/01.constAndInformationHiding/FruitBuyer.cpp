#include "FruitBuyer.hpp"
#include <iostream>

using namespace std;

void FruitBuyer::InitMember(int money){
    myMony = money;
    numOfApples = 0;
}

void FruitBuyer::BuyApple(FruitSeller &seller, int money){
    if(money < 0){
        cout<<"wrong value"<<endl;
        return;
    }
    numOfApples+= seller.SaleApples(money);
    myMony -= money;
}

void FruitBuyer::ShowBuyResult() const {
    cout<<"result Money : "<<myMony<<endl;
    cout<<"number of apple : "<<numOfApples<<endl;
}