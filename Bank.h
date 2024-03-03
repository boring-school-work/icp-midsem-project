#include "BankAccount.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"
using namespace std;

#ifndef _BANK_H_
#define _BANK_H_

struct account_data {
  string account_number;
  BankAccount *account;
};

#include <vector>
class Bank {
private:
  vector<account_data> accounts;
  string bankName;

public:
  /**
   * Default constructor
   */
  Bank();

  /**
   * Default destructor
   */
  ~Bank();

  /**
   * Custom constructor
   *
   * @param name
   */
  Bank(string name);

  /**
   * Adds a bank account to the bank
   *
   * @param account a bank account
   */
  void addAccount(BankAccount &account);

  /**
   * Displays bank information: Name and number of accounts
   */
  void display();

  /**
   * Fetches all account details in a bank
   */
  void fetchAllAccountDetails();

  /**
   * Get account details of a specified account
   *
   * @param number the account number
   */
  void fetchAccountInfo(string number);
};

#endif // !_BANK_H_
