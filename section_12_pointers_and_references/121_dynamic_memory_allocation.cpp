/*
                Dynamic Memory Allocation

    Allocating storage from the heap at runtime

    - We often do not know how much storage we need until we need it
    - we can allocate storage for a variable at run time
    - Recall C++ arrays
        - we had to explicitly provide the size and it was fixed
        - but vectors grow and shrink dynamically

    - we can use pointers to access newly allocated heap storage

------------------------------------------------------------------------------------
                                new KEY WORD        -- WOW!

    using new to allocate storage

        int *int_ptr {nullptr};

        int_ptr = new int               // allocate an integer on the heap

        cout << int_ptr << endl;        // 0x2747f28

        cout << *int_ptr << endl;       // 41188048 - garbage

        *int_ptr = 100;

        cout << *int_ptr << endl;       // 100

------------------------------------------------------------------------------------

                                delete  KEY WORD

    using delete to deallocate storage


        int *int_ptr {nullptr};

        int_ptr = new int;              // allocate an integer on the heap

        . . .

        delete int_ptr                  // frees the allocated storage


------------------------------------------------------------------------------------

        using new[] to allocate storage for an array


            int *array_ptr {nullptr};
            int size {};

            cout << "How bid go you want the array? ";
            cin >> size;

            array_ptr = new int[size];          // allocate array on the heap

            // we can access the array here
            // we will see how in a few slides
------------------------------------------------------------------------------------

        using delete[] to deallocate storage for an array


            int *array_ptr {nullptr};
            int size {};

            cout << "How big do you want the array? ";
            cin >> size;

            array_ptr = new int[size]; // allocate array on the heap

            ...

            delete [] array_ptr;




        Dynamic allocation taking part in Heap - Free Storage
*/

#include <iostream>

using namespace std;

int main()
{

    int *int_ptr{nullptr};
    int_ptr = new int;       // allocate the int on the heap
    cout << int_ptr << endl; // use it
    delete int_ptr;          // release it

    size_t size{0};
    double *temp_ptr{nullptr};

    cout << "How many temps? ";
    cin >> size;

    while (true)
        temp_ptr = new double[size];

    temp_ptr = new double[size]; // allocate the storage on the heap
    cout << temp_ptr << endl;    // use it
    cout << sizeof temp_ptr << endl;
    cout << sizeof *temp_ptr << endl;
    delete[] temp_ptr; // release it

    cout << endl;
    return 0;
}