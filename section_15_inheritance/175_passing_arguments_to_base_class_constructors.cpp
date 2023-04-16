/*

                Passing Arguments to Base Class Constructors


    - Passing arguments to base class constructors
        - the base part of a derived class must be initialized first
        - how can we control exactly which base class constructor is used during initialization?
        - we can invoke the whichever base class constructor we wish in the initialization list of derived class

----------------------------------------------------------------------------------------------------------

        Passing arguments to base class constructors

        class Base {
            public:
                Base();
                Base(int);
                . . .
        };

        Derived::Derived(int x)
            : Base(x), {optional initializers for Derived} {
                // code
            }

----------------------------------------------------------------------------------------------------------

            complete example

    class Base {
        int value;
    public:
        Base(): value{0} {
            cout << "Base no-args constructor" << endl;
        }

        Base(int x) : value{x} {
            cout << "int Base constructor" << endl;
        }
    };


    class Derived : public Base {
        int doubled_value;
    public:
        Derived(): Base{}, doubled_value{0} {
            cout << "Derived no-args constructor " << endl;"
        }
                            // initialize list
        Derived(int x) : Base{x}, doubled_value {x*2} {
            cout << "int Derived constructor " << endl;
        }
    };


----------------------------------------------------------------------------------------------------------

    Constructors and class initialization

                                                                    Output
            Base base;                                      Base no-args constructor

            Base base{100};                                 int Base constructor

            Derived derived;                                Base no-args constructor
                                                            Derived no-args constructor

            Derived derived {100};                          int Base constructor
                                                            int Derived constructor







*/