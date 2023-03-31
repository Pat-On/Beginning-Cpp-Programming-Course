/*

        70 Relational Operators

        >       greater than
        >=      greater than or equal to
        <       less than
        <=      less than or equal to
        <=>     three way comparision (c++ 20)

        a <=> b

        If a is equal to b, the result will be 0

        if a < b, the result will be negative

        if a > b, the result will be positive.


*/
#include <iostream>
#include <compare>

using namespace std;

int main()
{
    int num1{10}, num2{20};

    cout << boolalpha;

    cout << num1 << " > " << num2 << " : " << (num1 > num2) << endl;
    cout << num1 << " >= " << num2 << " : " << (num1 >= num2) << endl;
    cout << num1 << " < " << num2 << " : " << (num1 < num2) << endl;
    cout << num1 << " <= " << num2 << " : " << (num1 <= num2) << endl;

    return 0;
}