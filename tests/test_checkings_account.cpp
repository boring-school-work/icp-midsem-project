#include "./../CheckingAccount.h"

int main() {
  CheckingAccount checkings("00012025", "John Doe", 1000);

  checkings.display();
  checkings.deposit(50);
  checkings.withdraw(1000);
  checkings.withdraw(100);
  checkings.withdraw(1000);
  checkings.withdraw(949);
  checkings.withdraw(1);
  checkings.display();
}
