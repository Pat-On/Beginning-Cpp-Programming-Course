/*

                            Inheritance

                    Using and redefining Base class methods

            - Derived class can directly invoke Base class methods

            - derived class can override or redefine Base class methods

            - very powerful in the context of polymorphism

--------------------------------------------------------------------------------------------

    class Account {
        public:
            void deposit(double amount) { balance += amount;}
    };

    class Savings_Account: public Account {
        public:
            void deposit(double amount) { // redefine base class method

                amount += some_interest;
                Account::deposit(amount);   // invoke call Base class method            <----
            }
    };


    Static binding of method calls

        - binding of which method to use is done at compile time
            - default binding for c++ is static
            - derived class objects will use Derived::deposit
            - but we can explicitly invoke Base::deposit from Derived:deposit
            - Ok, but limited - much more powerful approach is dynamic binding which we will see in next section :>


--------------------------------------------------------------------------------------------

        Static binding of methods calls


        Base b;
        b.deposit(1000.0);                       // Base::deposit


        Derived d;
        d.deposit(1000.0);                      // Derived::deposit

        Base *ptr = new Derived();
        ptr->deposit(1000.0);                   // Base::deposit ????
                                                 it will work because compiler will consider Derived as a Base object and call this class
                                                but it is not correct approach

--------------------------------------------------------------------------------------------





*/