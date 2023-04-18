/*

                    Using the override specifier (C++ 11)

    - We can override Base class virtual functions
    - The function signature and return must be EXACTLY the same
    - if they are different then we have redefinition not overriding
    - redefinition is statically bound
    - overriding is dynamically bound
    - C++ provides an override specifier to have the compiler ensure overriding

    -----------------------------------------------------------------

    The override specifier

        class Base {
        public:
            virtual void say_hello() const {
                std::cout << "Hello - I am a Base class object" << std::endl;
            }
            virtual ~Base(){}
        };


        class Derive: public Base {
        public:
            virtual void say_hello() {  // Notice I forgot the const - NOT OVERRIDING IT IS REDEFINITION
                std::cout << "Hello - I am a Derived class object" << std::endl;
            }
            virtual ~Derived() {}
        }



        -----------------------------

        The override specifier

            Base:
                virtual void say_hello() const;

            Derived:
                virtual void say_hello();


        -----------------------------

        The override specifier

        Base *p1 = new Base();      // dynamic binding
        p1->say_hello();            // "Hello - I am a Base class object"


        Base *p2 - new Derived();   // statically bind, because we forgot const so function signature is different
        p2->say_hello();            // "Hello - I am a Base class object"

        - not what we expected
        - say_hello method signatures are different
        - so derived redefines say_hello instead of overriding it!

        ----------------------------------------------------------------------------------------------------------------

        The override specifier

            class Base {
            public:
                virtual void say_hello() const {
                    std::cout << "Hello - I am a Base class object" << std::endl;
            }
                virtual ~Base(){}
            }

            class Derive: public Base {
            public:
                virtual void say_hello() override {                                     // produces compiles error
                    std::cout << "Hello - I am a Derived class object" << std::endl;    // Error: marked override but does not override
                }
                virtual ~Derived() {}
            }
*/

// Section 16
// Using override
#include <iostream>

class Base
{
public:
    virtual void say_hello() const
    {
        std::cout << "Hello - I'm a Base class object" << std::endl;
    }
    virtual ~Base() {}
};

class Derived : public Base
{
public:
    virtual void say_hello() const override
    // virtual void say_hello() override // <- throwing compiler error
    { // Notice I forgot the const
        std::cout << "Hello - I'm a Derived class object" << std::endl;
    }
    virtual ~Derived() {}
};

int main()
{

    Base *p1 = new Base(); // Base::say_hello()
    p1->say_hello();

    Derived *p2 = new Derived(); // Derived::say_hello()
    p2->say_hello();

    Base *p3 = new Derived(); //  Base::say_hello()   ?????   I wanted Derived::say_hello()
    p3->say_hello();

    return 0;
}

/*
.\section_16_polymorphism\187_using_the_override_specifier.cpp:100:18: error: 'virtual void Derived::say_hello()' marked 'override', but does not override
  100 |     virtual void say_hello() override
      |
*/