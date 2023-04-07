/*

        Passing Arrays to Functions


    - We can pass an array to a function by providing square brackets in the formal parameter description

                void print_array(int numbers []);

    - the array elements are NOT copied

    - since the array name evaluates to the location of the array in memory - this address is what is copied <-------- normal

    - so the function has no idea how many elements are in the array since all it knows is the location of the first element (the name of the array) <--- interesting
                                            address ofd the first element basically


    ---------------------------------------------------
    example

    void print_array (int numbers []);

    int main () {
        int my numbers [] {1, 2, 3, 4, 5};

        print_array(my_numbers);
        return 0;
    }

    void print_array(int numbers []) {          <-------------------interesting! array name has no info about number of the elements
        // Does not know how many elements are in the array??
        // we need to pass in the size!!
    }


    ------------------------------------
    void print_array (int numbers [], size_t size);

    int main () {
        int my numbers [] {1, 2, 3, 4, 5};

        print_array(my_numbers, 5);
        return 0;
    }

    void print_array(int numbers []) {          <-------------------interesting! array name has no info about number of the elements
        for(size_t i{0}; i < size ; ++i){
            cout <<number[i] <<endl;
        }
    }


    ------------------------------------


    - Since we are passing the location of the array
        -= the function can modify the actual array


    void zero_array(int numbers [], size_t, size) {
        for (size_t i{0}; i<size; ++i)
            number[i] = 0;
    }

    int main(){
        int my_numbers[] {1, 2, 3, 4, 5};
        zero_array(my_numbers, 5);      // my_numbers is now zeroes!
        print_array(my_numbers, 5);     // 0 0 0 0 0
        return 0;
    }

    ------------------------------------
    CONST PARAMETERS

    - we can tell the compiles that function parameters are const (read-only)
    - this could be useful in the print_array function since it should not modify the array

    void print_array(const int numbers [], size_t size){
        for (size_t i{0}; i < size; ++i)
            cout <<numbers[i]<<endl;
        numbers[i] = 0;         // any attempt to modify the array
                                // will result in a compiles error
    }





When we pass an array into a function,the array 'decays' to a pointer and any size information is not available to the function.

sizeof(array) evaluates to the number of bytes in the array, not the number of elements in the array. In this case array is a pointer, so sizeof will always be the same.



*/

// Udemy exercise solution
#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE THE FUNCTION PROTOTYPES BELOW THIS LINE----

//----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES
string print_guest_list(const string[], size_t);
void clear_guest_list(string[], size_t);

//----WRITE THE FUNCTION PROTOTYPES ABOVE THIS LINE----
//----DO NOT MODIFY THE CODE BELOW THIS LINE----

void event_guest_list()
{

    string guest_list[]{"Larry", "Moe", "Curly"};
    size_t guest_list_size{3};

    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE THE FUNCTION CALLS BELOW THIS LINE----

    print_guest_list(guest_list, guest_list_size);
    clear_guest_list(guest_list, guest_list_size);
    print_guest_list(guest_list, guest_list_size);

    //----WRITE THE FUNCTION CALLS ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
}

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE THE FUNCTION DEFINITION BELOW THIS LINE----

string print_guest_list(const string guest_list[], size_t guest_list_size)
{ //----WRITE THE FUNCTION PARAMETER LIST                                                                              
    //----WRITE THE FUNCTION BODY BELOW THIS LINE----

    for (size_t i{0}; i < guest_list_size; i++)
        cout << guest_list[i] << endl;

    //----WRITE THE FUNCTION BODY ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    return typeid(guest_list).name();
}

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE THE FUNCTION DEFINITION BELOW THIS LINE----

void clear_guest_list(string guest_list[], size_t guest_list_size)
{ //----WRITE THE FUNCTION PARAMETER LIST WITHIN                                                                         THE PARENTHESES
    //----WRITE THE FUNCTION BODY BELOW THIS LINE----

    for (size_t i{0}; i < guest_list_size; i++)
        guest_list[i] = " ";

    //----WRITE THE FUNCTION BODY ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
}