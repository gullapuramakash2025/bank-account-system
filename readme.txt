BANK ACCOUNT MANAGEMENT SYSTEM (C++ - OOP BASED)

OVERVIEW:
This project is a menu-driven Bank Account Management System developed using C++. It is designed to simulate real-world banking operations while demonstrating key Object-Oriented Programming (OOP) concepts. The system allows users to manage bank accounts efficiently through a console-based interface.

The application supports multiple features such as account creation, searching, transactions, updating, deletion, and file storage. It is structured using multiple files for better modularity and maintainability.

FEATURES:

* Create a new bank account
* Display all accounts
* Search account by account number
* Search account by name
* Deposit money into an account
* Withdraw money with validation
* Update account holder details
* Delete an account
* Show account balance using friend function
* Count total accounts using static member
* Save account data to file
* Load account data from file
* Basic login authentication system

PROJECT STRUCTURE:
The project consists of three main files:

1. bank.h
   Contains class definitions, data members, and function declarations.

2. bank.cpp
   Contains implementation of all class member functions including constructors, destructors, and file handling operations.

3. main.cpp
   Contains the main function, menu-driven interface, and overall program control logic.

CONCEPTS USED:

* Classes and Objects
* Inheritance (Transaction class derived from Bank class)
* Encapsulation (data and functions within classes)
* Constructor and Destructor
* Friend Function (to access private/protected members)
* Static Data Member (to track total accounts)
* Scope Resolution Operator (::)
* File Handling using fstream
* Modular Programming using multiple files

WORKING:
The system uses an array of objects to store account details during execution. A menu is displayed repeatedly, allowing the user to perform various operations. Each operation invokes specific member functions defined in the classes.

The login system ensures only authorized users can access the program. File handling is used to store account details permanently in a text file and retrieve them when needed.

LIMITATIONS:

* Data storage is basic (text file only)
* No encryption for login credentials
* Limited number of accounts (fixed array size)
* No graphical user interface (console-based)

CONCLUSION:
This project demonstrates the practical implementation of core C++ and OOP concepts in a real-world application. It provides a strong foundation for understanding how banking systems work at a basic level and how structured programming techniques can be used to build scalable applications.

This project is suitable for academic evaluation and helps in strengthening programming fundamentals as well as object-oriented design skills.
