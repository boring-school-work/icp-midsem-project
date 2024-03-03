#include "CheckingAccount.h"
#include <iomanip>
#include <iostream>

CheckingAccount::CheckingAccount(string number, string holderName, double bal)
    : BankAccount(number, holderName, bal) {
  overdraftLimit =
      bal * 2; // set the overdraftLimit to twice the initial balance
}

void CheckingAccount::transact_withdrawal(double amount) {
  balance -= amount;

  cout << endl << "Transaction receipt" << endl;
  cout << setfill('*') << setw(30) << "" << endl;
  printf("Amount withdrawn: %.2f\n", amount);
  printf("New Balance: %.2f\n", balance);
  cout << "Account number: " << accountNumber << endl;
}

void CheckingAccount::withdraw(double amount) {
  // if there are sufficient funds
  if (balance - amount > 0) {
    transact_withdrawal(amount);
    return;
  }

  cout << endl
       << "Insufficient funds, checking overdraft limit status..." << endl;

  // if there are insufficient funds
  if (balance > 0 && amount < overdraftLimit - balance) {
    transact_withdrawal(amount);
    return;
  }

  // if balance is in negative
  if (balance < 0 && amount < overdraftLimit + balance) {
    transact_withdrawal(amount);
    return;
  }

  cout << "Overdraft limit exceeded! Cannot withdraw from account." << endl;
}

void CheckingAccount::display() const {
  cout << endl << "Bank Account Details" << endl;
  cout << setfill('*') << setw(30) << "" << endl;
  cout << "Account type: Checking Account" << endl;
  printf("Overdraft Limit: %.2f", overdraftLimit);
  BankAccount::display();
}
