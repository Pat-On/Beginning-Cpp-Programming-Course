/*

        56 Accessing and Modifying Array Elements


Accessing array elements

        array_name [element_index]

            test_scores [1];

    int test_scores [5] {100, 95, 99, 87, 88};

    count << "First score at index 0:" << test_scores[0] << endl;

Changing the contents of array elements

        array_name [element_index]

    int test_scores [5] {100, 95, 99, 87, 88};

    cin >> test_scores[0];

    test_scores[0] = 90;

------------------------------------------------------------------------

        How does it work?
            - The name of the array represent the location of the first element in the array (index 0)

            - the [index] represents the offset from the beginning of the array

            - C++ simply performs a calculation  to find the correct element

            - remember - no bounds checking! - it is your responsibility

*/

#include <iostream>

using namespace std;

int main()
{
    char vowels[]{'a', 'i', 'u', 'e'};

    cout << "\nThe first vowel is: " << vowels[0] << endl;

    cout << "the last vowel is " << vowels[3] << endl;

    // program may crash or not, because this is undefined behavior
    // cin >> vowels[4];
    // cout << vowels[4] << endl; // <- out of bounds - do not do this in C++
    cout << "Accessing non existing elements" << vowels[110] << endl;

    cout << "******************** BREAK *********************" << endl;

    double hi_temps[]{90.1, 89.0, 77.5, 81.6};

    cout << "\nThe first high temperature is: " << hi_temps[0] << endl;
    cout << "Accessing non existing elements " << hi_temps[110] << endl;

    hi_temps[0] = 100.7;

    cout << "\nThe first high temperature is now: " << hi_temps[0] << endl;

    cout << "******************** BREAK *********************" << endl;

    int test_scores[5]{100}; // only first item is going to be 100, the others 0
    // int test_scores[5];
    // int test_scores[]{100, 90, 80, 70, 60};

    cout << "\nFirst score at index 0: " << test_scores[0] << endl;
    cout << "Second score at index 1: " << test_scores[1] << endl;
    cout << "Third score at index 2:  " << test_scores[2] << endl;
    cout << "Fourth score at index 3: " << test_scores[3] << endl;
    cout << "Fifth score at index 4: " << test_scores[4] << endl;

    // cout << "\nEnter 5 test scores: ";
    // cin >> test_scores[0];
    // cin >> test_scores[1];
    // cin >> test_scores[2];
    // cin >> test_scores[3];
    // cin >> test_scores[4];

    cout << "\nThe updated array is:" << endl;
    cout << "First score at index 0: " << test_scores[0] << endl;
    cout << "Second score at index 1: " << test_scores[1] << endl;
    cout << "Third score at index 2:  " << test_scores[2] << endl;
    cout << "Fourth score at index 3: " << test_scores[3] << endl;
    cout << "Fifth score at index 4: " << test_scores[4] << endl;

    // address of where array is located - first index [0] based on this c++ is doing calculation
    // if you are going to try access element that is not existing in array you are going to get unpredicted/ undefined behaviour
    cout << "\nNotice what the value of the array name is : " << test_scores << endl;

    cout << endl;
    return 0;
}