/*
                                        Constructors and class initialization

        - a derived class inherits from its Base class

        - the Base part of the Derived class Must be initialized before the derived class is initialized

        - when a derived object is created
            - base class constructor executes then
            - derived class constructor executes


    ---------------------------------

                                        Example:
    class Base {
        public:
            Base(){
                cout << "Base Constructor" << endl;
            }
    };


    class Derived : public Base {
        public:
            Derived(){
                cout << "derived constructor " << endl;
            }
    };




    Constructors and class initialization

                                                                Output

    Base base;                                          Base constructor

    Derived derived;                                    Base constructor
                                                        Derived constructor

    ----------------------------------------------------------------------------------------

                Destructors

    - Class destructors are invoked in the reverse order as constructors

    - the derived of the derived class MUST be destroyed BEFORE the Base class destructor is invoked

    - when a derived object is destroyed
        - derived class destructor executes then
        - base class destructor executes
        - each destructor should free resources allocated in it is own constructors



    --------------------------------------------------------------------------------------------

    class Base {
        public:
            Base(){ cout << "base constructor" << endl; }
            ~Base(){ cout << "base destructor" << endl; }
    };


    class Derived : public Base  {
        public:
            Derived(){ cout << "Derived constructor" << endl; }
            ~Derived(){ cout << "Derived destructor" << endl; }
    };

    --------------------------------------------------------------------------------------------

                    Destructors and class initialization

                                                                Output

    Base base;                                          Base constructor
                                                        Base Destructor

    Derived derived;                                    Base constructor
                                                        Derived constructor
                                                        Derived destructor
                                                        Base Constructor

    --------------------------------------------------------------------------------------------

    Constructors and class initialization

    - a derived class does not inherit
        - base class constructors
        - base class destructor
        - base class overloaded assignment operators
        - base class friend functions

    - however the derived class constructors, destructors and overloaded assignment operators can invoke the base-class versions

    - C++ 11 allows explicit inheritance of base 'non-special' constructors with
        - using Base::Base; anywhere in the derived class declaration
        - lots of rules involved, often better to define constructors yourself                              <---- much more rules! tutor does not like this approach!


-------------------------



*/