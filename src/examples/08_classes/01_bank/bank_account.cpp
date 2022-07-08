//bank_account.cpp
#include "bank_account.h"

int Account::get_balance()const
{
    return balance;
}

void Account::deposit(int amount)
{
    if(amount > 0)
    {
        balance += amount;
    }
}

void Account::withdraw(int amount)
{
    if(amount > 0 && amount < balance)
    {
        balance -= amount;
    }
}

//initialize static bank balance
int Account::bank_balance = 10000;

//friend functions
void show_balance(const Account &account)
{
    //account.balance = 10;
    std::cout<<"friend function: "<<account.balance<<"\n";    
}

std::ostream& operator<<(std::ostream& out, const Account& account)
{
    out<<"Overload << function: "<<account.balance<<"\n";

    return out;
}

std::istream& operator>>(std::istream& in, Account& account)
{
    int amount;
    std::cout<<"Enter amount to withdraw: ";
    in>>amount;
    account.withdraw(amount);

    return in;
};

//BRANCH BANK CLASS FUNCTIONS
void BranchBank::update_balance(int b)
{
    branch_balance += b;
    Account::bank_balance += b;
}

// FREE FUNCTIONS - NOT PART OF THE ACCOUNT CLASS
/*void display_balance(Account account)
{
    std::cout<<"Display balance function: "<<account.get_balance()<<"\n";
    account.deposit(50);
    std::cout<<"Display balance function: "<<account.get_balance()<<"\n";
}

Account get_account()
{
    Account account;
    return account;
}*/