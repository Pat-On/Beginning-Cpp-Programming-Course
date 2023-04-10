/*

                Returning a Pointer from a Function

    - Functions can also return pointers

                type *function();

    - should return pointers to:
        - memory dynamically allocated in the function
        - to data that was passed in

    - never return a pointer to a local function variable!

    -------------------------------------------------------------------------

    returning a parameter

        int *largest_int(int *int_ptr1, int *int_ptr2){
            if (*int_ptr1 > *int+ptr2){ // dereferencing and comparing
                return int_ptr1;
            } else {
                return int_ptr2;
            }
        }


        int main() {
            int a {100};
            int b {200};

            int *largest_ptr {nullptr};
            largest_ptr = largest_int(&a, &b);
            cout << *largest_ptr << endl;       // 200
            return 0;
        }

    -------------------------------------------------------------------------

        Returning dynamically allocated memory


    int *create_array(size_t size, int init_value = 0){
        int *new_storage {nullptr};

        new_storage = new int[size];
        for (size_t i{0}; i < size; ++i)
            *(new_storage+1) = init_value;
        return new_storage;
    }

    int main(){

        int *my_array;  // will bve allocated by the function

        my_array = create_array(100, 20); // create the aray


            // use it

        delete [] my_array; // be sure to free the storage

        return 0;
    }


    ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
        NEVER RETURN A POINTER TO A LOCAL VARIABLE

    int *dont_do_this(){
        int size {};
        . . .
        return &size;
    }

    int *or_this(){
        int size {};
        int *int_ptr {&size};
        . . .
        return int_ptr;
    }

*/

// Section 12
// Return Pointer
#include <iostream>

using namespace std;

int *create_array(size_t size, int init_value = 0)
{
    int *new_storage{nullptr};
    new_storage = new int[size];
    // cleaning garbage data
    for (size_t i{0}; i < size; ++i)
        // pointer offset notation
        *(new_storage + i) = init_value;
    // new_storage is point to the first int of array
    return new_storage; // all this is going to be stored on the heap - we can not loos the pointer, because it would give us leaking memory
}

void display(const int *const array, size_t size)
{
    for (size_t i{0}; i < size; ++i)
        // pointer subscript notation
        cout << array[i] << " ";
    cout << endl;
}
int main()
{
    int *my_array{nullptr};
    size_t size;
    int init_value{};

    cout << "\nHow many integers would you like to allocate? ";
    cin >> size;
    cout << "What value would you like them initialized to? ";
    cin >> init_value;

    my_array = create_array(size, init_value);
    cout << "\n--------------------------------------" << endl;

    display(my_array, size);
    delete[] my_array;
    return 0;
}