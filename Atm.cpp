#include <iostream>
#include <iomanip>

using namespace std;

class ATM {
private:
    double balance;
    string accountNumber;
    string pin;
    string userName;

public:
    ATM(double initial_balance, string acc_num, string pin_num, string name) {
        balance = initial_balance;
        accountNumber = acc_num;
        pin = pin_num;
        userName = name;
    }

    void displayMenu() {
        cout << "Welcome, " << userName << "!\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Exit\n";
    }

    bool authenticate(string acc_num, string pin_num) {
        return (accountNumber == acc_num && pin == pin_num);
    }

    void checkBalance() {
        cout << "Your balance is: $" << fixed << setprecision(2) << balance << endl;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful.\n";
        } else {
            cout << "Invalid amount.\n";
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && balance >= amount) {
            balance -= amount;
            cout << "Withdrawal successful.\n";
        } else {
            cout << "Insufficient funds or invalid amount.\n";
        }
    }
};

int main() {
    ATM atm(1000, "123456789", "1234", "John Doe"); // Starting balance $1000, account number "123456789", PIN "1234", user name "John Doe"
    string acc_num, pin;
    int choice;
    double amount;

    cout << "Enter account number: ";
    cin >> acc_num;
    cout << "Enter PIN: ";
    cin >> pin;

    if (!atm.authenticate(acc_num, pin)) {
        cout << "Invalid account number or PIN. Exiting...\n";
        return 1;
    }

    do {
        atm.displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                atm.checkBalance();
                break;
            case 2:
                cout << "Enter deposit amount: ";
                cin >> amount;
                atm.deposit(amount);
                break;
            case 3:
                cout << "Enter withdrawal amount: ";
                cin >> amount;
                atm.withdraw(amount);
                break;
            case 4:
                cout << "Thank you for using the ATM. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while(choice != 4);

    return 0;
}