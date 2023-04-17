// Section 16
// The problem
#include <iostream>
#include <memory> // smart pointers

class Base
{
public:
    void say_hello() const
    {
        std::cout << "Hello - I'm a Base class object" << std::endl;
    }
};

class Derived : public Base
{
public:
    void say_hello() const
    {
        std::cout << "Hello - I'm a Derived class object" << std::endl;
    }
};

void greetings(const Base &obj)
{
    std::cout << "Greetings: ";
    obj.say_hello();
}

int main()
{
    Base b;
    b.say_hello(); // static binding to Base

    Derived d;
    d.say_hello(); // static binding to Derived - compile time

    greetings(b); // Base
    greetings(d); // you think it would be Derived but because of how binding  works it would refer to the Base Boom Surprise!

    // it has perfect sense because Derived is-a Base
    Base *ptr = new Derived();
    ptr->say_hello(); // always to Base::says_hello()

    // smart pointer - statically bind too
    std::unique_ptr<Base> ptr1 = std::make_unique<Derived>();
    ptr1->say_hello(); // always to Base::says_hello()

    delete ptr;

    return 0;
}
