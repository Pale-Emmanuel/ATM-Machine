
#include <iostream>
using namespace std;

int main() {

    int pin;
    int correctPin = 2026;
    int choice;

    double balance = 5000.00;
    double amount;

    cout << "===== WELCOME TO THE ATM =====" << endl;

    // Ask customer to enter PIN
    cout << "Enter your PIN: ";
    cin >> pin;

    // Check whether PIN is correct
    if (pin == correctPin) {

        cout << "\nLogin successful!" << endl;

        // Display ATM menu
        do {
            cout << "\n===== ATM MENU =====" << endl;
            cout << "1. Check Balance" << endl;
            cout << "2. Withdraw Money" << endl;
            cout << "3. Deposit Money" << endl;
            cout << "4. Exit" << endl;

            cout << "Choose an option: ";
            cin >> choice;

            switch (choice) {

                case 1:
                    cout << "\nYour account balance is: GHc "
                         << balance << endl;
                    break;

                case 2:
                    cout << "\nEnter amount to withdraw: GHc ";
                    cin >> amount;

                    if (amount > 0 && amount <= balance) {
                        balance = balance - amount;

                        cout << "Withdrawal successful!" << endl;
                        cout << "Updated balance: GHc "
                             << balance << endl;
                    }
                    else if (amount <= 0) {
                        cout << "Invalid withdrawal amount!" << endl;
                    }
                    else {
                        cout << "Insufficient funds!" << endl;
                    }
                    break;

                case 3:
                    cout << "\nEnter amount to deposit: GHc ";
                    cin >> amount;

                    if (amount > 0) {
                        balance = balance + amount;

                        cout << "Deposit successful!" << endl;
                        cout << "Updated balance: GHc "
                             << balance << endl;
                    }
                    else {
                        cout << "Invalid deposit amount!" << endl;
                    }
                    break;

                case 4:
                    cout << "\nThank you for using our ATM!"
                         << endl;
                    break;

                default:
                    cout << "\nInvalid choice. Try again."
                         << endl;
            }

        } while (choice != 4);

    }
    else {
        cout << "\nIncorrect PIN. Access denied!" << endl;
    }

    return 0;
}
