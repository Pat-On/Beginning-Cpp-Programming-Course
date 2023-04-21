/*

            Smart Pointers

    shared_ptr

    - Provides shared ownership of heap objects

    - shared_ptr<T>
        - points to an object of type T on the heap
        - it is not unique - there can many shared_ptrs pointing to the same object on the heap
        - establishes shared ownership relationship
        - can be assigned and copied
        - can be moved
        - does not support managing arrays by default
        - when the use count is zero the managed object on the heap is destroyed
                reference counting - when there is zero, so nothing is refer so destroy it

    -----------------------------------------------------------------------

        shared_ptr - creating, initializing and using

        {
            std::shared_ptr<int> p1 {new int {100} };

            std::cout << *p1 << std::endl;          // 100

            *p1 = 200;

            std::cout << *p1 << std::endl;          // 200


        } // automatically destroyed


    ----------------------------------------------------------------------

    shared_ptr - some other useful methods

    {
        // use_count - the number of shared_ptr objects managing the heap object
        std::shared_ptr<int> p1 {new int {100}};
        std::cout << p1.use_count() << std::endl;   // 1

        std::shared_ptr<int> p2 {p1};               // shared ownership
        std::cout << p1.use_count() << std::endl;   // 2

        p1.reset();                                 // decrement the use_count; p1 is nulled out
        std::cout << p1.use_count() << std::endl;   // 0
        std::cout << p2.use_count() << std::endl;   // 1

    }        // automatically deleted

    ----------------------------------------------------------------------
    shared_ptr - user defined classes

    {
        std::shared_ptr<Account> p1 {new Account {"Larry"}};
        std::cout << *p1 << std::endl;          // display account

        p1->deposit(1000);
        p1->withdraw(500);

    } // automatically deleted

    ----------------------------------------------------------------------
    shared_ptr - vectors and move
    {
        std::vector<std::shared_ptr<int> vec;

        std::shared_ptr<int> ptr { new int {100}};

        vec.push_back(ptr);     // ok - copy is allowed

        std::cout << ptr.use_count() std::endl;     // 2
    } // automatically deleted - last one that refer to the shared_ptr is going to destroy it

    ----------------------------------------------------------------------
    shared_ptr - make_shared(C++11)

    {
        std::shared_ptr<int> p1 = std::make_shared<int>(100);       // use_count: 1
        std::shared_ptr<int> p2 { p1 };                             // use_count: 2
        std::shared_ptr<int> p3;

        p3 = p1;                                                    // use_count: 3
    } // automatically deleted

    - use std::make_shared - it is more efficient! <-- compiler is going to create more robust compile 
    - all 3 pointers point to the same object on the heap!
    - when the use_count becomes 0 the heap object is DEALLOCATED

    ----------------------------------------------------------------------




*/