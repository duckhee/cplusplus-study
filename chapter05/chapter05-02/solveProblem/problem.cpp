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
        NameCard(const NameCard &copy){
            name = new char[strlen(copy.name) + 1];
            company = new char[strlen(copy.company) + 1];
            phone = new char[strlen(copy.phone) + 1];
            strcpy(name, copy.name);
            strcpy(company, copy.company);
            strcpy(phone, copy.phone);
            position = copy.position;
        }
        void ShowNameCardInfo() const{
            cout<<"name : "<<name<<endl;
            cout<<"company : "<<company<<endl;
            cout<<"phone : "<<phone<<endl;
            cout<<"age : "<<position<<endl;
        }
        ~NameCard(){
            delete []name;
            delete []company;
            delete []phone;
        }
    
};

int main(int argc, char **argv){
    NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
    NameCard copy1 = manClerk;
    NameCard manSENIOR("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
    NameCard copy2 = manSENIOR;
    copy1.ShowNameCardInfo();
    copy2.ShowNameCardInfo();
    return 0;
}