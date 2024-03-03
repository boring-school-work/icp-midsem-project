#include "Bank.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  // create demo accounts
  SavingsAccount savings("72522025", "David Saah", 1000);
  CheckingAccount checkings("00012025", "John Doe", 1000);

  // test all functionalities
  Bank stanbic("Stanbic");
  stanbic.display();

  stanbic.addAccount(savings);
  stanbic.addAccount(checkings);
  stanbic.display();

  stanbic.fetchAccountInfo("72522025");
  stanbic.fetchAccountInfo("72522026");

  stanbic.fetchAllAccountDetails();

  cout << endl << setfill('*') << setw(60) << "" << endl;
  cout << "Performing transactions for customers..." << endl;
  cout << setfill('*') << setw(60) << "" << endl;

  // perform transactions
  checkings.deposit(50);
  checkings.withdraw(1000);
  checkings.withdraw(100);
  checkings.withdraw(1000);
  checkings.withdraw(949);
  checkings.withdraw(1);

  savings.addInterest();
  savings.deposit(700);
  savings.withdraw(550);

  stanbic.fetchAllAccountDetails();
}
