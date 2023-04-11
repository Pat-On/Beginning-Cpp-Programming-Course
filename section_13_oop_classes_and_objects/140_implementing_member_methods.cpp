/*

            Implementing Member Methods

    - Very similar to how we implemented functions

    - Member methods have access to member attributes
        - so you do not need to pass them as  arguments!

    - Can be implemented inside the class declaration
        - implicitly inline

    - can be implemented outside the class declaration
        - need to use Class_name::method_name

    - Can separate specification from implementation
        - .h file for the class declaration
        - .cpp file for the class implementation

    ---------------------------------------------------------------


            INSIDE THE CLASS DECLARATION

    class Account {
        private:
            double balance;
        public:
            void set_balance(double bal){
                balance = bal;
            }

            double get_balance(){
                return balance;
            }
    }



    ----------------------------------------------------------------

            OUTSIDE THE CLASS DECLARATION

    class Account {
        private:
            double balance;
        public:
            // method prototypes
            void set_balance(double bal);
            double get_balance();
    }

    // prefixing it with Account:: to let know compiler to who it belongs
    void Account::set_balance(double bal){
        balance = bal;
    }

    doubler Account::get_balance(){
        return balance;
    }

    ----------------------------------------------------------------

            SEPARATING SPECIFICATION FROM IMPLEMENTATION

    Account.h

    class Account {
        private:
            double balance;
        public:
            void set_balance(double bal);
            double get_balance();
    }

    --- to be sure that compiler is going to read Account.h file one we need to include:

                INCLUDE GUARDS

        #ifndef _ACCOUNT_H_     // it is checking if preprocessing has this symbol (name) if yes then it skipping this file
        #define _ACCOUNT_H_

            // Account class declaration

        #endif

    ----------------------------------------------------------------

    Account.h

        #ifdef _ACCOUNT_H_
        #define _ACCOUNT_H_

        class Account {
        private:
            double balance;
        public:
            void set_balance(double bal);
            double get_balance();
        };

        #endif

    ----------------------------------------------------------------

    Account.h   - #pragma once      // This is just directive it is doing the same

    #pragma once
    class Account {
    private:
        double balance;
    public:
        void set_balance(double bal);
        double get_balance();
    };


------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

                    INCLUDING .H file

    Account.cpp

    #include "Account.h"

    void Account::set_balance(double bal) {
        balance = bal;
    }

    double Account::get_balance(){
        return balance;
    }

    note:
        <> - include with this is including system file - compiler know where they are
        "" - include header file that are in this project

------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

main.cpp
#include <iostream>
#include "Account.h"

int main() {
    Account frank_account;
    frank_account.set_balance(1000.00);
    double bal = frank_account.get_balance();

    std::cout << bal << std::endl; // 1000
    return 0;
}


----------------------->    source->ImplementingMethods and ImplementingMethods2

*/