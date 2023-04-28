/*

                                Introduction to STL Algorithms


        Algorithms

        - std algorithms work on sequences of conainter elements provided to them by an iterator

        - stl has many common and useful algorithms

        - to many to describe in this section
                https://en.cppreference.com/w/cpp/algorithm

        - Many algorithms require extra information in order to do their work
            - functors (function objects)
            - function pointers
            - lambda expressions c++11


    ----------------------------------------------------------------------------

        #include <algorithm>

        - Different containers support different types of iterators
            - determines the types of algorithms supported

        - AII STL algorithms expect iterators as arguments
            - determines the sequence obtained from the container

    ----------------------------------------------------------------------------

    Iterator invalidation

    - iterators point to containers elements

    - it is possible iterators become invalid during processing

    - suppose we are iterating over a vector of 10 elements
        - and we clear the vector while iterating? what happens?
        - undefined behavior - our iterators are pointing to invalid location

    ----------------------------------------------------------------------------

    Example algorithms - find with primitive types

    - the find algorithm tried to locate the first occurrence of an element in a container
    - lots of variations
    - returns an iterator pointing to the located element or end()

    std::vector<int< vec {1,2,3};

    auto loc = std::find(vec.begin(), vec.end(), 3);        /// <-------- interesting syntax

    if (loc != vec.end())       // found it!
        std::cout << *loc  << std::endl;    /// 3

    ----------------------------------------------------------------------------

    Find needs to be able to compare objects

    - find needs to be able to compare object

    - operator== is used an must be provided by your class

    std::vector <Player team { / * assume initialized * / }
    Player p {"Hero", 100, 12};

    auto loc = std::find(team.begin(), team.end(), p);

    if (loc != vec.end())                   // found it
        std::cout << *loc << std::endl;     // operator<< called

    ----------------------------------------------------------------------------

    Example algorithm - for_each

    - for_each algorithm applies a function to each element in the iterator sequence

    - function must be provided to the algorithm as:
        - functor (function object)     <-- from the beginning
        - function pointer                <-- from the beginning
        - lambda expressions (C++)
    
    - lets square each element

    ----------------------------------------------------------------------------

        for_each - using a functor

            struct Square_Functor {
                void operator()(int x) {    // overloaded () operator
                    std::cout << x * x << " ";
                }
            };

            Square_Functor square;  function object

            std::vector<int> vec {1, 2, 3, 4};

            std::for_each(vec.begin(), vec.end(), square);

            // 1 4 9 16

    ----------------------------------------------------------------------------

        for_each - using a function pointer

        void square(int x) {            // function
            std::cout << x * x << " ";
        }

        std::vector<int> vec{1, 2, 3, 4};

        std::for_each(vec.begin(), vec.end(), square);

        // 1 4 9 16

    ----------------------------------------------------------------------------

        for_each = using a lambda function

        std::vector<int> vec {1, 2, 3, 4};

        std:for_each(vec.begin(), vec.end(),
        [](int x) {std::cout << x * x << " "; }) // <-- lambda / closures, blocks etc

    ----------------------------------------------------------------------------


*/