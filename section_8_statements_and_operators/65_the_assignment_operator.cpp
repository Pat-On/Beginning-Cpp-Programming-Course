/*

            65 Assignment Operator

        lhs = rhs

- rhs is an expression that is evaluated to a value
- the value os the rhs is stored to the lhs

- the value of the rhs must be type compatible with the lhs
- the lhs must be assignable

- assignment expression is evaluated to whaT WAS JUST ASSIGNED
- more than one variable can be assigned in a single statement

*/

#include <iostream>

using namespace std;

int main()
{

    int num1{10}; // initialization
    int num2{20}; // initialization

    num1 = num2 = 1000000; // assignment from right to left

    cout << "num1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;

    return 0;
}
