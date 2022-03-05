#include "FruitBuyer.hpp"
#include "FruitSeller.hpp"
#include <iostream>

using namespace std;

int main(int argc, char **argv){
    FruitSeller seller;
    seller.InitMembers(1000, 20, 0);
    FruitBuyer buyer;
    buyer.InitMember(5000);
    buyer.BuyApple(seller, 2000);

    cout<<"seller result : "<<endl;
    seller.ShowSaleResult();
    cout<<"buyer result : "<<endl;
    buyer.ShowBuyResult();
    return 0;
}