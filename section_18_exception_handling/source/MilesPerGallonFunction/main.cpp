// Section 18
// Miles per Gallon - Function
#include <iostream>

double calculate_mpg(int miles, int gallons)
{ // throwing errors in function C++
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
        miles_per_gallon = calculate_mpg(miles, gallons);         // <--- call
        std::cout << "Result: " << miles_per_gallon << std::endl; // throw int
    }
    catch (int &ex) // catch reference
    {
        std::cerr << "Tried to divide by zero" << std::endl;
        std::cerr << "REFERENCE: " << &ex << std::endl;
        std::cerr << "VALUE: " << ex << std::endl;
    }
    std::cout << "Bye" << std::endl;

    return 0;
}
