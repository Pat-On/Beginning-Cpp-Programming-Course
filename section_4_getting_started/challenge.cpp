#include <iostream>

int main()
{
    int fav_num;

    std::cout << "Enter your favorite number between 1 and 100: ";

    std::cin >> fav_num;

    if (fav_num == 24)
    {
        std::cout << "Amazing!! that is my favorite number too" << std::endl;
    }
    else
    {
        std::cout << "Not Really!! 24 is my favorite number!";
    }
}