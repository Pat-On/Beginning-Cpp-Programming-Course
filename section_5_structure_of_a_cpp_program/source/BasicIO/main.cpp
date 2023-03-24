// Section 5
// Basic I/O using cin and cout

#include <iostream>

using namespace std;

int main()
{

    // cout << "Hello world!";

    //    cout << "Hello";
    //    cout << "World" << endl;

    // cout << "Hello world!" << endl;
    // cout << "Hello"
    //      << " world!" << endl;
    // cout << "Hello"
    //      << " world!\n";
    // cout << "Hello\nOut\nThere\n";

    int num1;
    int num2;
    double num3;

    //    cout <<  "Enter an integer: ";
    //    cin >> num1;
    //    cout << "You entered: " << num1 << endl;

    //    cout << "Enter a first integer: ";
    //    cin >> num1;
    //
    //    cout << "Enter a second integer: ";
    //    cin >> num2;
    //
    //    cout << "You entered " << num1 << " and " << num2 << endl;

    //    cout << "Enter 2 integers separated with a space: ";
    //    cin >> num1 >> num2;
    //    cout << "You entered " << num1 << " and " << num2 << endl;

    //    cout << "Enter a double: ";
    //    cin >> num3;
    //
    //    cout << "You entered : " << num3 << endl;

    // input 10.5 - num1 = 10, num2 = 0.5
    // input Frank - num1 = 0, double = undefined crazy number
    // because when it tried to read integer and got string it went into error state
    // and everything after it is not reliable at all after it.

    cout << "Enter an integer: ";
    cin >> num1;

    cout << "Enter a double: ";
    cin >> num3;

    cout << "The integer is: " << num1 << endl;
    cout << "And the double is " << num3 << endl;

    return 0;
}