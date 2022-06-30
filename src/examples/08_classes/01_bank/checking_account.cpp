//checking_account.cpp
#include "checking_account.h"

int CheckingAccount::get_balance()const
{
    return Account::get_balance() + 5;
}