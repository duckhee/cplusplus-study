#include <iostream>

using namespace std;

class FruitSeller{
    private:
        int APPLE_PRICE;
        int numOfApples;
        int myMoney;
    public:
        void InitMembers(int price, int num, int money){
            APPLE_PRICE = price;
            numOfApples = num;
            myMoney = money;
        }
        int SaleApples(int money){
            int num = money / APPLE_PRICE;
            numOfApples -= num;
            myMoney += money;
            return num;
        }
        void ShowSaleResult(){
            cout<<"num of apple : "<<numOfApples<<endl;
        }
};

class FruitBuyer{
    private:
        int myMoney;
        int numOfApples;
    public:
        void InitMember(int money){
            myMoney = money;
            numOfApples = 0;
        }

        void BuyApples(FruitSeller &seller, int money){
            numOfApples += seller.SaleApples(money);
            myMoney -= money;
        }

        void ShowBuyResult(){
            cout<<"result money : "<<myMoney<<endl;
            cout<<"apple number : "<<numOfApples<<endl<<endl;
        }
};

int main(int argc, char **argv){
    FruitSeller seller;
    seller.InitMembers(1000, 20, 0);

    FruitBuyer buyer;
    buyer.InitMember(5000);
    buyer.BuyApples(seller, 2000);

    cout<<"Fruit seller"<<endl;
    seller.ShowSaleResult();
    cout<<"fruit buyer"<<endl;
    buyer.ShowBuyResult();
    return 0;
}