/*


                Generic Programming with function templates

                What is a C++ template

                - Blueprint
                - Function and class templates
                - allow plugging-in any data type
                - compiler generates the appropriate function/class from the blueprint
                - generic programming / meta-programming

        ---------------------------------------------------------

        Generic programming with function templates

        - lets revisit the max function from the last lecture

        int max (int a, int b){
            return (a > b) ? a : b;
        }

        int x = 100;
        int y = 200;

        std::cout << max(x, y);     // displays 200


        ------------------------------------------------------------

        - we can replace type we want to generalize with a name say T
        - but now this won't compile

        T max (T a, T b) {
            return (a > b) ? a : b;
        }


        ------------------------------------
        We need to tell the compiles this is a template function - it would not compile if not
        - we also need to tell it that T is the template parameter


        template <typename T>       // T - template parameter Type
        T max (T a, T b) {
            return (a > b) ? a : b;
        }


        It would compile but not generate any code because it is simply just a template

        ------------------------------------------------------------------------------------


        - We may also use class instead of typename - they are basically equivalent

        template <class T>
        T max (T a, T b) {
            return (a > b) ? a : b;
        }

        ------------------------------------------------------------------------------------------

        - Now the compiler can generate the appropriate function from the template
        - note, this happens at compile-time!

        int a {20};
        int b {10}

        std::cout << max<int> (a, b);

        -----------------------------------------------------------------

        - Many times the compiler can deduce the type and the template parameter is not needed
        - depending on the type of a and b the compile figure it out

        std:: cout << max <double> (c, d);
        std::cout << max(c, d);

        ----------------------------------------------------

        - and we can use almost any type we need

        char a {'A'};
        char b {'Z'};

        std::cout << max(a, b) << std::endl;

        -----------------------------------------------------------


        Notice the type MUST support the > operator either natively or as an overloaded operator (operator>)

        template <typename T>
        T max(T a, T b) {
            return (a > b) ? a : b;
        }

        --------------------------------------------------------------


        - The following will not compile unless Player overloads operator>       

        Player p1 {"Hero", 100, 20};
        Player p2 {"Enemy", 99, 3};

        std::cout << max<Player>(p1, p2);

        ------------------------------------------------------------------

        - We can have multiple template parameters
        - and their types can be different

        template <typename T1, typename T2>
        void func(T1 a, T2 b) {
            std::cout << a << " " << b;
        }

        ----------------------------------------------------------------

        - when we use the function we provide the template parameters
        - ofter the compiler can deduce them

        func<int, double>(10, 20.2);
        func('A', 12.4);


*/