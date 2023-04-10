/*

            Pointer Arithmetic

        - Pointers can be used in
            - assignment expressions
            - arithmetic expressions
            - comparison expressions

        - C++ allows pointer arithmetic
        - pointer arithmetic only makes sense with raw arrays

    -----------------------------------------------------

        ++ and --

    - (++) increments a pointer to point to the next array element

        int_ptr++;

    - (--) decrements a pointer to point to the previous array element

        int_ptr--;

    it will decrement or increment by needed size

    -----------------------------------------------------

        + and -

    - (+) increment pointer by n * sizeof(type)

        int_ptr += n; or int_ptr = int_ptr + n;

    - (-) decrement pointer by n * sizeof(type)

        int_ptr -= n; or int_ptr = int_ptr - n;

    -----------------------------------------------------

        Subtracting two pointers

    - determine the number of elements between the pointers
    - both pointers must point to the same data type

            int n = int_ptr2 - int_ptr1;

    -----------------------------------------------------

            Comparing two pointers == and !=

    Determine if two pointers point to the same location

        - does not compare the data where they point

        string s1 {"Frank"};
        string s1 {"Frank"};

        string *p1 {&s1};
        string *p2 {&s2};
        string *p3 {&s1};

        cout << (p1 == p2) << endl; // False
        cout << (p1 == p3) << endl; // true

    -----------------------------------------------------

        Comparing the data pointers point to

    Determine if two pointers point to the same data
    - you must compare the referenced pointers


        string s1 {"Frank"};
        string s1 {"Frank"};

        string *p1 {&s1};
        string *p2 {&s2};
        string *p3 {&s1};

        cout << (*p1 == *p2) << endl; // true
        cout << (*p1 == *p3) << endl; // true
*/

#include <iostream>

using namespace std;

int main()
{

    int scores[]{100, 95, 89, 68, -1};
    int *score_ptr{scores};

    while (*score_ptr != -1)
    {
        cout << *score_ptr << endl;
        score_ptr++;
    }

    cout << "\n-------------------------" << endl;
    score_ptr = scores;
    while (*score_ptr != -1)
        // tutor said it is common in c++ but I feel like it is not very readable hmm :S
        cout << *score_ptr++ << endl; // precedence chart and then from the right to left in this case

    cout << "\n-------------------------" << endl;
    string s1{"Frank"};
    string s2{"Frank"};
    string s3{"James"};

    string *p1{&s1};
    string *p2{&s2};
    string *p3{&s1};

    cout << boolalpha;
    cout << p1 << "==" << p2 << ": " << (p1 == p2) << endl; // false
    cout << p1 << "==" << p3 << ": " << (p1 == p3) << endl; // true

    cout << *p1 << "==" << *p2 << ": " << (*p1 == *p2) << endl; // true
    cout << *p1 << "==" << *p3 << ": " << (*p1 == *p3) << endl; // true

    p3 = &s3;                                                   // point to James
    cout << *p1 << "==" << *p3 << ": " << (*p1 == *p3) << endl; // false

    cout << "\n-------------------------" << endl;
    char name[]{"Frank"};

    char *char_ptr1{nullptr};
    char *char_ptr2{nullptr};

    char_ptr1 = &name[0]; // F
    char_ptr2 = &name[3]; // n

    cout << "In the string " << name << ",  " << *char_ptr2 << " is " << (char_ptr2 - char_ptr1) << " characters away from " << *char_ptr1 << endl;

    cout << endl;
    return 0;
}
