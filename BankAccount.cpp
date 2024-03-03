#include "BankAccount.h"
#include <iomanip>
#include <iostream>
using namespace std;

BankAccount::BankAccount() {}

BankAccount::~BankAccount() {
  cout << endl << accountHolderName << " has closed their account!" << endl;
}

BankAccount::BankAccount(string number, string holderName, double bal) {
  accountNumber = number;
  accountHolderName = holderName;
  balance = bal;

  cout << endl
       << holderName << "'s account has been created successfully!" << endl;
}

BankAccount::BankAccount(BankAccount const &account) {
  accountNumber = account.accountNumber;
  accountHolderName = account.accountHolderName;
  balance = account.balance;

  cout << endl
       << accountHolderName << "'s account created successfully!" << endl;
}

void BankAccount::deposit(double amount) {
  balance += amount;

  cout << endl << "Transaction receipt" << endl;
  cout << setfill('*') << setw(30) << "" << endl;
  printf("Amount deposited: %.2f\n", amount);
  printf("New Balance: %.2f\n", balance);
  cout << "Account number: " << accountNumber << endl;
}

void BankAccount::withdraw(double amount) {
  if (balance - amount > 0) {
    balance -= amount;

    cout << endl << "Transaction receipt" << endl;
    cout << setfill('*') << setw(30) << "" << endl;
    printf("Amount withdrawn: %.2f\n", amount);
    printf("New Balance: %.2f\n", balance);
    cout << "Account number: " << accountNumber << endl;
  } else {
    cout << endl << "Insufficient funds, cannot withdraw from account" << endl;
  }
}

void BankAccount::display() const {
  cout << endl << "Account number: " << accountNumber << endl;
  cout << "Account holder name: " << accountHolderName << endl;
  printf("Balance: %.2f\n", balance);
}

BankAccount BankAccount::operator+(BankAccount const &account) const {
  cout << endl
       << "Merging " << this->accountHolderName << " and "
       << account.accountHolderName << "'s accounts..." << endl;

  int sum = this->balance + account.balance;

  return BankAccount("00000000", "merger account", sum);
}

string BankAccount::getAccountNumber() { return this->accountNumber; }

string BankAccount::getAccountHolderName() { return this->accountHolderName; }
