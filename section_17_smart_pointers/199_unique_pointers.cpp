/*

    unique_ptr

    - simple smart pointer - very efficient

    unique_ptr<T>
        - points to an object of type T on the heap
        - it is unique - there can only be one unique_ptr<T> pointing to the object on the heap
        - owns what it points to
        - cannot be assigned or copied
        - Can be moved
        - when the pointer is destroyed, what it points to is automatically destroyed

    -------------------------------------------------------

    unique_ptr - creating, initializing and using

        {
            std::unique_ptr<int> p1 { new int {100} };

            std::cout << *p1 << std::endl;      // 100

            *p1 = 200;

            std::cout << *p1 << std::endl;      // 200


        } // automatically deleted


    --------------------------------------------------------

    unique_ptr - some other useful methods

        {
            std::unique_ptr<int> p1 { new int { 100} };

            std::cout << p1.get() << std::endl;         // 0x564388

            p1.reset();     // p1 is now nullptr

            if (p1) // will not execute because we reset it so it is now falsy

                std::cout << *p1 << std::endl;          // won't execute
        }   // automatically deleted


    -------------------------------------------------------------

    unique_ptr - user defined classes

    {
        std::unique_ptr<Account> p1 {new Account{"Larry"} };
        std::cout << *p1 << std::endl;      // display account

        p1->deposit(1000);
        p1->withdraw(500); 
    }   // automatically deleted

    --------------------------------------------------------------

    unique_ptr - vectors and move

    {
        std::vector<std::unique_ptr<int>> vec;

        std::unique_ptr<int> ptr {new int{100}};

        vec.push_back(ptr);     // error - copy not allowed

        vec.push_back(std::move(ptr));
    }   // automatically deleted

    -------------------------------------------------------------

    unique_ptr - make_unique (C++14)

    {
        std::unique_ptr<int> p1 = make_unique<int>(100);

        std::unique_ptr<Account> p2 = make_unique<Account>("Curly", 5000);

        auto p3 = make_unique<Player>("Hero", 100, 100);
        
    }   // Automatically deleted


    // More efficient - no calls to new or delete 




*/