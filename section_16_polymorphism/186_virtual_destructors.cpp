/*
            Virtual Destructors

    - Problems can happen when we destroy polymorphic objects
    - if a derived class is destroyed by deleting its storage via the base class pointer and the class a non-virtual destructor.
        then the behavior is undefined in the C++ standard
    - derived objects must be destroyed in the correct order starting at the correct destructor


    --------------------------------------------
        Solution/Rule
            - if a class has virtual functions
            - always provide a public virtual destructor
            - if base class destructor is virtual then all derived class destructors are also virtual


        class Account {
        public:
            virtual void withdraw(double amount);
            virtual ~Account();
            . . .
        }

*/

// Section 16
// Virtual destructors

#include <iostream>
// RULE IS SIMPLE:
// YOU HAVE VIRTUAL FUNCTION
// THEN CREATE VIRTUAL DESTRUCTOR TO CLEAN ALL

// This class uses dynamic polymorphism for the withdraw method
class Account
{
public:
    virtual void withdraw(double amount)
    {
        std::cout << "In Account::withdraw" << std::endl;
    }
    // virtual destructor
    virtual ~Account() { std::cout << "Account:: destructor" << std::endl; }

    // ~Account() { std::cout << "Account:: destructor" << std::endl; }
};

class Checking : public Account
{
public:
    virtual void withdraw(double amount)
    {
        std::cout << "In Checking::withdraw" << std::endl;
    }
    // virtual destructor
    virtual ~Checking() { std::cout << "Checking:: destructor" << std::endl; }
    // ~Checking() { std::cout << "Checking:: destructor" << std::endl; }
};

class Savings : public Account
{
public:
    virtual void withdraw(double amount)
    {
        std::cout << "In Savings::withdraw" << std::endl;
    }
    // virtual destructor
    virtual ~Savings() { std::cout << "Savings:: destructor" << std::endl; }
    // ~Savings() { std::cout << "Savings:: destructor" << std::endl; }
};

class Trust : public Account
{
public:
    virtual void withdraw(double amount)
    {
        std::cout << "In Trust::withdraw" << std::endl;
    }
    // virtual destructor
    virtual ~Trust() { std::cout << "Trust:: destructor" << std::endl; }
    // ~Trust() { std::cout << "Trust:: destructor" << std::endl; }
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

/*

.\section_16_polymorphism\186_virtual_destructors.cpp:99:5: warning: deleting object of polymorphic class type 'Account' which has non-virtual destructor might cause undefined behavior [-Wdelete-non-virtual-dtor]
   99 |     delete p1;
      |     ^~~~~~~~~
.\section_16_polymorphism\186_virtual_destructors.cpp:100:5: warning: deleting object of polymorphic class type 'Account' which has non-virtual destructor might cause undefined behavior [-Wdelete-non-virtual-dtor]
  100 |     delete p2;
      |     ^~~~~~~~~
.\section_16_polymorphism\186_virtual_destructors.cpp:101:5: warning: deleting object of polymorphic class type 'Account' which has non-virtual destructor might cause undefined behavior [-Wdelete-non-virtual-dtor]
  101 |     delete p3;
      |     ^~~~~~~~~
.\section_16_polymorphism\186_virtual_destructors.cpp:102:5: warning: deleting object of polymorphic class type 'Account' which has non-virtual destructor might cause undefined behavior [-Wdelete-non-virtual-dtor]
  102 |     delete p4;
      |     ^~~~~~~~~

 === Pointers ====
In Account::withdraw
In Savings::withdraw
In Checking::withdraw
In Trust::withdraw

 === Clean up ====
Account:: destructor
Account:: destructor
Account:: destructor
Account:: destructor
*/