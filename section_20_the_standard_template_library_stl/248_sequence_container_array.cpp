/*

        std::array (c++11)

        #include <array>


        - fixed size
            - size must be known at compile time

        - direct element access

        - provides access to the underlying raw array

        - use instead of raw arrays when possible

        - all iterators available and do not invalidate

        - constant time for all elements

        - wrapper class around raw array

    ---------------------------------------------------------------------------

        std::array - initialization and assignment

        std::array<int, 5> arr1 { {1,2,3,4,5}};     c++11 double curly  vs c++14 single curly ^^

        std::array<std::string, 3> stooges {
            std::string("Larry"),
            "Moe",
            std::string("Curly"),

        };

        arr1 = {2, 4, 6, 8, 10};


    ---------------------------------------------------------------------------


        std::array - common methods

            std::array<int, 5> arr {1,2,3,4,5};

            std::cout << arr.size();        // 5
            std::cout << arr.at(0);         // 1
            std::cout << arr[1];            // 2

            std::cout << arr.front();       // 1
            std::cout << arr.back();        // 5

    ---------------------------------------------------------------------------

        std::cout << arr.empty();   // 0 (false)
        std::cout << arr.max_size();    // 5
        arr.swap(arr1);             // swap the 2 arrays
        int *data = arr.data();     // get raw array address

    ---------------------------------------------------------------------------




*/