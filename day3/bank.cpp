#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountName;
    string userName;
    string accountNumber;

public:
    // Constructor
    BankAccount(string aName, string uName, string accNum) {
        accountName = aName;
        userName = uName;
        accountNumber = accNum;
    }

    // Display account information
    void displayInfo() {
        cout << "\nAccount Details:" << endl;
        cout << "Account Name: " << accountName << endl;
        cout << "User Name: " << userName << endl;
        cout << "Account Number: " << accountNumber << endl;
    }
};

int main() {
    string accName, uName, accNum;
    
    cout << "Enter Account Name: ";
    getline(cin, accName);
    
    cout << "Enter User Name: ";
    getline(cin, uName);
    
    cout << "Enter Account Number: ";
    getline(cin, accNum);

    // Create bank account object
    BankAccount account(accName, uName, accNum);
    
    // Display the account information
    account.displayInfo();

    return 0;
}
<i