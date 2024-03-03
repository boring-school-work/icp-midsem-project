#include "./../SavingsAccount.h"

int main() {
  SavingsAccount savings("72522025", "David Saah", 1000);

  savings.display();
  savings.addInterest();
  savings.deposit(700);
  savings.withdraw(550);
  savings.display();
}
