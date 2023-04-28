/*

                    Introduction to STL iterators



        Iterators
        - allows abstracting an arbitrary container as a sequence of elements
        - they are objects that work like pointers by design
        - most container classes can be traversed with iterators

    ------------------------------------------------------------------------------------

    Declaring Iterators

    - Iterators must be declared based on the container type they will iterate over

    container_type::iterator_type iterator_name;


    std::vector<int>::iterator it1;
    std::list<std::string>::iterator it2;
    std::map<std::string, std::string>::iterator it3;
    std::set<char>::iterator it4;

    ------------------------------------------------------------------------------------

    Iterator begin and end methods

            std::vector<int> vec {1, 2, 3};


            1 | 2 | 3 |  |      <-- vec.end()
                                        location after last element
            |
            vec.begin()
            first element


    ---------------------------------------------------------------------

    set -  might be implemented continuously in memory or not we do not have to know about it

        std::set<char> suits {'C', 'H', 'S', 'S'};


                    H   S   end <--- suits.end()
                C   D
                |
                suits.begin()

    ---------------------------------------------------------------------

        std::vector<int> vec {1,2,3};

        std::vector<int>::iterator it = vec.begin();

        or

        auto it = vec.begin();      <-- compiler deducing type

    ---------------------------------------------------------------------

                    Operations with iterators (it)


    Operation               Description                 Type of Iterator

    ++it                    pre-increment               all

    it++                    post-increment              all

    it = it1                assignment                  all

    *it                     dereference                 input and output

    it ->                   arrow operator              input and output

    it == it1               comparision for equality    input

    it != it1               comparision for inequality input

    --it                    pre-decrement               bidirectional

    it--                    post-decrement              bidirectional

    it + i, it += i
    it - i, it -= i         increment and decrement     random access

    it < it1, it <= it1
    it > it1, it >= it1     comparison                  random access

    ---------------------------------------------------------------------

    using iterators - std::vector

    std::vector<int> vec {1,2,3};

    std::vector<int>::iterator it = vec.begin();  <--- initialization to the first element

    while (it != vec.end()) {       <----- iterating
        std::cout << *it << " ";
        ++it;
    }

    // 1 2 3



    -------------------------------------------------------------------------

    Using iterators - std::vector

        std::vector<int> vec {1,2,3};

        for (auto it = vec.begin(); it != vec.end(); it++){
            std::cout << *it << " ";
        }
        // 1 2 3 

        - This is how the range-based for loop works

    -------------------------------------------------------------------------

    Using iterators - std::set

        std::set<char> suits {'C', 'H', 'S', 'D' };

        auto it = suits.begin();        <---- compiler will deduct type based on the first element

        while (it != suits.endl()){
            std::cout << *it << " " << std::endl;
            ++it;
        }

        // C H S D

    -------------------------------------------------------------------------

                Reverse Iterators

        - works in revers
        - last element is the first and first is the last
        - ++ moves backward, -- moves forward

        std::vector<int> vec {1, 2, 3};
        std::vector<int>::reverse_iterator it = vec.begin();

        while (it != vec.end()) {
            std::cout << *it << " ";
            ++it;
        }

        // 3 2 1 

    -------------------------------------------------------------------------

        Other iterators

        - begin() and end()
            - iterator
        
        - cbegin() and cend()
            - const_iterator

        - rbegin() and rend()
            - reverse_iterator

        - crbegin() and crend()
            - const_reverse_iterator

        

*/