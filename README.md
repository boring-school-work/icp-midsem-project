# Mid Semester Project

**Task:** Implement a simple banking system.

## How To Compile & Run

Navigate to the project's directory in the terminal.

### Using Make

If you have `make` installed, run the listed commands to compile and run different aspects of the program.

- Run the main program:

  ```console
  make
  ```

- Test the Bank class functionalities:

  ```console
  make test-bank
  ```

- Test the BankAccount class functionalities:

  ```console
  make test-bank-account
  ```

- Test the SavingsAccount class functionalities:

  ```console
  make test-savings-account
  ```

- Test the CheckingsAccount class functionalities:

  ```console
  make test-checkings-account
  ```

### Manually in The Terminal

- Run the main program:

  ```console
  g++ *.cpp *.h -o main.out
  ./main.out
  ```

- Test the Bank class functionalities:

  ```console
  g++ ./Bank* ./CheckingAccount* ./SavingsAccount* ./tests/test_bank.cpp -o ./tests/test_bank
  ./tests/test_bank
  ```

- Test the BankAccount class functionalities:

  ```console
  g++ ./BankAccount* ./tests/test_bank_account.cpp -o ./tests/test_bank_account
  ./tests/test_bank_account
  ```

- Test the SavingsAccount class functionalities:

  ```console
  g++ ./BankAccount* ./SavingsAccount* ./tests/test_savings_account.cpp -o ./tests/test_savings_account
  ./tests/test_savings_account
  ```

- Test the CheckingsAccount class functionalities:

  ```console
  g++ ./BankAccount* ./CheckingAccount* ./tests/test_checkings_account.cpp -o ./tests/test_checkings_account
  ./tests/test_checkings_account
  ```
