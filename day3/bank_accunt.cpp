#include<iostream>
#include<string>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;
    string accountNumber;

public:
    // Constructor
    BankAccount(string holder, string accNum, double initialBalance = 0.0) {
        accountHolder = holder;
        accountNumber = accNum;
        balance = initialBalance;
    }

    // Getters
    string getAccountHolder() { return accountHolder; }
    string getAccountNumber() { return accountNumber; }
    double getBalance() { return balance; }

    // Methods
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful. New balance: " << balance << endl;
        } else {
            cout << "Invalid deposit amount" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount <= balance && amount > 0) {
            balance -= amount;
            cout << "Withdrawal successful. New balance: " << balance << endl;
        } else {
            cout << "Insufficient funds or invalid amount" << endl;
        }
    }

    void displayAccountInfo() {
        cout << "\nAccount Information:" << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: $" << balance << endl;
    }
};

int main() {
    string holder, accNum;
    double initialBalance;

    cout << "Enter Account Holder Name: ";
    getline(cin, holder);
    
    cout << "Enter Account Number: ";
    getline(cin, accNum);
    
    cout << "Enter Initial Balance: $";
    cin >> initialBalance;

    BankAccount account(holder, accNum, initialBalance);
    
    int choice;
    double amount;
    
    do {
        cout << "\n1. Display Account Info" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                account.displayAccountInfo();
                break;
            case 2:
                cout << "Enter deposit amount: $";
                cin >> amount;
                account.deposit(amount);
                break;
            case 3:
                cout << "Enter withdrawal amount: $";
                cin >> amount;
                account.withdraw(amount);
                break;
            case 4:
                cout << "Thank you for using our banking system!" << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    } while(choice != 4);

    return 0;
}