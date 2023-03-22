#include <iostream>

int main()
{
    int fav_num; // identifier fav_num is created by programer

    std::cout << "Enter your favorite number between 1 and 100: "; // insertion operator << output

    std::cin >> fav_num; // extraction operator >>

    if (fav_num == 24)
    {
        // :: scope resolution operator
        std::cout << "Amazing!! that is my favorite number too" << std::endl;
    }
    else
    {
        std::cout << "Not Really!! 24 is my favorite number!";
    }
    return 0;
}