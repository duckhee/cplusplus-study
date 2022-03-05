#ifndef __FRUIT_SELLER_H__
#define __FRUIT_SELLER_H__

class FruitSeller{
    private:
        int APPLE_PRICE;
        int numOfApple;
        int myMoney;
    public:
        void InitMembers(int price, int num, int money);
        int SaleApples(int money);
        void ShowSaleResult() const;
};

#endif