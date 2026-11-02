#include <iostream>
using namespace std;

class Bank {
public:
    char name[20];
    long Account_no;
    float Current_Balance;
    float Withdraw_amount;
    float Deposit_amount;

    void accept() {
        cout << "Enter Your Name: ";
        cin >> name;
        cout << "Enter Your Account no: ";
        cin >> Account_no;
        cout << "Enter Current Balance: ";
        cin >> Current_Balance;
    }

    void display() {
        cout << "Your Name is: " << name << endl;
        cout << "Your Account no is: " << Account_no << endl;
        cout << "Your Current Balance is: " << Current_Balance << endl;
    }

    void withdraw() {
        cout << "Enter Withdrawal amount: ";
        cin >> Withdraw_amount;
        if (Withdraw_amount > Current_Balance) {
            cout << "Insufficient balance." << endl;
        } else {
            Current_Balance -= Withdraw_amount;
            cout << "Withdrawal successful. New balance: " << Current_Balance << endl;
        }
    }

    void deposit() {
        cout << "Enter Deposit amount: ";
        cin >> Deposit_amount;
        Current_Balance += Deposit_amount;
        cout << "Deposit successful. New balance: " << Current_Balance << endl;
    }
};

int main() {
    const int MAX_USERS = 3; // A small, fixed number of users for simplicity
    Bank users[MAX_USERS];
    int choice, userIndex;

    while (true) {
        cout << "\n1. Accept Info\n2. Display Info\n3. Withdraw amount\n4. Deposit amount\n5. Exit\n";
        cin >> choice;

        if (choice == 5) {
            cout << "Exiting..." << endl;
            break;
        }

        cout << "Enter User Index (0 to " << MAX_USERS - 1 << "): ";
        cin >> userIndex;
        if (userIndex < 0 || userIndex >= MAX_USERS) {
            cout << "Invalid User Index." << endl;
            continue;
        }

        switch (choice) {
        case 1:
            users[userIndex].accept();
            break;
        case 2:
            users[userIndex].display();
            break;
        case 3:
            users[userIndex].withdraw();
            break;
        case 4:
            users[userIndex].deposit();
            break;
        default:
            cout << "Wrong Choice" << endl;
            break;
        }
    }

    return 0;
}
