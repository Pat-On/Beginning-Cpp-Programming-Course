/*

            Passing pointers to a function

    - pass-by-reference with pointer parameters
    - we can use pointers and the dereference operator to achieve pass-by-reference
    - the function parameter is a pointer
    - the actual parameter can be a pointer or address of a variable

    -------------------------------------------------------------------------------------

    - pass by reference with pointers - defining the function

        void double_data(int *int_ptr);

        void double_data(int *int_ptr){
            *int_ptr *= 2;
            *int_ptr = *int_ptr * 2; // we are basically dereferencing the value and multiply it
        }


    ------------------------------------------------------------------------

        pass-by-reference with pointers - calling the function

        int main() {
            int value {10};

            cout << value << endl; // 10

            double_data(&value);

            cout << value << endl; // 20
        }


*/

#include <iostream>

using namespace std;

void double_data(int *int_ptr)
{
    *int_ptr *= 2;
}

int main()
{
    int value{10};
    int *int_ptr{nullptr};

    cout << "Value: " << value << endl;
    double_data(&value);
    cout << "Value: " << value << endl;

    cout << "-----------------------------" << endl;
    int_ptr = &value;
    double_data(int_ptr);
    cout << "Value: " << value << endl;

    cout << endl;
    return 0;
}