// Section 19
// stringstreams
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <limits>

int main()
{
    int num{};
    double total{};
    std::string name{};

    std::string info{"Moe 100 1234.5"};
    std::istringstream iss{info};

    iss >> name >> num >> total;
    std::cout << std::setw(10) << std::left << name
              << std::setw(5) << num
              << std::setw(10) << total << std::endl;

    std::cout << "\n---------------------------------------" << std::endl;

    // string stream
    std::ostringstream oss{};

    // outputting to the string stream
    oss << std::setw(10) << std::left << name
        << std::setw(5) << num
        << std::setw(10) << total << std::endl;
    // reading from the string stream oss.str()
    std::cout << oss.str() << std::endl;

    std::cout << "\n--- Data validation ------------------------------------" << std::endl;

    int value{};
    std::string entry{};
    bool done = false;
    do
    {
        std::cout << "Please enter an integer: ";
        std::cin >> entry;
        // input string stream
        std::istringstream validator{entry};

        // he is trying to extract value if value is not int it will bne impossible
        if (validator >> value)
            done = true;
        else
            std::cout << "Sorry, that's not an integer" << std::endl;
        std::cout << validator.str() << std::endl;
        // discards the input buffer
        // in case 12.38
        // it would extract 12 and left .38
        // and it would staid there
        // so we are cleaning it basically
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // nice!
    } while (!done);

    std::cout << "You entered the integer: " << value << std::endl;

    std::cout << std::endl;
    return 0;
}
