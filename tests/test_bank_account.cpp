#include "./../BankAccount.h"

int main() {
  BankAccount account1("00000001", "Demo Account 1", 1000);
  BankAccount account2("00000002", "Demo Account 2", 800);

  account1.deposit(100);
  account1.withdraw(250);
  account1.display();

  account2.deposit(100);
  account2.withdraw(250);
  account2.display();

  BankAccount merger = account1 + account2;
  merger.display();
}
