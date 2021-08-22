#include "Checking_account.h"

Checking_Account::Checking_Account(std::string name,double balance)
: Account(name,balance)
{

}
bool Checking_Account::withdraw(double amount)
{
    amount += per_check_fee;
    return Account::withdraw(amount);
}
std::ostream &operator<<(std::ostream &os, const Checking_Account &Account)
{
    os<<"[Checking_Account: "<<Account.name<<" : "<<Account.balance<<" ]"<<std::endl;
    return os;
}