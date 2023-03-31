/*
    Mixed Type Expressions

- C++ operations occur on same type operands
- if operands are of different types, c++ will convert one
- important! since it could affect calculation results
- C++ will attempt to automatically converts types (coercion)
    if it can not a compiler error will occur

--------------------------

        mixed type expressions

Conversions
- higher vs lower types are based on the size of the values the type can hold
    - long double, double, float, unsigned long, long, unsigned int, int
    - short and char types are always converted tyo int

- type coercion: conversion of one operand to another data type

- promotion: conversion to a higher type
    - used in mathematical expressions

- demotion: conversion to a lower type
    - used with assignment to lower type

---------------------

    Examples


lower op higher         the lower is promoted to a higher
    2 * 5.2
    2 is promoted to 2.0


lower = higher;         the higher is demoted to a lower
    int num {0};
    num = 100.2;

----------------------------------
    Explicit Type Casting - static_cast<type>


    int total_amount {100};
    int total_number {8};
    double average {0.0};

    average = total_amount / total_number;
    cout << average << endl;                // displays 12

    average = static_cast<double>(total_amount) / total_number;
    cout << average << endl;                // displays 12.5

*/

#include <iostream>

using namespace std;

int main()
{
    int total{};
    int num1{}, num2{}, num3{}; // all initialized to zero
    const int COUNT{3};
    // -----------------------------
    cout << "Enter 3 integers separated by spaces: ";
    cin >> num1 >> num2 >> num3;

    total = num1 + num2 + num3;

    double average{0.0};
    double averageCasting{0.0};

    averageCasting = static_cast<double>(total) / COUNT; // converting to double - so double division
    // averageCasting = (double)total/count;  Old-Style - th
    average = total / COUNT;

    cout << "The 3 numbers were: " << num1 << "," << num2 << "," << num3 << endl;
    cout << "The sum of the numbers is: " << total << endl;
    cout << "The averageCasting of the numbers is: " << averageCasting << endl;
    cout << "The average of the numbers is: " << average << endl;
    // ------------------------

    cout << endl;
    return 0;

    /*
    Enter 3 integers separated by spaces: 10 20 20
    The 3 numbers were: 10,20,20
    The sum of the numbers is: 50
    The averageCasting of the numbers is: 16.6667
    The average of the numbers is: 16
    */
}