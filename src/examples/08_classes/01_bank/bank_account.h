//bank_account.h

class Account
{

public:
    Account(){}//default synthesized (auto created by C++) constructor
    Account(int b) : balance(b){/*empty code block*/}//class constructor
    //class function/method
    int get_balance()const {return balance;}

private://access specifier
    int balance{0};//variable-initialized to 0
    
};
