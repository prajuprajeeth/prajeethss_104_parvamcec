        #include <iostream>
        #include <string>
        using namespace std;

        class BankAccount {
        private:
            string holder_name;
            string ac_no;
            double balance;

        public:
            BankAccount(string name, string ac_no, double initial_balance = 0.0) {
                holder_name = name;
                this->ac_no = ac_no;
                balance = initial_balance;
                cout << "Constructor called!" << endl;
                cout << "Account Holder: " << holder_name << endl;
                cout << "Account Number: " << ac_no << endl;
            }

            void deposit(double amount) {
                if (amount > 0) {
                    balance += amount;
                    cout << "Deposit successful. New balance: $" << balance << endl;
                } else {
                    cout << "Invalid deposit amount" << endl;
                }
            }

            void withdraw(double amount) {
                if (amount <= balance && amount > 0) {
                    balance -= amount;
                    cout << "Withdrawal successful. New balance: $" << balance << endl;
                } else {
                    cout << "Insufficient funds or invalid amount" << endl;
                }
            }

            void displayInfo() {
                cout << "\nAccount Information:" << endl;
                cout << "Account Holder: " << holder_name << endl;
                cout << "Account Number: " << ac_no << endl;
                cout << "Current Balance: $" << balance << endl;
            }
        };

        int main() {
            string name, account_num;
            double initial_bal;

            cout << "Enter Account Holder Name: ";
            getline(cin, name);

            cout << "Enter Account Number: ";
            getline(cin, account_num);

            cout << "Enter Initial Balance: $";
            cin >> initial_bal;

            BankAccount account(name, account_num, initial_bal);

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
                        account.displayInfo();
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