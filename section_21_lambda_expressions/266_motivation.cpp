/*

                Motivation


    - prior to C++ 11
        - function objects
        - function pointers

        - we often write many short functions that control algorithms

        - these short functions would be encapsulated in small classes to produce function objects

        - many times the classes and functions are far removed from where they are used leading to modification,maintenance and testing issues

        - compiles cannot effectively inline these functions for efficiency

    ---------------------------------------------------------------------------------------

    function objects

        class Multiplier {
        private:
            int num {};
        public:
            Multiplier (int n) : num {n} {}
            int operator() (int n) const { // overloaded function call operator
                return num* n;
            }
        };

    ---------------------------------------------------------------------------------------
        std::vector<int> vec {1,2,3,4};

        Multiplier mult{10}; // function object

        https://en.cppreference.com/w/cpp/algorithm/transform
        std::transform(vec.begin(), vec.end(), vec.begin, mult);

        vec now container {10, 20, 30, 40}

    ---------------------------------------------------------------------------------------

        std::vector<int> vec {1,2,3,4};

        Multiplier mult{10}; // function object

        https://en.cppreference.com/w/cpp/algorithm/transform
        std::transform(vec.begin(), vec.end(), vec.begin, Multiplier(10)); //unnamed multiplier object

        vec now container {10, 20, 30, 40}


    ---------------------------------------------------------------------------------------


    Generic function objects

    template <typename T>

    struct Displayer {
        void operator() (cost T &data) {
            std::cout << data<< " ";
        }
    }

    ---------------------------------------------------------------------------------------

    Displayer<int> d1;
    Displayer<std::string> d2;

    d1(100);            // d.operator(100);
                        // displays 100
    d2("Frank");        // d.operator("Frank")
                        // displays Frank

    ---------------------------------------------------------------------------------------

                        Generic function objects

    std::vector<int> vec1 {1, 2, 3, 4, 5};
    std::vector<std::string> vec2 {"Larry", "Moe", "Curly"};

    std::for_each(vec1.begin(), vec1.end(), Displayer<int>());

    std::for_each(vec1.begin(), vec1.end(), d1);

    std::for_each(vec2.begin(), vec2.end(), d2);

    ---------------------------------------------------------------------------------------

                        Using a Lambda Expression <-- compiler generate unnaMED FUNCTION OBJECT UNDER THE HOOD

    std::vector<int> vec1 {1, 2, 3, 4, 5,};
    std::vector<std::string> vec2 {"Larry", "Moe", "Curly"};

    std::for_each(vec1.begin(), vec1.end(),
                    [] (int x) {std::cout << x << " ";}
                  )

    std::for_each(vec2.begin(), vec2.end(),
                    [] (std::string s) {std::cout << x << " ";}

    ---------------------------------------------------------------------------------------



*/