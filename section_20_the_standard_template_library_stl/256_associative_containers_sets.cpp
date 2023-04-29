/*

                Associative Containers - Sets


    The STL Set Containers

    - associative containers
        - collection of stored objects that allow fast retrieval using a key
        - STL provided Sets and Maps
        - Usually implemented as a balanced binary tree or hashsets
        - most operation are very efficient

    -sets:
        - std::set
        - std::unordered_set
        - std::multiset
        - std::unordered_multiset

    ---------------------------------------------------------------------------------------------------------

    std::set
    #include <set>

    - similar to mathematical set
    - ordered by key
    - no duplicate elements
    - all iterators available and invalidate when corresponding element is deleted

    ---------------------------------------------------------------------------------------------------------

    std::set<int> s {1, 2, 3 , 4, 5};

    std::set<std::string> stooges {
        std::string{"Larry"},
        "Moe",
        std::string{"Curly"}
    };

    s = {2, 4, 6, 8, 10};

    ---------------------------------------------------------------------------------------------------------

    std::set<int> s { 4, 1, 1, 3, 3, 2, 5};         // 1 2 3 4 5 <--- duplicated num,bers are ignored

    std::cout << s.size();      // 5
    std::cout << s.max_size;        // a very large number

    - no concept of front and back

    s.insert(7)             // 1 2 3 4 5 7

    ---------------------------------------------------------------------------------------------------------

                            Common Methods

    Person p1 {"Larry", 18};
    Person p2 {"Moe", 25};

    std::set<Person> stooges;

    stooges.insert(p1);                 // adds p1 to the set
    auto result = stooges.insert(p2);   // adds p2 to the set

    - uses operator< for ordering
    - returns a std::pair<iterator, bool>
        - first is an iterator to the inserted element or to the duplicate in the set
        - second is a boolean indicating success or failure

    ---------------------------------------------------------------------------------------------------------

    s.erase(3);     // erase the 3: 1 2 4 5

    auto it = s.find(5);        // it is set find to it is more robust

    if (it !=s.end())
        s.erase(it);            // erase the 5: 1  2 4

    ---------------------------------------------------------------------------------------------------------

    int num = s.count(1);       // 0 or 1

    s.clear();      // remove all elements

    s.empty();      // true or false

    ---------------------------------------------------------------------------------------------------------
    ---------------------------------------------------------------------------------------------------------
    ---------------------------------------------------------------------------------------------------------


                        std::multi_set

        - #include <set>

        - sorted by key
        - allows duplicate elements
        - all iterators are available

    ---------------------------------------------------------------------------------------------------------
    ---------------------------------------------------------------------------------------------------------
    ---------------------------------------------------------------------------------------------------------

                    std::unordered_set

        - #include <unordered_set>

        - elements are unordered
        - no duplicate elements allowed
        - elements cannot be modified
            - must be erased and new element inserted
        - no reverse iterators are allowed

    ---------------------------------------------------------------------------------------------------------
    ---------------------------------------------------------------------------------------------------------
    ---------------------------------------------------------------------------------------------------------

                    std::unordered_multiset

        #include <unordered_set>

        - elements are unordered
        - allows duplicate elements
        - no reverse iterators are allowed

    ---------------------------------------------------------------------------------------------------------
    




*/