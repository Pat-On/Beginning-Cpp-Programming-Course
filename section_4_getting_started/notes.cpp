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
*/