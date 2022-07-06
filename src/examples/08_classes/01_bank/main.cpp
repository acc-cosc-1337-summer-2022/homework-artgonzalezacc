#include "atm.h"
#include "bank_account.h"
#include "savings_account.h"
#include "checking_account.h"
#include<iostream>
#include<stdio.h> //NULL
#include <time.h>//time
#include<vector>
#include <memory>

using std::cout; using std::cin; using std::vector;
using std::unique_ptr; using std::make_unique;

int main()
{
	//set the randomizer seed
	srand(time(NULL));
	//BranchBank b_bank(500);
	Account account(50);//stack variable of type Account

	CheckingAccount sa(90);//stack variables/not dynamic memory--stack is limited
	Account* ptr_sa = &sa;
	cout<<sa.get_balance()<<"\n";//runs checking account get balance
	cout<<ptr_sa->get_balance()<<"\n"; //runs checking account get balance

	vector<Account*> accounts1;
	accounts1.push_back(&sa);
	cout<<accounts1[0]->get_balance()<<"\n";//wich get balance?

	unique_ptr<Account> up_account = make_unique<Account>(500);
	unique_ptr<Account> up_savings = make_unique<SavingsAccount>(100);
	unique_ptr<Account> up_checking = make_unique<CheckingAccount>(100);
	vector<unique_ptr<Account>> up_accounts;

	up_accounts.push_back(std::move(up_savings));
	up_accounts.push_back(std::move(up_checking));
	cout<<up_accounts[0]->get_balance()<<"\n";
	cout<<up_accounts[1]->get_balance()<<"\n";


	//cout<<account;
	//cin>>account;
	//cout<<account.get_bank_balance()<<"\n";

	//b_bank.update_balance(25);
	//cout<<account.get_bank_balance()<<"\n";


	std::vector<Account> accounts;
	accounts.push_back(Account(100));
	accounts.push_back(Account(200));
	accounts.push_back(Account(300));
	accounts.push_back(Account(400));
	accounts.push_back(Account(500));

	//ATM atm(accounts);

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