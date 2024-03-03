#include "BankAccount.h"

#ifndef _CheckingAccount_H_
#define _CheckingAccount_H_

class CheckingAccount : public BankAccount {
private:
  double overdraftLimit;

  /**
   * withdraws money from the Checking Account
   *
   * @param amount the amount to be withdrawn
   */
  void transact_withdrawal(double amount);

public:
  /**
   * Custom constructor
   *
   * @param number the bank account number
   * @param holderName the name of the account ownwer
   * @param bal the bank account balance
   */
  CheckingAccount(string number, string holderName, double bal);

  /**
   * withdraws money from the Checking Account and
   * allows overdrafts up to the draft limit
   *
   * @param amount the amount to be withdrawn
   */
  void withdraw(double amount) override;

  /**
   * Displays checking account information
   */
  void display() const;
};

#endif
