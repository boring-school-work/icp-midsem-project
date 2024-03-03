#include "BankAccount.h"

#ifndef _SavingsAccount_H_
#define _SavingsAccount_H_

class SavingsAccount : public BankAccount {
private:
  double interestRate = 0.2;

public:
  /**
   * Custom constructor
   *
   * @param number the bank account number
   * @param holderName the name of the account ownwer
   * @param bal the bank account balance
   */
  SavingsAccount(string number, string holderName, double bal);

  /**
   * Increases the balance by the interest rate
   */
  void addInterest();

  /**
   * Displays savings account information
   */
  void display() const;
};

#endif
