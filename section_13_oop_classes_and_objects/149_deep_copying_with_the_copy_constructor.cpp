/*

                Deep Copy

        User-provided copy constructor

    - create a copy of the pointed-to data
    - each copy will have a pointer to unique storage in the heap
    - deep copy when you have a raw pointer as a class data member


    Deep
    class Deep {
        private:
            int *data;          // pointer
        public:
            Deep(int d);                    // Constructor
            Deep(const Deep &source);       // Copy Constructor
            ~Deep();                        // Destructor
    }

    Implementation - Deep Constructor

    Deep::Deep(int d) {
        data = new int;     // allocate storage
        *data = d;
    }

    Deep::~Deep(){
        delete data;        // free storage
        cout << "Destructor freeing data" << endl;
    }

    Deep::Deep(const Deep &source)
    {
        data = new int;     // allocate storage
        *data = *source.data;
        cout << "Copy constructor - deep" << endl;
    }

    Deep copy - create new storage and copy values

    -------------------------------------------------------------------------------------------------------------------------

        Deep copy constructor - delegating constructor

        Deep::Deep(const Deep &source)
            : deep{*source.data} {
                cout << "Copy constructor - deep" << endl;
            }

        Delegate to Deep (int) and pass in the int (*source.data) source is pointing to


        deep - a simple method that expects a copy

        void display_deep(Deep s){
            cout << s.get_data_value() << endl;
        }

        When s goes out of scope the destructor is called and releases data.
        No Problem: since the storage being releases is unique to s.

    -------------------------------------------------------------------------------------------------------------------------

                Sample main - will not crash

        int main() {
            Deep obj1 {100};
            display_deep(obj1);

            obj1.set_data_value(1000);
            Deep obj2{obj1};

            return 0;
        }

*/

#include <iostream>

using namespace std;

class Deep
{
private:
    int *data;

public:
    void set_data_value(int d) { *data = d; }
    int get_data_value() { return *data; }
    // Constructor
    Deep(int d);
    // Copy Constructor
    Deep(const Deep &source);
    // Destructor
    ~Deep();
};

Deep::Deep(int d)
{
    data = new int;
    *data = d;
}

Deep::Deep(const Deep &source)
    : Deep{*source.data}
{
    cout << "Copy constructor  - deep copy" << endl;
}

Deep::~Deep()
{
    delete data;
    cout << "Destructor freeing data" << endl;
}

void display_deep(Deep s)
{
    cout << s.get_data_value() << endl;
}

int main()
{

    Deep obj1{100};
    display_deep(obj1);

    Deep obj2{obj1};

    obj2.set_data_value(1000);

    return 0;
}
