#include "SavingsAccount.h"
#include <iomanip>
#include <iostream>

SavingsAccount::SavingsAccount(string number, string holderName, double bal)
    : BankAccount(number, holderName, bal) {}

void SavingsAccount::addInterest() {
  balance += balance * interestRate;
  cout << endl
       << "Interest rate applied for " << accountHolderName << "." << endl;
  cout << endl << "Transaction details" << endl;
  cout << setfill('*') << setw(30) << "" << endl;
  printf("New Balance: %.2f\n", balance);
  printf("Interest rate: %.2f%s \n", interestRate, "%");
}

void SavingsAccount::display() const {
  cout << endl << "Bank Account Details" << endl;
  cout << setfill('*') << setw(30) << "" << endl;
  cout << "Type: Savings Account";
  BankAccount::display();
}
