#include "atm.h"
#include "bank_account.h"
#include<iostream>
#include<stdio.h> //NULL
#include <time.h>//time
#include<vector>

using std::cout;

int main()
{
	//set the randomizer seed
	srand(time(NULL));
	BranchBank b_bank(500);
	Account account(50);
	cout<<account.get_bank_balance()<<"\n";

	b_bank.update_balance(25);
	cout<<account.get_bank_balance()<<"\n";


	std::vector<Account> accounts;
	accounts.push_back(Account(100));
	accounts.push_back(Account(200));
	accounts.push_back(Account(300));
	accounts.push_back(Account(400));
	accounts.push_back(Account(500));

	ATM atm(accounts);

	//run_menu(atm);

	//display_balance(accounts[1]);
	//show_balance(accounts[1]);

	/*Account account;//create a variable of type Account
	cout<<account.get_balance()<<"\n";
	
	cout<<"Deposit 50\n";
	account.deposit(50);
	
	cout<<account.get_balance()<<"\n";

	display_balance(account);

	cout<<account.get_balance()<<"\n";*/
	
	return 0;
}