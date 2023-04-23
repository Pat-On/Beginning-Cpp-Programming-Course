/*

             Stream Manipulators - floating point


        Default when displaying floating point values is:
            - setprecision - number of digits displayed(6)
            - fixed - not fixed to a specific number of digits after the decimal point
            - noshowpoint - trailing zeroes are not displayed
            - nouppercase - when displaying in scientific notation
            - noshowpos - - no + displayed for positive numbers

        - these manipulators affect all further output to the stream

------------------------------------------------------------------------------------------

        Formatting floating point - precision

            double num {1234.5678};

            std::cout << num << std::endl;

            // will display

            1234/57 // notice precision is 6 and rounding

------------------------------------------------------------------------------------------

        double num {123456789.987654321};
        std::cout << num << std::endl;

        // will display

        1.2345667e+008      // notice precision is 6 <---- scientific notation


------------------------------------------------------------------------------------------

        double num {123456789.987654321};

        std::cout << std:setprecision(9);
        std::cout << num << std::endl;

        // will display

        1234567890 // not that rounding occurs

------------------------------------------------------------------------------------------

        double num {123456789.987654321};

        std::cout << std::fixed;        /// after decimal- exactly 6 digits and zeros are added if needed
        std::cout << num << std::endl

        // will display precision 6 from the decimal

        123456789.987643

------------------------------------------------------------------------------------------

            double num {123456789.987654321};

            std::cout << std::setprecision(3) << std::fixed;
            std::cout << num << std::endl;

            // will display precision 3 from the decimal

            123456789.988


------------------------------------------------------------------------------------------

        scientific notation


        double num {123456789.987654321};

        std::cout << std::setprecision(3)
                    << std::scientific;

        std::cout << num << std::endl;

        // will display precision 3

        1.23e+008

------------------------------------------------------------------------------------------

    formatting floating points types - scientific uppercase

        double num {123456789.987654321};

        std::cout << std::setprecision(3)
                    << std::scientific
                    << std::uppercase;

        std::cout << num << std::endl;

        // will display precision 3

        1.23E+008

------------------------------------------------------------------------------------------

    double num {123456789.987654321};

    std::cout << std::setprecision(3)
                << fixed
                << std::showpos
    std::cout << num << std::endl;

    // will display

    +123456789.988  // note the leading "+"


------------------------------------------------------------------------------------------

    double num {12.34};

    std::cout << num << std::endl       // 12.34 <-- note no t5railing zeroes (default)
    std::cout << std:showpoint;
    std::cout << num << std::endl;      // 12.3400 <--- note trailing zeroes up to precision

------------------------------------------------------------------------------------------

                RETURNING TO GENERAL SETTINGS

    - unsetf
        std::cout.unsetf(std::ios::scientific | std::ios:fixed);

    or

        std::cout << std::resetiosflags(std::ios::floatfield);

    - refer to the docs for other set/reset flags

------------------------------------------------------------------------------------------



*/

// Section 19
// Stream manipulators - Floating point manipulators
// scientific, setprecision, fixed, showpoint, showpos, uppercase
#include <iostream>
#include <iomanip>

int main()
{
    double num1{123456789.987654321};
    double num2{1234.5678};
    double num3{1234.0};

    // using default settings
    std::cout << "--Defaults ----------------------------" << std::endl;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;

    // Note how since we can't display in precision 2 scientific notation is used
    std::cout << std::setprecision(2);
    std::cout << "--Precision 2----------------------------" << std::endl;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;

    // Using precision 5
    std::cout << std::setprecision(5);
    std::cout << "--Precision 5----------------------------" << std::endl;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;

    // Using precision 9
    std::cout << std::setprecision(9);
    std::cout << "--Precision 9----------------------------" << std::endl;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;

    // Using precision 3 and fixed
    std::cout << std::setprecision(3) << std::fixed;
    std::cout << "--Precision 3 - fixed ----------------------------" << std::endl;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;

    // Using precision  3, fixed and scientific notation
    // Note precision is after the decimal
    std::cout << std::setprecision(3) << std::scientific;
    std::cout << "--Precision 3 - scientific  ----------------------------" << std::endl;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;

    // Same but display capital 'E' in scientific
    std::cout << std::setprecision(3) << std::scientific << std::uppercase;
    std::cout << "--Precision 3 - scientific - uppercase  ----------------------------" << std::endl;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;

    // Show '+' symbol for positive numbers
    std::cout << std::setprecision(3) << std::fixed << std::showpos;
    std::cout << "--Precision 3 - fixed - showpos ----------------------------" << std::endl;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;

    // Back to defaults
    std::cout.unsetf(std::ios::scientific | std::ios::fixed);
    std::cout << std::resetiosflags(std::ios::showpos);

    // Show trailing zeroes up to precision 10

    std::cout << std::setprecision(10) << std::showpoint;
    std::cout << "-- precision 10 - showpoint ----------------------------" << std::endl;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;

    // Back to defaults
    std::cout.unsetf(std::ios::scientific | std::ios::fixed);
    std::cout << std::setprecision(6);
    std::cout << std::resetiosflags(std::ios::showpos);
    std::cout << std::resetiosflags(std::ios::showpoint);

    std::cout << "--Back to defaults----------------------------" << std::endl;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;

    return 0;
}
