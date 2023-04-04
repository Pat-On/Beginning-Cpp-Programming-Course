/*

        What is a function?

    - C++ programs
        - C++ Standard Libraries (functions and classes)
        - Third-party libraries (functions and classes)
        - out own functions and classes

    - Functions allow the modularization of a program
        - separate code into logical self-contained units
        - these units can be reused

    -----------------------------------------

    Boss/Worker analogy

    - write your code to the function specification
    - understand what the function does
    - understand what information the function needs
    - understand what the function returns
    - understand any errors the function may produce
    - understand any performance constraints

    - Do not worry about HOW the function works internally
        - unless you are the one writing the function!

    -----------------------------------------

    example: <cmath>

        - common mathematical calculations
        - global functions called as:

            function_name(argument);
            function_name(argument1, argument2, ..);

            cout << sqrt(400.0) << endl; // 20.0
            double result;
            result = pow (2.0, 3.0)     // 2.0 ^3.0

    ----------------------------------------


    User-defined functions
        - we can define our own functions
        example:


        int add_numbers(int a, int b)
        {
            return a + b;
        }


        cout << add_numbers(20, 40);
*/