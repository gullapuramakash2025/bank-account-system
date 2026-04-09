#ifndef BANK_H
#define BANK_H

#include <iostream>
using namespace std;

struct Account {
    int accNo;
    string name;
    float balance;
};

// Function declarations
void createAccount();
void displayAccounts();
void searchAccount();
void deposit();
void withdraw();
void deleteAccount();
void updateAccount();

#endif