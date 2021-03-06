//atm.h
#include "bank_account.h"
#include "customer.h"
#include <iostream>
#include <stdlib.h>//srand and rand
#include <vector>

class ATM
{
public:
    //ATM(){};
    ATM(std::vector<Customer> &c) : customers(c){/*empty code block*/}
    void display_balance();
    void make_deposit();
    void make_withdraw();
    void scan_card();

private:
    std::vector<Customer> &customers;
    int customer_index{0};
    int account_index{0};
};

//FREE FUNCTIONS - NOT PART OF THE ATM CLASS!!!!!!!!!!!!!!!!!!
void run_menu(ATM &atm);
void display_menu();
void handle_transaction(ATM& atm, int choice);