#include <iostream>
#include <cstring>

using namespace std;

const int NAME_LEN = 20;

void ShowMenu(void);
void MakeAccount(void);
void DepositMoney(void);
void WithdrawMoney(void);
void ShowAllAccInfo(void);

typedef enum _BankCommand{
    MAKE = 1,
    DEPOSIT,
    WITHDRAW,
    INQUIRE,
    EXIT
} BankCommand;

class Account{
    private:
        int accID;
        int balance;
        char *cusName;
    public:
        Account(int ID, int money, char *name):accID(ID), balance(money){
            cusName = new char[strlen(name) + 1];
            strcpy(cusName, name);
        }
        Account(const Account &refAccount):accID(refAccount.accID), balance(refAccount.balance){
            cusName = new char[strlen(refAccount.cusName) + 1];
            strcpy(cusName, refAccount.cusName);
        }
        int GetAccID(){
            return this->accID;
        }
        void Deposit(int money){
            balance += money;
        }
        int Withdraw(int money){
            if(balance < money){
                return 0;
            }
            balance -= money;
            return money;
        }
        void ShowAccInfo(){
            cout<<"account ID : "<<accID<<endl;
            cout<<"customer name : "<<cusName<<endl;
            cout<<"balance : "<<balance<<endl;
        }
        ~Account(){
            delete []cusName;
        }
};

Account *accArr[100];
int accNum = 0;

int main(int argc, char **argv){
    int choice;
    while(1){
        ShowMenu();
        cout<<"choice menu : ";
        cin>>choice;
        cout<<endl;
        switch(choice){
            case MAKE:
                MakeAccount();
                break;
            case DEPOSIT:
                DepositMoney();
                break;
            case WITHDRAW:
                WithdrawMoney();
                break;
            case INQUIRE:
                ShowAllAccInfo();
                break;
            case EXIT:
                for(int i = 0; i < accNum; i++){
                    delete accArr[i];
                }
                return 0;
            default:
                cout<<"Illegal Selection ..."<<endl;
        }
    }
    return 0;
}



void ShowMenu(void){
    cout<<"------- MENU -------"<<endl;
    cout<<"1. make account"<<endl;
    cout<<"2. deposit "<<endl;
    cout<<"3. with draw"<<endl;
    cout<<"4. account information "<<endl;
    cout<<"5. program end"<<endl;
}

void MakeAccount(void){
    int id;
    char name[NAME_LEN];
    int balance;
    cout<<"[account make]"<<endl;
    cout<<"account ID : ";
    cin>>id;
    cout<<"name : ";
    cin>>name;
    cout<<"balance : ";
    cin>>balance;
    cout<<endl;
    accArr[accNum++] = new Account(id, balance, name);
}

void DepositMoney(){
    int money;
    int id;
    cout<<"[DEPOSIT MONEY]"<<endl;
    cout<<"Account ID : ";
    cin>>id;
    cout<<"Deposit money : ";
    cin>>money;

    for(int i = 0; i < accNum; i++){
        if(accArr[i]->GetAccID() == id){
            accArr[i]->Deposit(money);
            cout<<"deposit complete"<<endl;
            return;
        }
    }
    cout<<"wrong account ID"<<endl<<endl;
}

void WithdrawMoney(){
    int money;
    int id;
    cout<<"[WITH DRAW MONEY]"<<endl;
    cout<<"account ID : ";
    cin>>id;
    cout<<"with draw money : ";
    cin>>money;

    for(int i = 0; i < accNum; i++){
        if(accArr[i]->GetAccID() == id){
            if(accArr[i]->Withdraw(money) == 0){
                cout<<"Account Not enough money"<<endl<<endl;
                return;
            }
            cout<<"With Draw Done"<<endl<<endl;
            return;
        }
    }
    cout<<"wrong account ID"<<endl<<endl;
}

void ShowAllAccInfo(){
    for(int i = 0; i < accNum; i++){
        accArr[i]->ShowAccInfo();
        cout<<endl;
    }
}

