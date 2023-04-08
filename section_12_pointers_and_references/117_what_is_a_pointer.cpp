/*

                    What is a pointer?

    - a variable
        - whose value is an address
    - what can be at that address?
        - another variable
        - a function
    - pointers point to variables or functions?
    - if x is an integer variable and its value is 10 the I can declare a pointer that points to it
    - to use the data that the pointer is pointing to you must know its type

    ------------------------------------------------------------------------------------------------------

                    Why use Pointers?

    Can not just use the variable or function itself?

    Yes, but not always

    - inside functions, pointers can be used to access data that are defined outside the function.
        Those variables may not be in scope so you can not access them by their name

    - pointers can be used to operate on arrays very efficiently

    - we can allocate memory dynamically on the heap or free store.
        - this memory does not even have a variable name.
        - the only way to get to it is via pointer

    - with OO. pointers are how polymorphism works!

    - can access specific addresses in memory
        - useful in embedded and systems applications


*/