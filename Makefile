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
	@g++ ./BankAccount* ./tests/test_bank_account.cpp -o test_bank_account
	@./test_bank_account
	@rm ./test_bank_account

test-savings-account:
	@g++ ./BankAccount* ./SavingsAccount* ./tests/test_savings_account.cpp -o test_savings_account
	@./test_savings_account
	@rm ./test_savings_account

test-checkings-account:
	@g++ ./BankAccount* ./CheckingAccount* ./tests/test_checkings_account.cpp -o test_checkings_account
	@./test_checkings_account
	@rm ./test_checkings_account
