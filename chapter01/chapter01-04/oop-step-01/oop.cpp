
/**
 * file name        : oop.cpp
 * author           : Doukhee Won
 * Date             : 2022/02/25
 *
 * prompt
 * function 01 open bank account
 * function 02 deposit money to account
 * function 03 withdraw money to account
 * function 04 all customer balance inquiry
 *
 * acount have property
 * account number
 * customer name
 * money
 */

#include <iostream>
#include <string.h>

#define NAME_LEN        20

using namespace std;

void prompt();

void makeAccount();

void depositMoney();

void withdrawMoney();

void showAllAccountInfo();

enum {
    MAKE = 1,
    DEPOSIT,
    WITHDRAW,
    INQUIRE,
    EXIT
};

typedef struct _Account {
    int accID;
    int balance;
    char charName[NAME_LEN];
} Account;

Account accArr[100];
int accNum = 0;

int main() {
    int choice;
    while (1) {
        prompt();
        cout << "select : ";
        cin >> choice;
        cout << endl;

        switch (choice) {
            case MAKE:
                makeAccount();
                break;
            case DEPOSIT:
                depositMoney();
                break;
            case WITHDRAW:
                withdrawMoney();
                break;
            case INQUIRE:
                showAllAccountInfo();
                break;
            case EXIT:
                return 0;
            default:
                cout << "Illegal Selection ..." << endl;
                break;
        }
    }
    return 0;
}

void prompt() {
    cout << "------------ MENU ------------" << endl;
    cout << "01. open account " << endl;
    cout << "02. deposit money" << endl;
    cout << "03. withdraw money" << endl;
    cout << "04. account all information" << endl;
}


void makeAccount() {
    int id;
    char name[NAME_LEN];
    memset(name, '\0', sizeof(name) / sizeof(char));
    int balance;
    cout << "[open bank]" << endl;
    cout << "account ID : ";
    cin >> id;
    cout << endl << "name : ";
    cin >> name;
    cout << endl << "deposit amount : ";
    cin >> balance;
    cout << endl;
    accArr[accNum].accID = id;
    accArr[accNum].balance = balance;
    strcpy(accArr[accNum].charName, name);
    accNum++;
}

void depositMoney() {
    int money;
    int id;
    cout << "[deposit]" << endl;
    cout << "bank account : " << endl;
    cin >> id;
    cout << "deposit amount : ";
    cin >> money;
    for (int i = 0; i < accNum; i++) {
        if (accArr[i].accID == id) {
            accArr[i].balance += money;
            cout << "deposit success" << endl;
            return;
        }
    }
    cout << "you can't use this account" << endl << endl;
}

void withdrawMoney() {
    int money;
    int id;
    cout << "[withdraw]" << endl;
    cout << "bank account : " << endl;
    cin >> id;
    cout << "withdraw money : ";
    cin >> money;

    for (int i = 0; i < accNum; i++) {
        if (accArr[i].accID == id) {
            if (accArr[i].balance < money) {
                cout << "lack of balance" << endl << endl;
                return;
            }
            accArr[i].balance -= money;
            cout << "withdraw success" << endl << endl;
            return;
        }
    }
    cout << "you can't use this account" << endl << endl;
}

void showAllAccountInfo() {
    for (int i = 0; i < accNum; i++) {
        cout << "bank account : " << accArr[i].accID << endl;
        cout << "customer name : " << accArr[i].charName << endl;
        cout << "balance : " << accArr[i].balance << endl;
    }
}
