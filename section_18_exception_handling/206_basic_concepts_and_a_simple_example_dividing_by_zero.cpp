/*

        Basic Concepts and a Simple Example:
            Dividing by Zero

    Basic Concepts
    - Exception handling
        - dealing with extraordinary situations
        - indicated that an extraordinary situation has beed detected or has occurred
        - program can deal with the extraordinary situations in a suitable manner


        from lecture:
            -  should be use only in synchronous code (?)

    - What causes exceptions?
        - insufficient resources
        - missing resources
        - invalid operations
        - range violations
        - underflows and overflows
        - illegal data and many others

    - exception safe
        - when your code handles exceptions

-----------------------------------------------------------------------------------------------

        Terminology

    - exception
        - an object or primitive type that signals that an error has occurred

    - throwing an exception (raising an exception)
        - your code detects that an error has occurred or will occur
        - the place where the error occurred may not know how to handle error
        - code can throw an exception describing the error to another part of the program that knows how to handle the error

    - catching an exception (handle the exception)
        - code that handles the exception
        - may or may not cause the program to terminate

-----------------------------------------------------------------------------------------------

    C++ Syntax

    - throw
        - throws an exception
        - followed by an argument

    - try {code that may throw an exception }
        - you place code that may throw an exception in a try block
        - if the code throws an exception the try block is exited
        - the thrown exception is handled by a catch handler
        - if njo catch handler exists the program terminates

    - catch (Exception ex) { code to handle exception }
        - code that handles the exception
        - can have multiple catch handlers
        - may or may not cause the program to terminate

-----------------------------------------------------------------------------------------------

    divide by zero example

        - what happens if total is zero?
             - crash, overflow?\
             it depends

            double average {};
            average = sum / total;


        solution - silly :>
            double average {};
            if (total == 0)
                // what to do?
            else
                average = sum / total

-----------------------------------------------------------------------------------------------

        double average {};
        try{
            if (total == 0)
                throw 0;
            average = sum / total;
            // use average here
        }
        catch int(&ex) {
            std::cerr << "can not divide by zero" << std::endl;
        }

        std::cout << "Program continues" << std::endl;


-----------------------------------------------------------------------------------------------

*/

// Section 18
// Miles per Gallon - Function
#include <iostream>

double calculate_mpg(int miles, int gallons)
{
    if (gallons == 0)
        throw 0;
    return static_cast<double>(miles) / gallons;
}

int main()
{
    int miles{};
    int gallons{};
    double miles_per_gallon{};

    std::cout << "Enter the miles: ";
    std::cin >> miles;
    std::cout << "Enter the gallons: ";
    std::cin >> gallons;

    try
    {
        miles_per_gallon = calculate_mpg(miles, gallons);
        std::cout << "Result: " << miles_per_gallon << std::endl;
    }
    catch (int &ex)
    {
        std::cerr << "Tried to divide by zero" << std::endl;
    }

    // Playground
    // miles_per_gallon = miles / gallons; // result crash :>
    // miles_per_gallon = static_cast<double>(miles) / gallons; // result: inf
    // std::cout << "Result: " << miles_per_gallon << std::endl;

    std::cout << "Bye" << std::endl;

    return 0;
}
