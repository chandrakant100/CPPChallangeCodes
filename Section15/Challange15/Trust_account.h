#ifndef _TrustAcc_
#define _TrustAcc_

#include "Savings_Account.h"
#include <string.h>

using namespace std;

class Trust_Account:public Savings_Account
{
    friend std::ostream &operator<<(std::ostream &os, const Account &Account);
    private:   
        static constexpr const char *def_name = "Unnamed Account";
        static constexpr double def_balance = 0.0;
        static constexpr double def_int_rate = 0.0;
        static constexpr double bonous = 50.00;
        static constexpr double threshold = 5000.0;
        static constexpr double max_withdrawls = 3;
        static constexpr double max_withdrawl_percentage = 0.2;
    protected:
        double withdrawl_count;
    public:
        Trust_Account(string name = def_name,double balance = def_balance,double rate = def_int_rate);
        bool deposit(double);
        bool withdraw(double);
};
#endif