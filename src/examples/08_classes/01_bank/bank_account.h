//bank_account.h
#include<iostream>

#ifndef BRANCH_BANK_H
#define BRANCH_BANK_H

class BranchBank
{
public:
    BranchBank(int b) : branch_balance{b}{}
    void update_balance(int b);
    int get_branch_balance()const{return branch_balance;}
private:
    int branch_balance;
};

#endif


//header guards
#ifndef ACCOUNT_H
#define ACCOUNT_H

enum transaction{ DEPOSIT=1, WITHDRAW=2, DISPLAY=3, EXIT=4};
enum class MENU_OPTION{DEPOSIT=1, WITHDRAW=2, DISPLAY=3, EXIT=4};

class Account
{

friend void show_balance(const Account &account);
friend void BranchBank::update_balance(int b);

public:
    Account() : Account(0){}//default synthesized (auto created by C++) constructor
    Account(int b) : balance(b){/*empty code block*/}//class constructor
    //class function/method
    int get_balance()const {return balance;}
    void deposit(int amount);
    void withdraw(int amount);
    static int get_bank_balance(){return bank_balance;}

private://access specifier
    int balance{0};//variable-initialized to 0
    static int bank_balance;
};


//FREE FUNCTIONS-NOT CLASS FUNCTIONS!!!!!
void display_balance(Account account);
Account get_account();

#endif