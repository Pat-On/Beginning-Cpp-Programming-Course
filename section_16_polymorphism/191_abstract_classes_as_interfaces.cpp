/*

                Polymorphism

        What is using a class as an interface?
        - an abstract class that has only pure virtual functions
        - these functions provide a general set of services to the user of the class
        - provided as public
        - each subclass is free to implement these services as needed
        - every service (method) must be implemented
        - the service type information is strictly enforced

        -----------------------------------

        A printable example
        - C++ does not provide true interfaces
        - we use abstract classes and pure virtual functions to achieve it
        - suppose we want to be able to provide Printable support for any object we wish without knowing its implementation at compile time


        std:: cout << any_object << std::endl;

        - any_object must conform to the Printable interface

        -------------------------------------------


        An printable example

            class Printable {
                friend ostream &operator<<(ostream &, const Printable &obj);

            public:
                virtual void print(ostream &os) const = 0;
                virtual ~Printable() {};
                ...
            };

            ostream &operator<<(ostream &os, const Printable &obj) {
                obj.print(os);
                return os;
            }



            -----------

            Any class to be printable need to derived from the printable class and override the function


            example:

            class Any_Class : public Printable {
            public:
                // must override Printable::print()
                virtual void print(ostream &os) override {
                    os << "Hi from Any_class";
                }
                . . .
            };

            ----------


            Any_Class *ptr = new Any_Class();
            cout << *ptr << endl;

            void function1 (Any_Class &obj) {
                cout << obj << endl;
            }

            void function2 (Printable &obj) {
                cout << obj << endl;
            }

            function1(*ptr);            // Hi from Any_Class
            function2(*ptr);            // Hi from Any_Class

            -----------------------------

            A Shapes example

            class Shape {
            public:
                virtual void draw() = 0;
                virtual void rotate = 0;
                virtual ~Shape() {};
                . . .
            };


            A Shapes Example

            class Circle : public Shape {
            public:
                virtual void draw() override { code };
                virtual void rotate() override { code };
                virtual ~Circle() {};
                . . .
            }


            // convention - sometimes classes used as a interface starting with capitalize I
            Example:

            class I_Shape {
            public:
                virtual void draw() = 0;
                virtual void rotate() = 0;
                virtual ~I_Shape() {};
                . . .
            };

            class Circle : public I_Shape {
            public:
                virtual void draw() override { code };
                virtual void rotate() override { code };
                virtual ~Circle() {};
                . . .
            };

        -------------------------------------------------------------------------------

        vector<I_Shape *> shapes;
        I_Shape *p1 = new Circle();
        I_Shape *p2 = new Line();
        I_Shape *p3 = new Square();

        for (auto const &shape: shapes) {
            shape->rotate();
            shape->draw();
        }

        // delete the pointers


*/

// Section 16
// Interfaces - start

#include <iostream>

class Account
{
    // FRIEND FUNCTION OVERLOADED INSERTION OPERATOR - INPUT OUTPUT STREAM AND ACCOUNT OBJECT BY REFERENCE
    friend std::ostream &operator<<(std::ostream &os, const Account &acc);

public:
    virtual void withdraw(double amount)
    {
        std::cout << "In Account::withdraw" << std::endl;
    }
    virtual ~Account() {}
};

std::ostream &operator<<(std::ostream &os, const Account &acc)
{
    os << "Account display";
    return os;
}

class Checking : public Account
{
    // FRIEND FUNCTION IS NOT INHERITED
    friend std::ostream &operator<<(std::ostream &os, const Checking &acc);

public:
    virtual void withdraw(double amount)
    {
        std::cout << "In Checking::withdraw" << std::endl;
    }
    virtual ~Checking() {}
};

std::ostream &operator<<(std::ostream &os, const Checking &acc)
{
    os << "Checking display";
    return os;
}

class Savings : public Account
{
    friend std::ostream &operator<<(std::ostream &os, const Savings &acc);

public:
    virtual void withdraw(double amount)
    {
        std::cout << "In Savings::withdraw" << std::endl;
    }
    virtual ~Savings() {}
};

std::ostream &operator<<(std::ostream &os, const Savings &acc)
{
    os << "Savings display";
    return os;
}
class Trust : public Account
{
    friend std::ostream &operator<<(std::ostream &os, const Trust &acc);

public:
    virtual void withdraw(double amount)
    {
        std::cout << "In Trust::withdraw" << std::endl;
    }
    virtual ~Trust() {}
};

std::ostream &operator<<(std::ostream &os, const Trust &acc)
{
    os << "Trust display";
    return os;
}

int main()
{
    Account *p1 = new Account();
    std::cout << *p1 << std::endl;

    Account *p2 = new Checking();
    std::cout << *p2 << std::endl;

    //    Account a;
    //    std::cout << a<< std::endl;
    //
    //    Checking c;
    //    std::cout << c << std::endl;
    //
    //    Savings s;
    //    std::cout << s << std::endl;
    //
    //    Trust t;
    //    std::cout << t << std::endl;

    delete p1;
    delete p2;
    return 0;
}
