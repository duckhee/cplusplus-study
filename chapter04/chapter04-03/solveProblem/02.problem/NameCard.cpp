#include "NameCard.hpp"

using namespace std;

void NameCard::ShowNameCardInfo() const{
    cout<<"name :: "<<name<<endl;
    cout<<"company :: "<<company<<endl;
    cout<<"phone :: "<<phone<<endl;
    cout<<"job :: ";
    COMP_POS::ShowPositionInfo(position);
    cout<<endl;
}

void COMP_POS::ShowPositionInfo(int pos){{
        switch (pos){
        case CLERK:
            std::cout<<"CLERK"<<std::endl;
            break;
        case SENIOR:
            std::cout<<"SENIOR"<<std::endl;
            break;
        case ASSIST:
            std::cout<<"ASSIST"<<std::endl;
            break;
        case MANAGER:
            std::cout<<"MANAGER"<<std::endl;
            break;
        }
    }

}