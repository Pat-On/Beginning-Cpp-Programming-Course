/*

                Associative Containers - Maps

    - Associative containers
        - collection of stored objects that allow fast retrieval using a key
        - stl provides sets and maps
        - usually implemented as a balanced binary tree or hashsets
        - most operation are very efficient

    - maps
        std::map
        std::unordered_map
        std::multimap
        std::unordered_multimap

    -------------------------------------------------------------------------------------------

    std::map

    #include <map>

    - similar to a dictionary

    - elements are stored as key, value pairs (std::pair)

    - ordered by key

    - no duplicate elements (keys are unique)

    - direct element access using the key

    - all iterators available and invalidate when corresponding element is deleted

    -------------------------------------------------------------------------------------------

                Initialization and assignment

    std::map<std::string, int> m1 {
        {"Larry", 18},
        {"Moe", 25}
    };

    std::map<std::string, std::string> m2{
        {"Bob", "Butcher"},
        {"Anne", "Baker"},
        {"George", "Candlestick maker"}
    };

    -------------------------------------------------------------------------------------------

    Common methods

    std::cout << m.size ();     // 3
    std::cout << m.max_size;    // a very large number

    - no cept of front and back

    /*

                Associative Containers - Maps

    - Associative containers
        - collection of stored objects that allow fast retrieval using a key
        - stl provides sets and maps
        - usually implemented as a balanced binary tree or hashsets
        - most operation are very efficient

    - maps
        std::map
        std::unordered_map
        std::multimap
        std::unordered_multimap

    -------------------------------------------------------------------------------------------

    std::map

    #include <map>

    - similar to a dictionary

    - elements are stored as key, value pairs (std::pair)

    - ordered by key

    - no duplicate elements (keys are unique)

    - direct element access using the key

    - all iterators available and invalidate when corresponding element is deleted

    -------------------------------------------------------------------------------------------

                Initialization and assignment

    std::map<std::string, int> m1 {
        {"Larry", 18},
        {"Moe", 25}
    };

    std::map<std::string, std::string> m2{
        {"Bob", "Butcher"},
        {"Anne", "Baker"},
        {"George", "Candlestick maker"}
    };

    -------------------------------------------------------------------------------------------
                                                key value
    std::pair<std::string, std::string> p1 {"James", "Mechanic"};

    m.insert(p1);
                            // key - value
    m.insert(std::make_pair("Roger", "Ranger"));


    -------------------------------------------------------------------------------------------

    m["Frank"] = "Teacher";l        // insert

    m["Frank"] = "Instructor";       // update value

    m.at("Frank") = "Professor";    // Update value - throw exception if no exist

    -------------------------------------------------------------------------------------------

    m.erase("Anne");            // erase Anne

    if (m.find("Bob") != m.end())       // find bob
        std::cout << "Found Bob!";

    auto ir = m.find("George");
    if(it != m.end())
        m.erase(it);

    -------------------------------------------------------------------------------------------

    int num = m.count("Bob");       // 0 or 1

    m.clear();      // remove all elements

    m.empty();      // true or false

    -------------------------------------------------------------------------------------------

                        std::multimap

            #include <map>

            - ordered by key
            - allows duplicate elements
            - all iterators are available

    -------------------------------------------------------------------------------------------

                    std::unordered_map

            #include <unordered_map>

            - elements are unordered
            - no duplicate elements allowed
            - no reverse iterators are allowed

    -------------------------------------------------------------------------------------------

                    std::unordered_multimap

            #include <unordered_map>

            - elements are unordered
            - allows duplicate elements
            - no reverse iterators are allowed

    -------------------------------------------------------------------------------------------







*/
