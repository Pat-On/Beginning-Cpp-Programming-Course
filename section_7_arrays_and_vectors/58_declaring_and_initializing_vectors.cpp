/*

    58 Declaring and Initializing Vectors

    Vectors

    - suppose we want to store test scores for my school
    - i have no way of knowing how many students will register next year
    - options:
        - pick a size that you are not likely to exceed and use static arrays
        - use a dynamic array such a vector

    -----------------------------

    What is a vector?

        - container in the C++ Standard Template Library

        - an array that can grow and shrink in size at execution time

        - provides similar semantics and syntax as arrays

        - very efficient

        - can provide bounds checking

        - can user lots of cool functions like sort, reverse, find and more

    ----------------
    declaring                                   <------------ vectors are objects

        #include <vector>
        using namespace std;

        vector <char> vowels;

        vector <int> test_scores;

        Construction initialization syntax
            vector <char> vowels (5);
            vector <int> test_scores (10);

        vector <char> vowels {'a', 'b', 'c'};
        vector <int> test_scores {100, 98, 89, 10};
        vector <double> hi_temperatures (365, 80.0);  <---first number initial size, all 365 will be equal 80.0


    -------------------------------------------
    characteristics
        - dynamic size
        - elements are all the same type
        - stored contigously in memory
        - individual elements can be accessed by thei position or index

        - first element is at index 0
        - last element is at index size - 1

        - [] - no checking to see if you are out of bounds
        - provides many useful function that do bounds check

        - elements initialized to zero
        - very efficient
        - iteration (looping) is often used to process

        


*/