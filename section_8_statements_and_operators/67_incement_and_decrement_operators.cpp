/*
        67 Increment and decrement operators


    increment operator ++
    decrement operator --


    Increments or decrements its operand by 1
    can bve used with integers, floating point types and pointers

    prefix    ++num
    postfix     num ++

    Do not overuse this operator
    ALERT!! never use it twice for the same variable in the same statement - behaviour is not defined

    example undefined operator

    i++ + ++i
    ++i + i++
    etc
*/

#include <iostream>
using namespace std;

int main()
{
    int counter{10};
    int result{0};

    cout << "----------  2  ----------" << endl;
    // Example 2 - preincrement
    counter = 10;
    result = 0;

    cout << "Counter : " << counter << endl;

    result = ++counter; // Note the pre increment
    // counter - counter + 1
    // result = counter
    cout << "Counter : " << counter << endl;
    cout << "Result : " << result << endl;

    cout << "----------  3  ----------" << endl;

    counter = 10;
    result = 0;

    // Example 3 - post-increment
    counter = 10;
    result = 0;

    cout << "Counter : " << counter << endl;

    result = counter++; // Note the post increment
    // result = counter
    // counter = counter + 1
    cout << "Counter : " << counter << endl;
    cout << "Result : " << result << endl;

    cout << "----------  4  ----------" << endl;

    // Example 4
    counter = 10;
    result = 0;

    cout << "Counter : " << counter << endl;

    result = ++counter + 10; // Note the pre increment
    // counter = counter + 1
    // result = counter + 10

    cout << "Counter : " << counter << endl;
    cout << "Result : " << result << endl;

    cout << "----------  5  ----------" << endl;

    // Example 5
    counter = 10;
    result = 0;

    cout << "Counter : " << counter << endl;

    result = counter++ + 10; // Note the post increment
    // result = counter + 10
    // counter = counter + 1

    cout << "Counter : " << counter << endl;
    cout << "Result : " << result << endl;

    cout << endl;

    return 0;
}