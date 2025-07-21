#include <iostream>
using namespace std;

string accountHolder;
int accountNumber;
double balance = 0.0;
void createAccount() {
    cout << "Enter Account Holder Name: ";
    cin.ignore(); // To ignore newline from previous input
    getline(cin, accountHolder);
    cout << "Enter Account Number: ";
    cin >> accountNumber;
    cout << "Enter Initial Balance: ";
    cin >> balance;
    cout << "\nAccount created successfully!\n";
void deposit() {
    double amount;
    cout << "Enter amount to deposit: ";
    cin >> amount;

    if (amount > 0) {
        balance += amount;
        cout << "Rs." << amount << " deposited successfully!\n";
    } else {
        cout << "Invalid amount! Deposit failed.\n";
    }
}
void withdraw() {
    double amount;
    cout << "Enter amount to withdraw: ";
    cin >> amount;

    if (amount > 0 && amount <= balance) {
        balance -= amount;
        cout << "Rs." << amount << " withdrawn successfully!\n";
    } else {
        cout << "Invalid amount or insufficient balance!\n";
    }
}

