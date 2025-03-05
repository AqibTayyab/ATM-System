#include <iostream>
using namespace std;

/**
 * ATM Class - Simulates basic banking operations.
 * Features:
 * - Check Balance
 * - Deposit Money
 * - Withdraw Money
 */
class ATM {
private:
    double balance; // Stores the account balance

public:
    /**
     * Constructor - Initializes ATM with an initial balance.
     * @param initialBalance Initial amount in the account.
     */
    ATM(double initialBalance) {
        balance = initialBalance;
    }

    /**
     * Displays the current balance.
     */
    void checkBalance() {
        cout << "Your current balance is: $" << balance << endl;
    }

    /**
     * Deposits money into the account.
     * @param amount The amount to be deposited.
     */
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "$" << amount << " deposited successfully." << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    /**
     * Withdraws money from the account.
     * @param amount The amount to be withdrawn.
     */
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "$" << amount << " withdrawn successfully." << endl;
        } else {
            cout << "Invalid or insufficient funds!" << endl;
        }
    }
};

/**
 * Main function - Provides the ATM interface for users.
 */
int main() {
    ATM atm(0); // Initial balance of $0
    int choice;
    double amount;

    do {
        // Display ATM menu
        cout << "\nATM Menu:\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        // Process user choice
        switch (choice) {
            case 1:
                atm.checkBalance();
                break;
            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                atm.deposit(amount);
                break;
            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                atm.withdraw(amount);
                break;
            case 4:
                cout << "Thank you for using our ATM!" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
