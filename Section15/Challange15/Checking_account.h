#ifndef _CheckingAcc_
#define _CheckingAcc_
#include "Account.h"
#include <string.h>

using namespace std;

class Checking_Account: public Account
{
    friend std::ostream &operator<<(std::ostream &os, const Checking_Account &account);
    private:   
        static constexpr const char *def_name = "Unnamed Account";
        static constexpr double def_balance = 0.0;
        static constexpr double per_check_fee = 1.5;
    public:
        Checking_Account(string name = def_name,double balance = def_balance);
        bool withdraw(double);
};
#endif