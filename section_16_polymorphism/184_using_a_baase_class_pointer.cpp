/*
            Using a Base Class Pointer

            DYNAMIC POLYMORPHISM

    Using a Base class pointer

    - for dynamic polymorphism we must have:

        - inheritance
        - base class pointer or base class reference
        - virtual functions

    --------------------------------------------------------------------

    Using a Base class pointer

        Account *p1 = new Account();
        Account *p2 = new Savings();
        Account *p3 = new Checking();
        Account *p4 = new Trust();

        p1->withdraw(1000);         // Account::withdraw
        p2->withdraw(1000);         // Savings::withdraw
        p3->withdraw(1000);         // Checking::withdraw
        p4->withdraw(1000);         // Trust::withdraw

        // delete the pointers


                        Account
                        Withdraw
            |                           |
        Savings                     Checking
        Withdraw                    Withdraw
            |
            |
        Trust
        Withdraw

    --------------------------------------------------------------------

        Account *array [] = {p1, p2, p3, p4};

        for (auto i=0; i<4; ++i)
            array[i]0>withdraw(1000);       // it will call class' methods, not base class method


        it is working with a vectors too

        vector<Account *> accounts {p1, p2, p3, p4};

        for (auto acc_ptr: accounts)
            acc_ptr->withdraw(1000);


        //delete the pointers!



*/
#include <iostream>
#include <vector>

class Account
{
public:
    virtual void withdraw(double amount)
    {
        std::cout << "In Account::withdraw" << std::endl;
    }
    virtual ~Account() {}
};

class Checking : public Account
{
public:
    virtual void withdraw(double amount)
    {
        std::cout << "In Checking::withdraw" << std::endl;
    }

    virtual ~Checking() {}
};

class Savings : public Account
{
public:
    virtual void withdraw(double amount)
    {
        std::cout << "In Savings::withdraw" << std::endl;
    }
    virtual ~Savings() {}
};

class Trust : public Account
{
public:
    virtual void withdraw(double amount)
    {
        std::cout << "In Trust::withdraw" << std::endl;
    }
    virtual ~Trust() {}
};

int main()
{
    std::cout << "\n === Pointers ==== " << std::endl;
    Account *p1 = new Account();
    Account *p2 = new Savings();
    Account *p3 = new Checking();
    Account *p4 = new Trust();

    p1->withdraw(1000);
    p2->withdraw(1000);
    p3->withdraw(1000);
    p4->withdraw(1000);

    std::cout << "\n === Array ==== " << std::endl;
    Account *array[] = {p1, p2, p3, p4}; // array of pointers Account/Savings/Checking/Trust
    for (auto i = 0; i < 4; ++i)
        array[i]->withdraw(1000); // Account->withdraw Savings->withdraw checking->withdraw Trust->withdraw

    std::cout << "\n === Array ==== " << std::endl;
    array[0] = p4;
    for (auto i = 0; i < 4; ++i)
        array[i]->withdraw(1000);

    std::cout << "\n === Vector ==== " << std::endl;
    std::vector<Account *> accounts{p1, p2, p3, p4}; // Account->withdraw Savings->withdraw checking->withdraw Trust->withdraw
    // std::vector<Account *> accounts{new Account, p1, p2, p3, p4}; // do not do it in this way, when you are working with pointers, because then you will have to destroy them by looping too
    for (auto acc_ptr : accounts)
        acc_ptr->withdraw(1000);

    std::cout << "\n === Vector ==== " << std::endl;
    accounts.push_back(p4);
    accounts.push_back(p4);
    for (auto acc_ptr : accounts)
        acc_ptr->withdraw(1000);

    std::cout << "\n === Clean up ==== " << std::endl;
    delete p1;
    delete p2;
    delete p3;
    delete p4;

    return 0;
}