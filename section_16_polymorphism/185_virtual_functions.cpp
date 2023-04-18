/*


                        Virtual Functions

    Virtual Functions

    - Redefined functions are bound statically
    - Overriden functions are bound dynamically - execution time
    - Virtual functions are overriden
    - Allow us to treat all objects generally as objects of the Base class


    --------------------------------

    Syntax:

    Declaring virtual functions
    - declare the functions you want to override as virtual in the base class
    - virtual functions are virtual all the way down the hierarchy from this point
    - dynamic polymorphism only via Account class pointer or reference

    - function signature and return type must match exactly, if not compiler is going to consider is as a redefinition and will statically bind it

    class Account {
    public:
        virtual void withdraw(double amount);
        . . .
    }



*/

#include <iostream>

// This class uses dynamic polymorphism for the withdraw method
class Account
{
public:
    // the same signature and return in all implementation across classes
    virtual void withdraw(double amount) // dynamicly bound // virtual you put only here but it is good practice to add this key word in the derived classes
    {
        std::cout << "In Account::withdraw" << std::endl;
    }
};

class Checking : public Account
{
public:
    virtual void withdraw(double amount)
    {
        std::cout << "In Checking::withdraw" << std::endl;
    }
};

class Savings : public Account
{
public:
    virtual void withdraw(double amount)
    {
        std::cout << "In Savings::withdraw" << std::endl;
    }
};

class Trust : public Account
{
public:
    virtual void withdraw(double amount)
    {
        std::cout << "In Trust::withdraw" << std::endl;
    }
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

    std::cout << "\n === Clean up ==== " << std::endl;
    delete p1;
    delete p2;
    delete p3;
    delete p4;

    return 0;
}
