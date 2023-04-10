/*

        What is a Reference?


    - An alias for a variable
    - must be initialized to a variable when declared
    - cannot be null
    - one initialized cannot be made to refer to a different variable
    - very useful as function parameters
    - might be helpful to think of a reference as a constant pointer that is automatically dereferenced


    Using references in range-based for loop

        vector<string> stooges {"Larry", "Moe", "Curly"};

        for (auto str: stooges)
            str = "Funny"           // changes the copy


        for(auto str:stooges)
            cout << str << endl;        // Larry, Moe, Curly



----------------------------------

        vector<string> stooges {"Larry", "Moe", "Curly"};

        for (auto &str: stooges)
            str = "Funny"           // changes are actual


        for(auto str:stooges)
            cout << str << endl;        // Funny Funny Funny

----------------------------------

        vector<string> stooges {"Larry", "Moe", "Curly"};

        for (auto const &str: stooges)
            str = "Funny"           // compiler error

----------------------------------

        vector<string> stooges {"Larry", "Moe", "Curly"};

        for(auto const &str:stooges)
            cout << str << endl;       // Larry, Moe, Curly
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{

    int num{100};
    int &ref{num}; // alias to num

    cout << num << endl;
    cout << ref << endl;

    num = 200;
    cout << "\n---------------------------------" << endl;
    cout << num << endl;
    cout << ref << endl;

    ref = 300;
    cout << "\n---------------------------------" << endl;
    cout << num << endl;
    cout << ref << endl;

    cout << "\n---------------------------------" << endl;
    vector<string> stooges{"Larry", "Moe", "Curly"};

    for (auto str : stooges)
        str = "Funny"; // str is a COPY of the each vector element

    for (auto str : stooges) // No change
        cout << str << endl;

    cout << "\n---------------------------------" << endl;
    for (auto &str : stooges) // str is a reference to each vector element
        str = "Funny";

    for (auto const &str : stooges) // notice we are using const
        cout << str << endl;        // now the vector elements have changed

    cout << endl;
    return 0;
}
