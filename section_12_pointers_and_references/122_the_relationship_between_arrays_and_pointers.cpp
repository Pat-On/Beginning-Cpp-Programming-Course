/*
            Relationship Between Arrays and Pointers


    - The value of an array name is the address of the first element in the array

    - the value of a pointer variable is an address

    - if the pointer points to the same data type as the array element then the pointer and array name can be used interchangeably (almost)

    example


        int scores[] { 100, 95, 89};

        cout << scores << endl;         // 0x61fec8
        cout << *scores << endl;        // 100

        int *score_ptr {scores};

        cout << score_ptr << endl;       // 0x61fec8
        cout << score_ptr << endl;       // 100


    ------------------------------------------------------------------------------

    int scores[]    {100, 95, 89};

    int *score_ptr {scores};

    cout << score_ptr[0] << endl; // 100
    cout << score_ptr[1] << endl; // 95
    cout << score_ptr[2] << endl; // 89

    ------------------------------------------------------------------------------

                        ADDING VALUE TO ARRAY
        int scores[]    {100, 95, 89};
                                                                                        POINTER ARITHMETIC
        int *score_ptr {scores};

        cout << score_ptr << endl;              // 0x61ff10

        cout << (score_ptr + 1) << endl;        // 0x61ff14         // we are adding addresses of the next integer 4 bytes away

        cout << (score_ptr + 2) << endl;        // 0x61ff18

    ------------------------------------------------------------------------------


        int scores[] {100, 95, 89};

        int *score_ptr {scores};

        cout << *score_ptr << endl;             // 100

        cout << *(score_ptr + 1) << endl;       // 95

        cout << *(score_ptr + 2) << endl;       // 89


    ------------------------------------------------------------------------------


        Subscription and Offset notation equivalence


        int array_name [] {1,2,3,4,5};
        int *pointer_name {array_name};

        Subscript Notation              Offset Notation
        array_name[index]               *(array_name + index)
        pointer_name[index]             *(pointer_name + index)



*/

#include <iostream>

using namespace std;

int main() {
    
    int scores[] {100, 95, 89};
    
    cout << "Value of scores: " << scores << endl;     
    
    int *score_ptr {scores};
    cout << "Value of score_ptr: " << score_ptr << endl;
    
    cout << "\nArray subscript notation -------------------------" << endl;
    cout << scores[0] << endl;
    cout << scores[1] << endl;
    cout << scores[2] << endl;
    
    cout << "\nPointer subscript notation -------------------------" << endl;
    cout << score_ptr[0] << endl;
    cout << score_ptr[1] << endl;
    cout << score_ptr[2] << endl;
    
    cout << "\nPointer offset notation-------------------------" << endl;
    cout << *score_ptr << endl;
    cout << *(score_ptr + 1) << endl;
    cout << *(score_ptr +2) << endl;
    
    cout << "\nArray offset notation-------------------------" << endl;
    cout << *scores << endl;
    cout << *(scores + 1) << endl;
    cout << *(scores +2) << endl;
    
    cout << endl;
    return 0;
}

