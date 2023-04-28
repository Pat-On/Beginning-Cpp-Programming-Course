/*

                Sequence Containers - Deque


        std::deque (double ended queue)

        #include <deque>

        - dynamic size
            - handled automatically
            - can expand and contract as needed
            - elements are not stored in contiguous memory

        - direct element access (constant time)

        - rapid insertion and deletion at the front and back (constant time)

        - insertion or removal of elements (liner time)

        - all iterators available and may invalidate

    --------------------------------------------------------------------------------------------

        std::deque<int> d{1,2,3,4,5};
        std::deque<int> d1 {10, 100}    // ten 100s

        std::deque<std::string> stooges {
            std::string{"Larry"},
            "Moe",      // C style string
            std::string{"Curly"}
        };

        d = {2, 4, 6, 8, 10};

    --------------------------------------------------------------------------------------------


          std::deque<int> d{1,2,3};


          1 | 2 | 3

    front()         back()
    first element   last element

    --------------------------------------------------------------------------------------------

        d.push_back(4)


          1 | 2 | 3 | 4

    front()         back()
    first element   last element

    --------------------------------------------------------------------------------------------


        d.push_front(10)


        10 | 1 | 2 | 3 | 4

        front()         back()
        first element   last element    

    --------------------------------------------------------------------------------------------

        std::deque<int> d{1,2,3,4,5};

        std::cout << d.size();          // 5
        std::cout << d.max_size()       // a very large number
        
        std::cout << d.at(0);           // 1    <-- has bounce checking
        std::cout << d[1];              // 2    <-- han not bounce checking

        std::cout << d.front();         // 1
        std::cout << d.back();          // 5

    --------------------------------------------------------------------------------------------

        d.push_back(p1);            // add p1 top the back
        d.po_back();                // remove p1 from the back

        d.push_front(Person{"Larry", 18});
        d.pop_front();              // remove element from the fron

        d.emplace_back("Larry", 18);        // add to back efficient!!
        d.emplace_front("Moe", 24);         // add to front

    --------------------------------------------------------------------------------------------

        






*/