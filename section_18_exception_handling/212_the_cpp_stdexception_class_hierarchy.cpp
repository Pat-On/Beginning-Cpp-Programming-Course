/*

            The C++ std::exception Class Hierarchy


    The C++ standard library exception class hierarchy

    C++ provides a class hierarchy of exception classes
        - std::exception is the base class
        - all subclasses implement the what() virtual function
        - we can create our own user-defined exception subclass


    virtual const char *what () const noexcept;




                                                                    Exception

                    bad_typeid                      runtime_error                   logic_error                                     bad_exception
                    bas_cast                            domain_error                    system_error                                bad_alloc
                        bad_any_cast  (C++ 17)              out_of_range                    ios_base_failure                            bad_array_new_length
                    bad_weak_ptr                        length_error                        filesystem::filesystem_error (c++17)        bad_array_length
                    bad_function_call                   invalid_argument                regex_error                                 bad_optional_access  (c++17)
                                                        future_error                    range_error                                 bad_variant_access  (c++17)
                                                                                        underflow_error
                                                                                        overflow_error


    ---------------------------------------------


    Deriving our class from std::exception

    class IllegalBalanceException: public std::exception
    {
        public:
            // default constructor
            IllegalBalanceException() noexcept = default;

            // default destructor
            ~IllegalBalanceException() = default;

            // implementation of what() virtual function
            virtual const char* what() const noexcept {
                return "Illegal balance exception";
            }
    }



    noexcept - keyword - it is telling compiler that there were no exception, so do not throw exception

    --------------------------------------
    our modified account class constructor

    Account::Account (std::string name, double balance)
        : name{name}, balance{balance}{
            if (balance < 0.0)
                throw IllegalBalanceException{};
        }


    --------------------------------------------------

    Creating an Account object

    try {
        std::unique_ptr<Account> moes_account =
            std::make_unique<Checking_Account>("Moes", -100.0);
        std::cout << "Use moes_account" << std::endl
    }
    catch (const IllegalBalanceException &ex)
    {
        std::cerr << ex.what() << std::endl;
            // display "Illegal balance exception"
    }

*/