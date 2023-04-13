/*
    this pointer


    - this is a reserved keyword
    - contains the address of the object - so it is a pointer to the object

    - can only be used in class scope

    - all member access is done via the this pointer

    - can be used by the programmer
        - to access data member and methods
        - to determine if two objects are the same (more in the next section)
        - can be dereferenced (*this) to yield the current object


    ---------- setter

    void Account::set_balance(double bal) {
        balance = bal; // this->balance is implied
    }


    ---------------------- to disambiguate identifier use

    void Account::set_balance(double balance) {
        balance = balance; // which balance? the parameter
    }

    void Account::set_balance(double balance) {
        this->balance = balance; // Unambiguous
    }


    ---------------------- to determine object identity

    - sometimes its useful to know if two objects are the same object

    int Account::compare_balance(const Account &other) {
        if (this == &other)
            std::cout << "The same objects" << std::endl;
    }

    frank_account.compare_balance(frank_account);

    - we will use the this pointer again when we overload the assignment operator

*/