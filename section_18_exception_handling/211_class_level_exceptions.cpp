/*

            Class Level Exceptions


        Class-level exceptions

        Exceptions can also be thrown from within a class:


        - Method
            - these work the same way as they do for functions as we have seen

        - constructor
            - constructors may fail
            - constructors do not return any value
            - throw an exception in the constructor if you cannot initialize an object

        - destructor
            do not throw exceptions from your destructor

    ---------------------------------------------------------------------------------
    Class-level exceptions

    Account::Account(std::string name, double balance)
        : name {name}, balance {balance}{
            if (balance <0.0)
                throw Illegal BalanceException{};
        }


    try {
        std::unique_ptr<Account> moes_account = 
            std::make_unique<Checking_Account>("Moes",-10.0);
        // use moes_account
    }
    catch (const IllegalBalanceException &ex){
        std::cerr << "Could not create account" << std::endl;
    }
*/