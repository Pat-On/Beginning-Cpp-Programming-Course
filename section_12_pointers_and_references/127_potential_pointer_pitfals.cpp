/*

                Potential Pointers Pitfalls

    - Uninitialized pointers
    - dangling pointers
    - not checking if new failed to allocate memory
    - leaking memory


    --------------------------------------------------------------------
    UNINITIALIZED POINTERS

        int *int_ptr;   // pointing anywhere

        . . .

        *int_ptr = 100; // Hopefully a crash

    --------------------------------------------------------------------
    DANGLING POINTER

        - pointer that is pointing to released memory
            - for example, 2 pointers point to the same data
            - 1 pointer releases the data with delete
            - the other pointer accesses the release data

        - pointer that points to memory that is invalid
            - we saw this when we returned a pointer to a function local variable

    --------------------------------------------------------------------
    NOT CHECKING IF NEW FAILED

        - if new fails an exception is thrown
        - we can use exception handling to catch exceptions
        - dereferencing a null pointer will cause your program to crash 

    --------------------------------------------------------------------
    LEAKING MEMORY

        - Forgetting to release allocated memory with delete
        - if you lose your pointer to the storage allocated on the heap you have not way to get to that storage again
        - the memory is orphaned or leaked
        - one of the most common pointer problems
        


*/