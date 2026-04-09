#include "bank.h"

Account accounts[100];
int countAcc = 0;

void createAccount() {
    cout << "Enter Account No: ";
    cin >> accounts[countAcc].accNo;
    cout << "Enter Name: ";
    cin >> accounts[countAcc].name;
    cout << "Enter Balance: ";
    cin >> accounts[countAcc].balance;
    countAcc++;
}

void displayAccounts() {
    if(countAcc == 0) {
        cout << "No accounts found\n";
        return;
    }

    for(int i = 0; i < countAcc; i++) {
        cout << "AccNo: " << accounts[i].accNo
             << " Name: " << accounts[i].name
             << " Balance: " << accounts[i].balance << endl;
    }
}

void searchAccount() {
    int acc;
    cout << "Enter Account No: ";
    cin >> acc;

    for(int i = 0; i < countAcc; i++) {
        if(accounts[i].accNo == acc) {
            cout << "Found -> "
                 << accounts[i].name << " "
                 << accounts[i].balance << endl;
            return;
        }
    }
    cout << "Account not found\n";
}

void deposit() {
    int acc;
    float amt;
    cout << "Enter Account No: ";
    cin >> acc;

    for(int i = 0; i < countAcc; i++) {
        if(accounts[i].accNo == acc) {
            cout << "Enter amount: ";
            cin >> amt;
            accounts[i].balance += amt;
            cout << "Deposit successful\n";
            return;
        }
    }
    cout << "Account not found\n";
}

void withdraw() {
    int acc;
    float amt;
    cout << "Enter Account No: ";
    cin >> acc;

    for(int i = 0; i < countAcc; i++) {
        if(accounts[i].accNo == acc) {
            cout << "Enter amount: ";
            cin >> amt;

            if(accounts[i].balance >= amt) {
                accounts[i].balance -= amt;
                cout << "Withdrawal successful\n";
            } else {
                cout << "Insufficient balance\n";
            }
            return;
        }
    }
    cout << "Account not found\n";
}

void deleteAccount() {
    int acc;
    cout << "Enter Account No to delete: ";
    cin >> acc;

    for(int i = 0; i < countAcc; i++) {
        if(accounts[i].accNo == acc) {
            for(int j = i; j < countAcc - 1; j++) {
                accounts[j] = accounts[j + 1];
            }
            countAcc--;
            cout << "Account deleted\n";
            return;
        }
    }
    cout << "Account not found\n";
}

void updateAccount() {
    int acc;
    cout << "Enter Account No to update: ";
    cin >> acc;

    for(int i = 0; i < countAcc; i++) {
        if(accounts[i].accNo == acc) {
            cout << "Enter new name: ";
            cin >> accounts[i].name;
            cout << "Account updated\n";
            return;
        }
    }
    cout << "Account not found\n";
}