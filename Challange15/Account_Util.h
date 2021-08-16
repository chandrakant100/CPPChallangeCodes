#ifndef _Account_UTIL_H_
#define _Account_UTIL_H_
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_account.h"
#include "Trust_account.h"

// Utility helper functions for Account class

void display(const std::vector<Account> &Accounts);
void deposit(std::vector<Account> &Accounts, double amount);
void withdraw(std::vector<Account> &Accounts, double amount);

// Utility helper functions for Savings Account class

void display(const std::vector<Savings_Account> &Accounts);
void deposit(std::vector<Savings_Account> &Accounts, double amount);
void withdraw(std::vector<Savings_Account> &Accounts, double amount);

// Utility helper for Checking_Account class
void display(const std::vector<Checking_Account> &Accounts);
void deposit(std::vector<Checking_Account> &Accounts, double amount);
void withdraw(std::vector<Checking_Account> &Accounts, double amount);

// utility helper for Trust Account class

void display(const std::vector<Trust_Account> &Accounts);
void deposit(std::vector<Trust_Account> &Accounts, double amount);
void withdraw(std::vector<Trust_Account> &Accounts, double amount);
#endif