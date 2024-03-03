#include "./../Bank.h"
#include "./../CheckingAccount.h"
#include "./../SavingsAccount.h"

int main() {
  SavingsAccount savings("72522025", "David Saah", 1000);
  CheckingAccount checkings("00012025", "John Doe", 1000);

  Bank stanbic("Stanbic");
  stanbic.display();

  stanbic.addAccount(savings);
  stanbic.addAccount(checkings);
  stanbic.display();

  stanbic.fetchAccountInfo("72522025");
  stanbic.fetchAccountInfo("72522026");

  stanbic.fetchAllAccountDetails();
}
