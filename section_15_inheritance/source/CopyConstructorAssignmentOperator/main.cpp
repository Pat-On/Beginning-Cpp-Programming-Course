// Section 15
// Copy constructor and operator=
#include <iostream>

using namespace std;

class Base
{
private:
    int value;

public:
    Base()
        : value{0}
    {
        cout << "Base no-args constructor" << endl;
    }
    Base(int x)
        : value{x}
    {
        cout << "int Base constructor" << endl;
    }

    // copy constructor
    Base(const Base &other)
        : value{other.value}
    {
        cout << "Base copy constructor" << endl;
    }
    // overloaded copy assignment operator
    Base &operator=(const Base &rhs)
    {
        cout << "Base operator=" << endl;
        if (this == &rhs)
            return *this;
        value = rhs.value;
        return *this;
    }
    // destructor
    ~Base() { cout << "Base destructor" << endl; }
};

class Derived : public Base // publicly derived
{
private:
    int doubled_value;

public:
    Derived() : Base{}
    {
        cout << "Derived no-args constructor " << endl;
    }
    // overloaded int constructor
    Derived(int x)
        : Base{x}, doubled_value{x * 2}
    {
        cout << "int Derived constructor" << endl;
    }

    // copy constructor
    Derived(const Derived &other)
        : Base(other), doubled_value{other.doubled_value} // <-- slicing
    {
        cout << "Derived copy constructor" << endl;
    }

    Derived &operator=(const Derived &rhs)
    {
        cout << "Derived operator=" << endl;
        if (this == &rhs)
            return *this;
        // calling base class assignment operator <- slicing again
        // slicing is that the part that is related to Derived is going to be sliced out and 
        // only Base part ( in that case int) is going to be passed to the Base constructor
        Base::operator=(rhs);
        doubled_value = rhs.doubled_value;
        return *this;
    }
    // destructor
    ~Derived() { cout << "Derived destructor " << endl; }
};

int main()
{
    //    Base b {100};   // Overloaded constructor
    //    Base b1 {b};    // Copy constructor
    //    b = b1;          //   Copy assignment

    Derived d{100}; // Overloaded constructor
    Derived d1{d};  // Copy constructor
    d = d1;         // Copy assignment

    return 0;
}
