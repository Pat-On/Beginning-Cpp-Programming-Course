/*

                Stateful Lambda Expressions


    [captured_variables] () -> return_type specifiers {};

    non-empty capture list
    defines what information/variables should be captured

    ----------------------------------------------------------------------------

                        Compilation of stateless lambda expressions


        Lambda Definition

    auto l = [] (int x) {std::cout << x;};




                        Compiler-generated closure

    class CompilerGeneratedName { // closure class type - generated at compile type

    public:
        CompilerGeneratedName();

        void operator() (int x) {
            std::cout << x;
        }
    }

    ----------------------------------------------------------------------------

                        Compilation of stateful lambda expression



        Lambda Definition

    int y {10};

    auto l = [y] (int x) {std::cout << x;};




                        Compiler-generated closure

    class CompilerGeneratedName { // closure class type - generated at compile type
    private:
        int y;

    public:
        CompilerGeneratedName(int y) : y {y} {};

        void operator() (int x) const {         // no variable can be modified - by default all values catch by value are catch const
            std::cout << x + y;
        }
    }

    ----------------------------------------------------------------------------

                    Capture by value / captured by const value

        int x {100};

        [x] () {std::cout << x;}(); // displays 100

    ----------------------------------------------------------------------------

                    using mutable to modify variables captured by value


            int x {100};
            [x] () mutable {
                x += 100;
                std::cout << x;     // displays 200
            } ();

            std::cout << x;     // displays 100

    ----------------------------------------------------------------------------

                        Capture by reference

            int x {100};
            [&x] () mutable {
                x += 100;
                std::cout << x;     // displays 200
            } ();

            std::cout << x;     // displays 200

    ----------------------------------------------------------------------------



            Capture by value and reference

            [x, y] // capture both x and y by value
            [x, &y] // capture x by value and y by reference
            [&x, y] // capture x by reference and y by value
            [&x, &y] // capture both x and y by reference

    ----------------------------------------------------------------------------

            Default captures

            [=]  // default capture by value
            [&]  // default capture by reference
            [this] // default capture this object by reference

    ----------------------------------------------------------------------------


                        using default and explicit captures

            [=, &x]     // Default capture by value but capture x by reference
            [&, y]      // Default capture by reference but capture y by value
            [this, z]   // Default capture this by but capture z by value


*/