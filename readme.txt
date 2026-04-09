BANK ACCOUNT MANAGEMENT SYSTEM (C++)

OVERVIEW:
This project is a menu-driven Bank Account Management System developed using C++. It is designed to simulate basic banking operations and demonstrate fundamental programming concepts such as structures, functions, arrays, and modular programming using multiple files.

The system allows users to create and manage bank accounts through a simple text-based interface. Each account consists of an account number, account holder name, and balance. The program performs operations based on user input from a menu.

FUNCTIONALITIES:

* Create a new bank account
* Display all existing accounts
* Search for an account using account number
* Deposit money into an account
* Withdraw money with balance validation
* Update account details
* Delete an account

PROJECT STRUCTURE:
The program is divided into three files:

1. bank.h      -> Contains structure definition and function declarations
2. bank.cpp    -> Contains implementation of all functions
3. main.cpp    -> Contains the menu-driven main function and user interaction

WORKING:
The program uses an array of structures to store account details. A menu is displayed repeatedly, allowing the user to choose different operations. Based on the selected option, the corresponding function is called. All operations such as searching, updating, and deleting are performed using simple loops.

CONCEPTS USED:

* Structures for data representation
* Functions for modular design
* Arrays for storing multiple records
* Header files for separation of interface and implementation
* Menu-driven programming for user interaction

LIMITATIONS:

* Data is stored temporarily and is lost when the program exits
* Maximum number of accounts is limited
* No authentication or security features are included

CONCLUSION:
This project provides a basic understanding of how a banking system works and demonstrates how core programming concepts can be used to build a simple real-world application. It is suitable for academic purposes and beginner-level learning.
