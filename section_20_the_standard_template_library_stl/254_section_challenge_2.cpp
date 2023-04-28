/*

                std::vector

                #include <vector>


                - Dynamic size
                    - handled automatically
                    - can expand and contract as needed
                    - elements are stored in contiguous memory as an array

                - Direct element access (constant time)

                - Rapid insertion and deletion at the back (constant time)

                - insertion or removal of elements (linear time)

                - all iterators available and may invalidate

    --------------------------------------------------------------------------------------------

        std::vector<int> vec {1,2,3};


            1 | 2 | 3

    front()                 back()
    first element           last element

    --------------------------------------------------------------------------------------------


        vec.push_back(4)                <--- usually twice of the space of the vector is allocated

            1 | 2 | 3 | 4

    front()                 back()
    first element           last element

    --------------------------------------------------------------------------------------------

        std::vector - initialization and assignment

        std::vector<int> vec {1, 2, 3, 4, 5};
        std::vector<int> vec1 (10, 100);    // ten 100s

        std::vector<std::string> stooges {
            std::string{"Larry"},
            "Moe",
            std::string{"Curly"}
        };

        vec1 = {2, 4, 6, 8, 10};

    --------------------------------------------------------------------------------------------

        std::cout << vec.size()l            // 5
        std::cout << vec.capacity();        // 5
        std::cout << vec.max_size           // a very large number

        std::cout << vec.at(0);             // 1
        std::cout << vec[1];                // 2

        std::cout << vec.front();           // 1
        std::cout << vec.back();            // 5

    --------------------------------------------------------------------------------------------

        Person p1 {"Larry", 18};
        std::vector<Person> vec;

        vec.push_back(p1);              // add p1 to the back
        vec.pop_back();                 // remove p1 from the back

        vec.push_back(Person {"Larry", 18)};

        vec.emplace_back("Larry", 18)               // efficient

    --------------------------------------------------------------------------------------------

        std::cout << vec1.empty();      // 0 false

        vec1.swap(vec2);                /swaps the 2 vectors

        std::sort(vec1.begin(), vec1.end());

    --------------------------------------------------------------------------------------------

        std::vector<int> vec1 {1,2,3,4,5};

        std::vector<int> vec2 {10, 20, 30, 40, 50};

        auto it = std::find(vec1.begin(), vec1.end(), 3);
        vec1.insert(it, 10);                // 1, 2, 10, 3, 4, 5

        it = std::find(vec1.begin(), vec1.end(), 4);
        vec::insert(it, vec2.begin(), vec2.end());
                // 1, 2, 10, 3, 10, 20, 30, 40, 50, 4, 5

*/