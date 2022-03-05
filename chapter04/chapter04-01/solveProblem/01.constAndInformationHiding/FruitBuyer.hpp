#ifndef __FRUIT_BUYER_H__
#define __FRUIT_BUYER_H__

#include "FruitSeller.hpp"

class FruitBuyer{
    private:
        int myMony;
        int numOfApples;
    public:
        void InitMember(int money);
        void BuyApple(FruitSeller &seller, int money);
        void ShowBuyResult() const;
};

#endif