/*


            Stream Manipulators - Integers


    Formatting integers types

    Default when displaying integer values is:
        - dec (base 10)
        - noshowbase - prefix used to show hexadecimal or octal
        - nouppercase - when displaying a prefix and hex values it will be lower case
        - noshowpos - no "+" displayed for positive numbers

    - these manipulators affect al further output to the stream

    ------------------------------------------------

    formatting integer types - setting base

        int num {255};


        std::cout << std::dec << num << std::endl;
        std::cout << std::hex << num << std::endl;
        std::cout << std::oct << num << std::endl;


        // Will display

        255
        ff
        377

    ------------------------------------------------

        int num {255};

        std::cout << std::showbase; // std::noshowbase

        std::cout << std::dec << num << std::endl;
        std::cout << std::hex << num << std::endl;
        std::cout << std::oct << num << std::endl;


        // Will display

        255
        0xff            // note the 0x prefix for hexadecimal
        0377            // note the 0 prefix for octal

    ------------------------------------------------

    Formatting integer types - display hex in uppercase

    int num {255};

    std::cout << std::showbase << std::uppercase;
    std::cout << std::hex << num << std::endl;

    // will display

    0XFF        // note capitalized 7XFF



    ------------------------------------------------

    Formatting integer types - displaying the positive sign

        int num1 {255};
        int num2 {-255};


        std::cout << num1 << std::endl; // 255
        std::cout << num2 << std::endl; // -255

        std::cout << std::showpos;      // std::noshowpos

        std::cout << num1 << std::endl; // +255
        std::cout << num2 << std::endl; // -255


    ---------------------------------------------------------

    Setting/resetting integer types

    - set using setf
        std::cout.setf(std::ios::showbase);
        std::cout.setf(std::ios::uppercase);
        std::cout.setf(std::ios::showpos);

    - reset to defaults
        std::cout << std::resetiosflags(std::ios::basefield);
        std::cout << std::resetiosflags(std::ios::showbase);
        std::cout << std::resetiosflags(std::ios::showpos);
        std::cout << std::resetiosflags(std::ios::uppercase);

    ---------------------------------------------------------



*/
#include <iostream>
#include <iomanip> // Must include for manipulators

int main()
{
    int num{255};

    std::cout << std::dec << num << std::endl;
    std::cout << std::hex << num << std::endl;
    std::cout << std::oct << num << std::endl;

    // /---------

    int num1{255};
    int num2{-255};

    std::cout << num1 << std::endl; // 255
    std::cout << num2 << std::endl; // -255

    std::cout << std::showpos; // std::noshowpos

    std::cout << num1 << std::endl; // +255
    std::cout << num2 << std::endl; // -255
}