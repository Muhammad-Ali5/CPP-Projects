#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string accountHolderName;
    int balance;
    static int totalAccounts; // Static variable to track total accounts
    static int totalMoney;    // Static variable to track total account balance

public:
    // Constructor to initialize account holder name and balance (optional)
    BankAccount(const string& name = "", int initialBalance = 0)
        : accountHolderName(name), balance(initialBalance) {
        totalAccounts++;
        totalMoney += balance;
    }

    void deposit() {
        int accountChoice;
        string accountNumber;
        int depositAmount; // Corrected variable declaration

        cout << "Enter the account holder name: ";
        cin.ignore(); // Ignore newline character from previous input
        getline(cin, accountHolderName); // Use getline to handle spaces in names

        cout << "Choose the account (1 or 2): ";
        cin >> accountChoice;

        if (accountChoice == 1) {
            cout << "Enter the account number for deposit: ";
            cin >> accountNumber;
            cout << "Account number " << accountNumber << " is selected for deposit." << endl;
        } else if (accountChoice == 2) {
            // Add logic for second account (if applicable)
        } else {
            cout << "Invalid account choice." << endl;
            return;
        }

        cout << "Enter the deposit amount: ";
        cin >> depositAmount; // Removed "int" before depositAmount

        if (depositAmount > 0) {
            balance += depositAmount;
            totalMoney += depositAmount;
            cout << "Deposit successful." << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw() {
        int withdrawalAmount;

        cout << "Enter the withdrawal amount: ";
        cin >> withdrawalAmount;

        if (withdrawalAmount > 0 && withdrawalAmount <= balance) {
            balance -= withdrawalAmount;
            totalMoney -= withdrawalAmount;
            cout << "Withdrawal successful." << endl;
        } else {
            cout << "Invalid or insufficient funds for withdrawal." << endl;
        }
    }

    void display() const {
        cout << "Account holder name: " << accountHolderName << endl;
        cout << "Balance: " << balance << endl;
    }

    // Function to get total account count (static member function)
    static int getTotalAccounts() {
        return totalAccounts;
    }

    // Function to get total account balance (static member function)
    static int getTotalMoney() {
        return totalMoney;
    }
};

int BankAccount::totalAccounts = 0; // Initialize static variable
int BankAccount::totalMoney = 0;    // Initialize static variable

int main() {
    BankAccount bc1; // Create a bank account object

    while (true) {
        int choice;

        cout << "\nBank Account Menu:\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Display Account Info\n";
        cout << "4. Get Total Accounts\n";
        cout << "5. Get Total Account Balance\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                bc1.deposit();
                break;
            case 2:
                bc1.withdraw();
                break;
            case 3:
                bc1.display();
                break;
            case 4:
                cout << "Total accounts: " << BankAccount::getTotalAccounts() << endl;
                break;
            case 5:
                cout << "Total account balance: " << BankAccount::getTotalMoney() << endl;
                break;
            case 0:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice." << endl;
        }
    }

    return 0;
}
