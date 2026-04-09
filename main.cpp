#include "bank.h"

int main() {
    Transaction t[100];
    int count = 0;
    int choice, acc, i;
    float amt;

    Auth a;

    if(!a.login()) return 0;

    do {
        cout << "\n========= BANK SYSTEM =========\n";
        cout << "1. Create Account\n";
        cout << "2. Display Accounts\n";
        cout << "3. Search by Account No\n";
        cout << "4. Search by Name\n";
        cout << "5. Deposit\n";
        cout << "6. Withdraw\n";
        cout << "7. Delete Account\n";
        cout << "8. Update Account\n";
        cout << "9. Show Balance\n";
        cout << "10. Save to File\n";
        cout << "11. Load from File\n";
        cout << "12. Total Accounts\n";
        cout << "13. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {

        case 1:
            t[count].createAccount();
            count++;
            break;

        case 2:
            for(i = 0; i < count; i++)
                t[i].displayAccount();
            break;

        case 3:
            cout << "Enter Account No: ";
            cin >> acc;
            for(i = 0; i < count; i++) {
                if(t[i].getAccNo() == acc) {
                    t[i].displayAccount();
                    break;
                }
            }
            break;

        case 4:
            {
                string n;
                cout << "Enter Name: ";
                cin >> n;
                for(i = 0; i < count; i++) {
                    if(t[i].getName() == n) {
                        t[i].displayAccount();
                    }
                }
            }
            break;

        case 5:
            cout << "Enter Account No: ";
            cin >> acc;
            for(i = 0; i < count; i++) {
                if(t[i].getAccNo() == acc) {
                    cout << "Enter amount: ";
                    cin >> amt;
                    t[i].deposit(amt);
                }
            }
            break;

        case 6:
            cout << "Enter Account No: ";
            cin >> acc;
            for(i = 0; i < count; i++) {
                if(t[i].getAccNo() == acc) {
                    cout << "Enter amount: ";
                    cin >> amt;
                    t[i].withdraw(amt);
                }
            }
            break;

        case 7:
            cout << "Enter Account No: ";
            cin >> acc;
            for(i = 0; i < count; i++) {
                if(t[i].getAccNo() == acc) {
                    for(int j = i; j < count-1; j++)
                        t[j] = t[j+1];
                    count--;
                    cout << "Account deleted\n";
                    break;
                }
            }
            break;

        case 8:
            cout << "Enter Account No: ";
            cin >> acc;
            for(i = 0; i < count; i++) {
                if(t[i].getAccNo() == acc) {
                    t[i].updateAccount();
                    break;
                }
            }
            break;

        case 9:
            cout << "Enter Account No: ";
            cin >> acc;
            for(i = 0; i < count; i++) {
                if(t[i].getAccNo() == acc) {
                    showBalance(t[i]);
                    break;
                }
            }
            break;

        case 10:
            {
                ofstream out("data.txt");
                for(i = 0; i < count; i++)
                    t[i].saveToFile(out);
                out.close();
                cout << "Saved to file\n";
            }
            break;

        case 11:
            {
                ifstream in("data.txt");
                count = 0;
                while(in >> acc) {
                    in.putback(acc);
                    t[count].loadFromFile(in);
                    count++;
                }
                in.close();
                cout << "Loaded from file\n";
            }
            break;

        case 12:
            Counter::showCount();
            break;

        }

    } while(choice != 13);

    return 0;
}