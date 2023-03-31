// Section 8
// 66 Arithmetic operators

/*

+ addition
- substraction
* multiplication
/ division
% modulo or remainder (works only with integers) <- interesting

+, -, *, / operators are overloaded to work with multiple types such as int, double, etc
% only for integers

*/

#include <iostream>

using namespace std;

int main()
{

    int num1{200};
    int num2{100};

    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;

    int result;
    result = num1 / num2;
    cout << num1 << " / " << num2 << " = " << result << endl;

    result = num2 / num1; // integer division = 0
    cout << num2 << " / " << num1 << " = " << result << endl;

    result = num1 % num2;
    cout << num1 << " % " << num2 << " = " << result << endl;

    result = num2 % num1; // integer division = 0
    cout << num2 << " % " << num1 << " = " << result << endl;

    // -----------------------
    cout << "------------------------------" << endl;

    const double USD_PER_EURO{1.19};

    double euros{0.0};
    double dollars{0.0};

    cin >> euros;

    dollars = euros * USD_PER_EURO;
    cout << euros << "equivalent to " << dollars << endl;
}