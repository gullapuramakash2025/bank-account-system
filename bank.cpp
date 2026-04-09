#include "bank.h"

// Static variable
int Counter::totalAccounts = 0;

// Constructor
Bank::Bank() {
    accNo = 0;
    name = "";
    balance = 0;
}

// Destructor
Bank::~Bank() {}

// Create account
void Bank::createAccount() {
    cout << "Enter Account No: ";
    cin >> accNo;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Balance: ";
    cin >> balance;

    Counter::totalAccounts++;
}

// Display account
void Bank::displayAccount() {
    cout << "\n-----------------------------\n";
    cout << "Account No : " << accNo << endl;
    cout << "Name       : " << name << endl;
    cout << "Balance    : " << balance << endl;
    cout << "-----------------------------\n";
}

// Get account number
int Bank::getAccNo() {
    return accNo;
}

// Get name
string Bank::getName() {
    return name;
}

// Update
void Bank::updateAccount() {
    cout << "Enter new name: ";
    cin >> name;
}

// Friend function
void showBalance(Bank b) {
    cout << "Balance: " << b.balance << endl;
}

// Deposit
void Transaction::deposit(float amt) {
    if(amt <= 0) {
        cout << "Invalid amount\n";
        return;
    }
    balance += amt;
    cout << "Deposit successful\n";
}

// Withdraw
void Transaction::withdraw(float amt) {
    if(amt <= 0) {
        cout << "Invalid amount\n";
        return;
    }

    if(balance >= amt) {
        balance -= amt;
        cout << "Withdraw successful\n";
    } else {
        cout << "Insufficient balance\n";
    }
}

// Static function
void Counter::showCount() {
    cout << "Total Accounts: " << totalAccounts << endl;
}

// Save to file
void Bank::saveToFile(ofstream &out) {
    out << accNo << " " << name << " " << balance << endl;
}

// Load from file
void Bank::loadFromFile(ifstream &in) {
    in >> accNo >> name >> balance;
}

// Login system
bool Auth::login() {
    string user, pass;

    cout << "Enter Username: ";
    cin >> user;

    cout << "Enter Password: ";
    cin >> pass;

    if(user == "admin" && pass == "1234") {
        cout << "Login successful\n";
        return true;
    }

    cout << "Invalid credentials\n";
    return false;
}