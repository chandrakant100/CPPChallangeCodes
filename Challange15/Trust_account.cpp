#include "Trust_account.h"

Trust_Account::Trust_Account(string name,double balance,double int_rate)
:Savings_Account(name,balance,int_rate)
{

}
bool Trust_Account::deposit(double amount)
{
    if (amount >= threshold)
        amount += bonous;
    return Savings_Account::deposit(amount);
}
bool Trust_Account::withdraw(double amount)
{
    if ((withdrawl_count > max_withdrawls) || (amount > amount * max_withdrawl_percentage))
        return false;
    ++withdrawl_count;
    return Savings_Account::withdraw(amount);
}
std::ostream &operator<<(std::ostream &os,const Trust_Account &Account)
{
    return os;
}