// 25 Section Overview

/*
    Our first program
    - Building
    - Running
    - Errors
    - Warnings
*/

/*
    29. What are Compiler Errors?

    Programming languages have rules

    Syntax errors - something wrong with the structure
    std::cout << "Errors << std::endl;

    Semantic errors - something wrong with the meaning

    a + b;

    When it does not make sense to add a and b


        .\compileErrors.cpp:5:18: warning: missing terminating " character
            5 |     std::cout << "Hello world << std::endl;
            |                  ^
        .\compileErrors.cpp:5:18: error: missing terminating " character
            5 |     std::cout << "Hello world << std::endl;
            |                  ^~~~~~~~~~~~~~~~~~~~~~~~~~
        .\compileErrors.cpp: In function 'int main()':
        .\compileErrors.cpp:6:9: error: expected primary-expression before 'return'
            6 |         return 0;

-----------------

        .\compileErrors.cpp: In function 'int main()':
        .\compileErrors.cpp:5:40: error: 'endll' is not a member of 'std'; did you mean 'endl'?
            5 |     std::cout << "Hello world" << std::endll;
            |                                        ^~~~~
            |                                        endl


-----------------

30 What are Compile Warnings

    Do not ignore them!
    
        - The Compiler has recognized an issue with your code that could lead to potential problem
        - It is only a warning because the compiler is still able to generate correct machine code

    int miles_driven;
        std::cout << miles_driven;

    warning: 'miles_driven' is used uninitialized...


31 What are linker errors

    - The linker is having trouble linking all the objects files together to create an executable
    - usually there is a library or object file that is missing


32 What are runtime errors

    -Errors that occur when the program is executing
    - some typical runtime errors
        - divide by zero
        - filer not found
        - out of memory
    - can cause your program to crash
    - exception handling can help deal with runtime errors

33 Logic Errors

    - Errors or bugs in your code that cause your program to run incorrectly
    - logic errors are mistakes made by the programmer

    suppose we have a program that determines if a person can vote in an election and you must be 18 years or older to vode

    if (age >18) {
        std::cout << "Yes, you can vote!";
    }


*/