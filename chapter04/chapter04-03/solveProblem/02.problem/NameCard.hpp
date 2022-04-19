#ifndef __NAME_CARD_H__
#define __NAME_CARD_H__

#include <iostream>
#include <cstring>

using namespace std;



namespace COMP_POS{
    enum {
        CLERK,
        SENIOR,
        ASSIST,
        MANAGER
    };
    void ShowPositionInfo(int pos);
}


class NameCard{
    private:
        char *name;
        char *company;
        char *phone;
        int position;
    public:
        NameCard(char *_name, char *_company, char *_phone, int _position):position(_position){
            name = new char[strlen(_name) + 1];
            company = new char[strlen(_company) + 1];
            phone = new char[strlen(_phone) + 1];
            strcpy(name, _name);
            strcpy(company, _company);
            strcpy(phone, _phone);
        }
        void ShowNameCardInfo() const;
        ~NameCard(){
            delete []name;
            delete []company;
            delete []phone;
        }
};

#endif