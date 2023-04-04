#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
    char first_name[20];
    char last_name[20];
    char full_name[50];
    char temp[50];

    // cout << first_name; // Çý¡xä☺ // uninitialized string :>

    // cout << "Please enter your first name: ";
    // cin >> first_name;

    // cout << "Please enter your last name: ";
    // cin >> last_name;
    // cout << "-------------------------------" << endl;

    // strlen type is returning object size_t - it is unsigned integer
    // https://en.cppreference.com/w/cpp/types/size_t
    /*
    Notes
    std::size_t can store the maximum size of a theoretically possible object of any type (including array).
    A type whose size cannot be represented by std::size_t is ill-formed. On many platforms (an exception is systems with segmented addressing)
    std::size_t can safely store the value of any non-member pointer, in which case it is synonymous with std::uintptr_t.

    std::size_t is commonly used for array indexing and loop counting. Programs that use other types,
    such as unsigned int, for array indexing may fail on, e.g. 64-bit systems when the index exceeds UINT_MAX or if it relies on 32-bit modular arithmetic.

    When indexing C++ containers, such as std::string, std::vector, etc, the appropriate type is
    the member typedef size_type provided by such containers. It is usually defined as a synonym for std::size_t.
    */
    // cout << "Hello, " << first_name << " your first name has " << strlen(first_name) << " characters" << endl;
    // cout << "and your last name, " << last_name << " has " << strlen(last_name) << " characters" << endl;

    // it is going to copy first_name to full_name character by character
    // strcpy(full_name, first_name); // copy first_name to full_name
    // strcat(full_name, " ");        // concatenate full_name and a space
    // strcat(full_name, last_name);  // concatenate last_name to full_name
    // cout << "Your full name is " << full_name << endl;

    // cout << "-------------------------------" << endl;
    // cout << "Enter your full name: ";
    // cin >> full_name;

    // cout << "Your full name is " << full_name << endl; // it would stop at the white space Patryk_

    cout << "Enter your full name: ";
    cin.getline(full_name, 50);
    cout << "Your full name is " << full_name << endl;

    cout << "-------------------------------" << endl;
    strcpy(temp, full_name);
    if (strcmp(temp, full_name) == 0)
        cout << temp << " and " << full_name << " are the same" << endl;
    else
        cout << temp << " and " << full_name << " are different" << endl;

    cout << "-------------------------------" << endl;
}

