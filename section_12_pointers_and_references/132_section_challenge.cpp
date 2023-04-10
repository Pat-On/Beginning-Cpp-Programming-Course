#include <iostream>

using namespace std;

// Function prototypes
int *apply_all(const int *const arr1, size_t size1, const int *const arr2, size_t size2);
void print(const int *const array, size_t size);

/*******************************************************************
This function expects:
    arr1 - a pointer to an array of integers
    size1 - the number of integers in arr1
    arr2 - a pointer to another array of integers
    size2 - the number of integers in arr2

    The function dynamically allocates a new array that is of size = size1 * size2
    Then it loops through each element of arr2 and multiples it across all the
    elements of arr1 and each product is stored in the newly created array
********************************************************************/
int *apply_all(const int *const arr1, size_t size1, const int *const arr2, size_t size2) // 2 x double const
{
    int *new_array{}; // new 3rd array

    new_array = new int[size1 * size2]; // length of arr

    int position{0};
    for (size_t i{0}; i < size2; ++i)
    {
        for (size_t j{0}; j < size1; ++j)
        {
            // new_array[position] = arr1[j] * arr2[i]; // pointer subscription notation
            *(new_array + position) = *(arr1 + j) * *(arr2 + i); // pointer offset notation
            // ++position;
            position++;
        }
    }
    return new_array;
}
/*******************************************************************
This function expects:
    arr - a pointer to an array of integers
    size - the number of integers in arr

    The function loops through arr and displays all the integers
    in the array
********************************************************************/
void print(const int *const arr, size_t size) // double const point and cost variable
{
    cout << "[ ";
    for (size_t i{0}; i < size; ++i)
        cout << arr[i] << " "; //. pointer subscript notation - you can replace it with pointer offset notation (arr + i)
    cout << "]";
    cout << endl;
}

int main()
{
    const size_t array1_size{5};
    const size_t array2_size{3};

    int array1[]{1, 2, 3, 4, 5};
    int array2[]{10, 20, 30};

    cout << "Array 1: ";
    print(array1, array1_size);

    cout << "Array 2: ";
    print(array2, array2_size);

    int *results = apply_all(array1, array1_size, array2, array2_size);
    /*
    constexpr allow the compiler to determine the value of an expression.
    That's very efficient since the value will not have to be evaluated at runtime.
    constexpr can get pretty complex and can even evaluate results of some functions at compile time,
    so these function calls can be totally eliminated at runtime.
    */
    constexpr size_t results_size{array1_size * array2_size};

    cout << "Result: ";
    print(results, results_size);

    delete[] results; // remember to release the resources! always!
    cout << endl;
    return 0;
}