#ifndef _Account_UTIL_H_
#define _Account_UTIL_H_
#include <vector>
#include "Account.h"

// Utility helper functions for Account class

void display(const std::vector<Account *> &Accounts);
void deposit(std::vector<Account *> &Accounts, double amount);
void withdraw(std::vector<Account *> &Accounts, double amount);


#endif