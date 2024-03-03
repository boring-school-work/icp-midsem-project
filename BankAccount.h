#include <string>
using namespace std;

#ifndef _BankAccount_H_
#define _BankAccount_H_

class BankAccount {
protected:
  string accountNumber;
  string accountHolderName;
  double balance;

public:
  /**
   * Default contructor
   */
  BankAccount();

  /**
   * Default destructor
   */
  ~BankAccount();

  /**
   * Custom contructor
   *
   * @param number bank account number
   * @param holderName bank account holder name
   * @param balance bank account balance
   */
  BankAccount(string number, string holderName, double bal);

  /**
   * Copy constructor
   *
   * @param account a bank account
   */
  BankAccount(BankAccount const &account);

  /**
   * Deposits an amount into the bank account
   *
   * @param amount the amount to be deposited
   */
  virtual void deposit(double amount);

  /**
   * Withdraws an amount from the bank account
   *
   * @param amount the amount to be withdrawn
   */
  virtual void withdraw(double amount);

  /**
   * Displays bank account information
   */
  virtual void display() const;

  /**
   * overloads + operator to return a new bank account
   * with the sum of their balances.
   * It inherits the account details of the one with the greater balance
   *
   * @param account a bank account
   *
   * @return a new bank account with balance as sum
   */
  BankAccount operator+(BankAccount const &account) const;

  /**
   * Gets the account number of the account
   *
   * @return the account number
   */
  string getAccountNumber();

  /**
   * Gets the account holder name
   *
   * @return the account holder name
   */
  string getAccountHolderName();
};

#endif
