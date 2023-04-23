/*

        Creating User-Defined Exception Classes


    User-defined exceptions

    We can create exception classes and throw instances of those classes

    best practice
        - throw an object not a primitive type
        - throw an object by value
        - catch an object by reference (or const reference )



    Creating exception classes

    class DivideByZeroException {

    }

    class NegativeValueException {

    }


    Throwing user-defined exception classes

    double calculate_mpg(int miles, int gallons) {
        if (gallons == 0)
            throw DivideByZeroException();
        if (miles < 0 || gallons < 0 )
            throw NegativeValueException();

        return static_cast<double>(miles) / gallons;
    }


    ------------------------------------------------------------------

    Catching user-defined exceptions

    try {
        miles_per_gallon = calculate_mpg(miles, gallons);
        std::cout << miles_per_gallon << std::endl;
    }
    catch (const DivideByZeroException &ex) {
        std::cerr << "You can not divide by zero" << std::endl;
    }
    catch (const NegativeValueException &ex) {
        std::cerr << "Negative values are not allowed" << std::endl;
    }

    std::cout << "Bye" << std::endl;


`   ------------------------------------------------------------------

*/

// Section 18
// Miles per Gallon - Function - Exception Classes
#include <iostream>

// so catch by class ^^
class DivideByZeroException
{
};
class NegativeValueException
{
};

double calculate_mpg(int miles, int gallons)
{
    if (gallons == 0)
        throw DivideByZeroException();
    else if (miles < 0 || gallons < 0)
        throw NegativeValueException();
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
    catch (const DivideByZeroException &ex)
    {
        std::cerr << "Sorry, you can't divide by zero" << std::endl;
    }
    catch (const NegativeValueException &ex)
    {
        std::cerr << "Sorry, one of your parameters is negative" << std::endl;
    }
    std::cout << "Bye" << std::endl;

    return 0;
}
