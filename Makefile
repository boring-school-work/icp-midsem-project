all: run clean

build:
	@g++ *.cpp *.h -o main.out

run: build
	@./main.out

clean:
	@rm *.out

test-bank:
	@g++ ./Bank* ./CheckingAccount* ./SavingsAccount* ./tests/test_bank.cpp -o ./tests/test_bank
	@./tests/test_bank
	@rm ./tests/test_bank

test-bank-account:
	@g++ ./BankAccount* ./tests/test_bank_account.cpp -o ./tests/test_bank_account
	@./tests/test_bank_account
	@rm ./tests/test_bank_account

test-savings-account:
	@g++ ./BankAccount* ./SavingsAccount* ./tests/test_savings_account.cpp -o ./tests/test_savings_account
	@./tests/test_savings_account
	@rm ./tests/test_savings_account

test-checkings-account:
	@g++ ./BankAccount* ./CheckingAccount* ./tests/test_checkings_account.cpp -o ./tests/test_checkings_account
	@./tests/test_checkings_account
	@rm ./tests/test_checkings_account
