#include "Account.h"

Account::Account(std::string name, double balance)
    // IMPORTANT!! You can do try catch, but it is more often done in derived class
    : name{name}, balance{balance} // initialize list here

{
    if (balance < 0.0) // if balance is less than zero! THROW!
        throw IllegalBalanceException{};
}

bool Account::deposit(double amount)
{
    if (amount < 0)
        return false;
    else
    {
        balance += amount;
        return true;
    }
}

bool Account::withdraw(double amount)
{
    if (balance - amount >= 0)
    {
        balance -= amount;
        return true;
    }
    else
        return false;
}

void Account::print(std::ostream &os) const
{
    os.precision(2);
    os << std::fixed;
    os << "[Account: " << name << ": " << balance << "]";
}
