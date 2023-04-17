/*

            What is Polymorphism?

    - Fundamental to OO Programming

    - Polymorphism
        - compile-time
        - early binding
        - static binding

        - run time
        - late binding
        - dynamic binding

    - runtime polymorphims
        - being able to assign different meaning to the same function at run time

    - allows us to program more abstractly
        - think general vs specific
        - let C++ figure out which function to call at run time

    - not the default in c++ , run time polymorphism is achieved via
        - inheritance
        - base class pointers or references
        - virtual functions

------------------------------------------------------------------------------------------------


            Types of Polymorphism in C++


                                            Polymorphism



                    Compile Time                                            Run-Time

    Function                Operator                                                    Function Overriding
    Overloading             Overloading

------------------------------------------------------------------------------------------------

    A non-polymorphic example - Static Binding

        Account a;
        a.withdraw(1000);           // Account::withdraw()

        Savings b;
        b.withdraw(1000);           // Savings::withdraw()

        Checking b;
        b.withdraw(1000);           // Checking::withdraw()

        Trust b;
        b.withdraw(1000);           // Trust::withdraw()


        ------------ IMPORTANT CASE ------------
        Account *p = new Trust();   // pointer to Account object - in reality Trust is-s Account
        p->withdraw(1000);          // Account::withdraw()
                                    // should be:
                                    // Trust::withdraw


                    Account
                    withdraw
            |                       |
        Savings                 Checking
        Withdraw                Withdraw
            |
            |
        Trust
        withdraw

------------------------------------------------------------------------------------------------

        A non-polymorphic example - Static Binding

        void display_account(const Account &acc) {
            acc.display();
            // will always use Account::display
        }

        Account a;
        display_account(a);

        Savings b;
        display_account(b);

        Checking c;
        display_account(c);

        Trust d;
        display_account(d);



                    Account
                    display
            |                       |
        Savings                 Checking
        display                 display
            |
            |
        Trust
        display

------------------------------------------------------------------------------------------------


        A polymorphic example - Dynamic Binding

        Account a;
        a.withdraw(1000);           // Account::withdraw()              // the same behave

        Savings b;
        b.withdraw(1000);           // Savings::withdraw()

        Checking b;
        b.withdraw(1000);           // Checking::withdraw()

        Trust b;
        b.withdraw(1000);           // Trust::withdraw()

        ------------ IMPORTANT CASE ------------
        Account *p = new Trust();                           <--- because of the dynamic binding
        p->withdraw(1000);         // Trust::withdraw();



                    Account
                    withdraw
            |                       |
        Savings                 Checking
        Withdraw                Withdraw
            |
            |
        Trust
        withdraw

        ! withdraw method is virtual in Account


------------------------------------------------------------------------------------------------

        A non-polymorphic example - Dynamic Binding

        void display_account(const Account &acc) {
            acc.display();
            // will always call the display method
            // depending on the object's type
            // at run-time
        }

        Account a;
        display_account(a);

        Savings b;
        display_account(b);

        Checking c;
        display_account(c);

        Trust d;
        display_account(d);



                    Account
                    display
            |                       |
        Savings                 Checking
        display                 display
            |
            |
        Trust
        display

        ! display method is virtual in Account
*/