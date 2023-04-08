/*

           Pass by Reference
           - sometimes we want to be able to change the actual parameter from within the function body

           - in order to achieve this we need the location or address of the  actual parameter

           - we saw how this is the effect with array, but what about other variable types?

           - we can use reference parameters to tell the compiles to pass in a reference to the actual parameter

           - the formal parameter will now be an alias for the actual parameter


            ------------------------------

            Example

            void scale_number(int &num);    /// prototype


            int main() {
                int number {1000};
                scale_number(number);       // call
                cout << number << endl;     // 100
                return 0;
            }


            void scale_number(int &num){    // definition
                if (num > 100)
                    num = 100;
            }


    --------------------------------------------------------

    Example - swap(int &a, int &b);


    int main(){
        int x{10}, y{20};
        cout << x << " " << y << endl; // 10 20

        swap(x, y);

        cout << x << " " << y << endl; // 20 10

        return 0
    }

    void swap(int &a, int &b){
        int temp = a;
        a = b;
        b = temp;
    }

    --------------------------------------------------------

    vector example - pass by value

    void print(std::vector<int> v);

    int main() {
        std::vector<int> data {1,2,3,4,5};
        print(data);        // 1 2 3 4 5
        return 0;
    }

    void print(std::vector<int> v) {
        for (auto num: v){
            cout << num << endl;
        }
    }

    --------------------------------------------------------
    vector example - pass by reference

    void print(std::vector<int> &v);

    int main() {
        std::vector<int> data {1,2,3,4,5};
        print(data);        // 1 2 3 4 5
        return 0;
    }

    void print(std::vector<int> &v) {
        for (auto num: v){
            cout << num << endl;
        }
    }

    --------------------------------------------------------

    vector example - pass by const reference

    void print(const std::vector<int> &v);

    int main() {
        std::vector<int> data {1,2,3,4,5};
        print(data);        // 1 2 3 4 5
        return 0;
    }

    void print(const std::vector<int> &v) {
        v.at(0) == 200;         // error
        for (auto num: v){
            cout << num << endl;
        }
    }

*/

// udemy exercise

#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE THE FUNCTION PROTOTYPES BELOW THIS LINE----

string print_guest_list(const string &, const string &, const string &);

void clear_guest_list(string &, string &, string &);

//----WRITE THE FUNCTION PROTOTYPES ABOVE THIS LINE----
//----DO NOT MODIFY THE CODE BELOW THIS LINE----

void event_guest_list()
{

    string guest_1{"Larry"};
    string guest_2{"Moe"};
    string guest_3{"Curly"};

    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE THE FUNCTION CALLS BELOW THIS LINE----

    print_guest_list(guest_1, guest_2, guest_3);
    clear_guest_list(guest_1, guest_2, guest_3);
    print_guest_list(guest_1, guest_2, guest_3);

    //----WRITE THE FUNCTION CALLS ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
}

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE THE FUNCTION DEFINITION BELOW THIS LINE----

string print_guest_list(const string &guest_1, const string &guest_2, const string &guest_3)
{
    //----WRITE THE FUNCTION BODY BELOW THIS LINE----

    cout << guest_1 << "\n"
         << guest_2 << "\n"
         << guest_3 << endl;

    //----WRITE THE FUNCTION BODY ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    string test_1 = typeid(guest_1).name(), test_2 = typeid(guest_2).name(), test_3 = typeid(guest_3).name();
    return test_1 + test_2 + test_3;
}

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE THE FUNCTION DEFINITION BELOW THIS LINE----

void clear_guest_list(string &guest_1, string &guest_2, string &guest_3)
{
    //----WRITE THE FUNCTION BODY BELOW THIS LINE----

    guest_1 = guest_2 = guest_3 = " ";

    //----WRITE THE FUNCTION BODY ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
}