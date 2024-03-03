#include "Bank.h"
#include <iomanip>
#include <iostream>
using namespace std;

Bank::Bank() {}

Bank::~Bank() { cout << endl << bankName << " Bank is out of order!" << endl; }

Bank::Bank(string name) {
  bankName = name;
  cout << endl << name << " Bank is open for business" << endl;
}

void Bank::addAccount(BankAccount &account) {
  account_data data;
  data.account_number = account.getAccountNumber();
  data.account = &account;
  accounts.push_back(data);

  cout << endl
       << account.getAccountHolderName() << " has registered at " << bankName
       << endl;
  cout << "Thanks for choosing us!" << endl;
}

void Bank::display() {
  cout << endl << "Bank Info" << endl;
  cout << setfill('*') << setw(30) << "" << endl;
  cout << "Bank name: " << bankName << endl;
  cout << "Number of registered accounts: " << accounts.size() << endl;
}

void Bank::fetchAllAccountDetails() {
  cout << endl << setfill('*') << setw(40) << "" << endl;
  cout << "Registered Accounts Audit: Accounts list" << endl;
  cout << setfill('*') << setw(40) << "" << endl;
  for (account_data account : accounts) {
    account.account->display();
  }
}

void Bank::fetchAccountInfo(string number) {
  cout << endl << "Searching for account with ID: " << number;
  for (account_data account : accounts) {
    if (account.account_number == number) {
      cout << endl << "Account found!" << endl;
      account.account->display();
      return;
    }
  }

  cout << endl << "Account number is invalid!" << endl;
}
