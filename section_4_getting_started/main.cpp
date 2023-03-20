#include <iostream>

int main()
{
    int favorite_number;

    // << it is insertion operator
    std::cout << "Enter Your favorite number between 1 - 100: ";

    // >> extraction operator
    std::cin >> favorite_number;

    std::cout << "Amazing!! That is my favorite number too!" << std::endl;
    std::cout << favorite_number << std::endl;

    // C++ main function return when everything is ok
    return 0;
}