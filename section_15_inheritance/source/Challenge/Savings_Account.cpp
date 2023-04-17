#include "Savings_Account.h"

Savings_Account::Savings_Account(std::string name, double balance, double int_rate)
    // invoking base class and passing name, balance because base class know how to handle it.
    : Account{name, balance}, int_rate{int_rate}
{
}

// Deposit:
//      Amount supplied to deposit will be incremented by (amount * int_rate/100)
//      and then the updated amount will be deposited
//
bool Savings_Account::deposit(double amount)
{
    amount += amount * (int_rate / 100); // we return boolean because Account::deposit is returning it too
    return Account::deposit(amount);
}

std::ostream &operator<<(std::ostream &os, const Savings_Account &account)
{
    os << "[Savings_Account: " << account.name << ": " << account.balance << ", " << account.int_rate << "%]";
    return os;
}

// no raw pointers so we do not need any destructors