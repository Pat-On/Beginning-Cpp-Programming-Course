/*

        Accessing Pointer Addres?

        & the address operator

        - variables are stored in unique addresses
        - unary operator
        - evaluates to the address of its operand
            - operand cannot be a constant or expression that evaluates to temp values

        int num {10};
        cout << " Value of num is: " << num << endl;        // 10
        cout << "size of num is: " << sizeof num << endl    // 4 bytes
        cout << "Address of num is: " << &num << endl       // 0x61ff1c

    -----------------------------------------------------------------------------------------------

        example

        int *p;

        cout << "Value of p is: " << p << endl;             // 0x61ff60 - garbage
        cout << "address of p is: " << &p << endl;          // 0x61ff18
        cout << "Sizeof p is: " << sizeof p << endl;        // 4
        p = nullptr;                                        // set p to point nowhere
        cout << "Value of p is " << p << endl;              // 0

    -----------------------------------------------------------------------------------------------

    sizeof a pointer variable
        - do not confuse the size of a pointer and the size of what it points to
        - all pointers in a program have the same size
        - they may be pointing to very large or very small types

                    int *p1 {nullptr};                      all of them have size 4 bytes (it is size of the pointer) address in ram
                    double *p2 {nullptr};
                    unsigned long long *p3 {nullptr};
                    vector<string> *p4 {nullptr};
                    string *p5 {nullptr};

    -----------------------------------------------------------------------------------------------

    Typed Pointers

        - the compiler will make sure that the address stored in a pointer variable is of the correct type

        int score {10};
        double hight_temp {100.7};

        int *score_ptr {nullptr};   // defined explicitly to what type of variable it is pointing

        score_ptr = $score;         // ook
        score_ptr = &high_temp      // compiler error - different type

    -----------------------------------------------------------------------------------------------

    & the address operator

        - pointers are variables so they can change
        - pointers can be null
        - pointers can be uninitialized

        double hight_temp {100.7};
        double low_temp {37.2};

        double *temp_ptr;       // pointer definition pointing to anywhere

        temp_ptr = &hight_temp; // pointer to high_temp
        temp_ptr = &low_temp;   // now points to low_temp

        temp_ptr = nullptr;

*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{

    int num{10};
    cout << "Value of num is: " << num << endl;
    cout << "sizeof of num is: " << sizeof num << endl;
    cout << "Address of num is: " << &num << endl; // & address operator

    /*
    Value of num is: 10
    sizeof of num is: 4
    Address of num is: 0x4715dff83c
    */

    int *p;
    cout << "\nValue of p is: " << p << endl; // garbage
    cout << "Address of p is: " << &p << endl;
    cout << "sizeof of p is: " << sizeof p << endl;

    p = nullptr;
    cout << "\nValue of p is: " << p << endl;

    /*
    Value of p is: 0xffba8bc0d3284990           <--- garbage
    Address of p is: 0x1fdc9ff690
    sizeof of p is: 8

    Value of p is: 0

    */

    int *p1{nullptr};
    double *p2{nullptr};
    unsigned long long *p3{nullptr};
    vector<string> *p4{nullptr};
    string *p5{nullptr};

    cout << "\nsizeof p1 is: " << sizeof p1 << endl;
    cout << "sizeof p2 is: " << sizeof p2 << endl;
    cout << "sizeof p3 is: " << sizeof p3 << endl;
    cout << "sizeof p4 is: " << sizeof p4 << endl;
    cout << "sizeof p5 is: " << sizeof p5 << endl;

    /*
    sizeof p1 is: 8             // pointer and to what it point is completely different
    sizeof p2 is: 8             // my machine it is 8 bytes
    sizeof p3 is: 8
    sizeof p4 is: 8
    sizeof p5 is: 8
    */

    int score{10};
    double high_temp{100.7};

    int *score_ptr{nullptr};

    score_ptr = &score;
    cout << "Value of score is: " << score << endl;
    cout << "Address of score is: " << &score << endl;
    cout << "Value of score_ptr is: " << score_ptr << endl;

    // score_ptr = &high_temp;     // Compiler error

    /*
    sizeof p1 is: 8
    sizeof p2 is: 8
    sizeof p3 is: 8
    sizeof p4 is: 8
    sizeof p5 is: 8
    Value of score is: 10
    Address of score is: 0x5bc1fffc44
    Value of score_ptr is: 0x5bc1fffc44
    */

    cout << endl;

    return 0;
}
