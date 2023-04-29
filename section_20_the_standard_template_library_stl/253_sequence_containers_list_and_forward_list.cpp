/*

                    Sequence Containers - List and Forward List


    std::list and std::forward_list

    - sequence containers

    - non-contiguous in memory

    - no direct access to elements

    - very efficient for inserting and deleting elements once an element is found

    ---------------------------------------------------------------------------------------------

    std::list

    #include <list>

    - dynamic size
        - list of elements
        - list is bidirectional (doubly-linked)

    - direct element access is not provided

    - rapid insertion and deletion of elements anywhere in the container (constant time)

    - all iterators available and invalidate when corresponding element is deleted

    ---------------------------------------------------------------------------------------------


                            std::list<int> l {1, 2, 3};


                            1  <---->  2 <---->  3

                    front()                     back()
                    first element               last element

    ---------------------------------------------------------------------------------------------

        std::list<int> l {1, 2, 3, 4, 5};

        std::list<int> ll (10, 100);    // ten 100s <- overloaded constructor



        std::list<std::string> stooges
        {
            std::string{"Larry"},
            "Moe",
            std::string{"Curly"}
        }

        l = {2, 4, 6, 8, 10};

    ---------------------------------------------------------------------------------------------

        std::cout << l.size();      // 5
        std::cout << l.max_size();  // a very large number

        std::cout << l.front();     // 1
        std::cout << l.back();      // 5

        l.push_back(p1);            // add p1 to the back
        l.pop_back();               // remove p1 from the back

        l.push_front(Person{"Larry", 18});
        l.pop_front();              // remove element from the front

        l.emplace_back("Larry", 18);        // add to back efficient!!
        l.emplace_front("Moe", 24);         // add to front

    ---------------------------------------------------------------------------------------------
        std::list<int> l {1, 2, 3, 4, 5};

        auto it = std::find(l.begin(), l.end(), 3);

        l.insert(it, 10);           // 1,, 2, 10, 3, 4, 5

        l.erase(it)                 // erases the 3, : 1 2 10 4 5

        l.resize(2);                // 1 2

        l.resize(5)                 // 1 2 0 0 0

    ---------------------------------------------------------------------------------------------

        // traversing the list (bi-directional)

        std::list<int> l {1 , 2, 3, 4, 5};

        auto it = std::find(l.begin(), l.end(), 3);

        std::cout <<*it;        // 3

        it++
        std::cout << *it        // 4

        it--
        std::cout << *it        // 3

    ---------------------------------------------------------------------------------------------


        std::forward_list

        #include <forward_list>

        - Dynamic size
            - list of elements
            - list uni-directional (singly-linked)
            - less overhead than a std::list

        - direct element access is NOT provided

        - rapid insertion and deletion of elements anywhere in the container
            (constant time)

        - reverse iterators not available. Iterators invalidate when corresponding element is deleted

    ---------------------------------------------------------------------------------------------


            std::forward_list<int> l {1, 2, 3};


                1 ------> 2 ------> 3

            front()
            first element

    ---------------------------------------------------------------------------------------------


        std::forward_list - common methods

        std::forward_list<int> l {1, 2, 3, 4, 5};

        std::cout << l.size();          // not available
        std::cout << l.max_size();      // a very large number

        std::cout << l.front();         // 1
        std::cout << l.back();          // not available

    ---------------------------------------------------------------------------------------------

        l.push_front(p1);       // add p1 to the front
        l.pop_front();          // remove p1 from the front


        l.emplace_front("Moe", 24);         // add to front

    ---------------------------------------------------------------------------------------------

        auto it = std::find(;.begin(), l.end(), 3);

        l.insert_after(it, 10);         // 1 2 3 10 4 5
        l.emplace_after                 // 1 2 3 100 10 4 5

        l.erase_after(it);              // erases the 100, 1 2 3 10 4 5

        l.resize(2);                    // 1 2

        l.resize(5);                    // 1 2 0 0 0

    ---------------------------------------------------------------------------------------------

        Why forward_list has no size

        The rationale the designers used was, 

"Maintaining a count doubles the size of a forward_list object (one word for the list head and one for the count), and it slows down every operation that changes the number of nodes. In most cases this isn't a change in asymptotic complexity (the one change in asymptotic complexity is in one of the forms of splice), but it is nonzero overhead. It's a cost that all users would have to pay for, whether they need this feature or not, and, for users who care about maintaining a count, it's just as easy to maintain it outside the list, by incrementing the count with every insert and decrementing it with every erase, as it is to maintain the count within the list."
More detail can be found here for those that are interested:

http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2543.htm

The fact that std::forward_list does not have a size() method is sometimes seen in C++ technical interviews.
    
*/
