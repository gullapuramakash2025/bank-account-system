#ifndef BANK_H
#define BANK_H

#include <iostream>
#include <fstream>
using namespace std;

class Bank {
protected:
    int accNo;
    string name;
    float balance;

public:
    Bank();
    ~Bank();

    void createAccount();
    void displayAccount();
    int getAccNo();
    string getName();

    void updateAccount();

    void saveToFile(ofstream &out);
    void loadFromFile(ifstream &in);

    friend void showBalance(Bank b);
};

class Transaction : public Bank {
public:
    void deposit(float amt);
    void withdraw(float amt);
};

class Counter {
public:
    static int totalAccounts;
    static void showCount();
};

class Auth {
public:
    bool login();
};

#endifss