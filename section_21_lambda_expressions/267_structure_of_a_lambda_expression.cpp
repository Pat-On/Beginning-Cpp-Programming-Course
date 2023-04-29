/*

            Structure of a Lambda Expressions


    []  ()  ->  return_type specifiers {};


    [] <-- capture list / capture closure
            defines the start of the lambda

    () <-- Parameter list
            Comma separated list of parameters

    -> return_type
            Can be omitted and the compiler will try to deduce it!

    specifiers
            Optional specifiers
                mutable and constexpr

    {} <-- body your code!

    ---------------------------------------------------------------------


            A simple lambda expression:


            [] () { std::cout << "Hi"; };


    ---------------------------------------------------------------------


            [] () { std::cout << "Hi"; } (); // lambda function call

            // Displays Hi

    ---------------------------------------------------------------------

            [] (int x) {std::cout << x;};

    ---------------------------------------------------------------------

            Parameters to lambda expressions

        [] (int x, int y) {std::cout << x + y ; };

    ---------------------------------------------------------------------

            Assigning a lambda expression to a variable

            auto l = [] () { std::cout << "HI"; };

            l();        // Displays Hi

    ---------------------------------------------------------------------

            auto l = [] (int x) {std::cout << x; };

            l(10);      // displays 10
            l(100);     // displays 100

    ---------------------------------------------------------------------

        Returning a value from a lambda expression


            auto l = [] (int x, int y) -> int {return x + y; };   // -> int optional because compiler can deduct type by itself

            or

            auto l = [] (int x, int y) { return x + y; };

            std::cout << l(2,3);        // displays 5
            std::cout << l(10, 20);     // displays 30







*/