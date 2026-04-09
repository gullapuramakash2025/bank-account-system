#include "bank.h"

int main() {
    int choice;

    do {
        cout << "\n===== BANK MENU =====\n";
        cout << "1. Create Account\n";
        cout << "2. Display Accounts\n";
        cout << "3. Search Account\n";
        cout << "4. Deposit\n";
        cout << "5. Withdraw\n";
        cout << "6. Delete Account\n";
        cout << "7. Update Account\n";
        cout << "8. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1: createAccount(); break;
            case 2: displayAccounts(); break;
            case 3: searchAccount(); break;
            case 4: deposit(); break;
            case 5: withdraw(); break;
            case 6: deleteAccount(); break;
            case 7: updateAccount(); break;
        }

    } while(choice != 8);

    return 0;
}