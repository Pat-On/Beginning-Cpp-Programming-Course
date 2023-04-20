/*

        Smart Pointers

    - Objects
    - Can only point to heap-allocated memory
    - automatically call delete when no longer needed
    - adhere to RAII principles

    - C++ Smart Pointers
        - unique pointers (unique_ptr)
        - shared pointers (shared_ptr)
        - weak pointers (weak_ptr)
        - auto pointers (auto_ptr) <--- Deprecated - we will not discuss

-------------------------------
wrapper classes that utilize the raw pointers


    #include <memory>

    - Defined by class templates
        - wrapper around a raw pointer
        - overloaded operators
            - Dereference (*)
            - member selection (->)
            pointer arithmetic not supported (++, --, etc)
        - can have custom deleters

-----------------------------------
    A simple example:

        {
            std::smart_pointer<Some_Class> ptr= . . .

            ptr->method();

            cout << (*ptr) << endl;
        }

        // ptr will be destroyed automatically when
        // no longer needed 

----------------------------------

    RAII - Resource Acquisition Is Initialization

        - common idiom or pattern used in software design based on container object lifetime

        - RAII objects are allocated on the stack

        - Resource Acquisition
            - open a file
            - allocate memory
            - acquire a lock

        - is initialization 
            - the resource is acquired in a constructor
        
        - resource relinquishing
            - happens in the destructor
                - close the file
                - deallocate the memory
                - release the lock

*/