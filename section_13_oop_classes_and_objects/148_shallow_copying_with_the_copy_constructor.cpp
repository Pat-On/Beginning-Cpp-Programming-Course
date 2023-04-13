/*
                Shallow Copy in C++

    Shallow vs Deep Copying

    - Consider a class that contains a pointer as a data member
    - Constructor allocates storage dynamically and initializes the pointer
    - Destructor releases the memory allocated by the constructor
    - what happens in the default copy constructor?

        Default Copy Constructor
    - memberwise copy
    - each data member is copied from the source object
    - the pointer is copied not what it points to (shallow copy)
    - PROBLEM: when we release the storage in the destructor, the other object still refers to the released storage!


    ------------------------------------------------------

    Copy Constructor [SHALLOW]

    class Shallow {
        private:
            int *data;                          // Pointer
        public:
            Shallow(int d);                     // Constructor
            Shallow(const Shallow &source);     // Copy
        Constructor
            ~Shallow();                         // Destructor
    }


    // Implementation Shallow Constructor

    Shallow::Shallow(int d) {
        data = new int;             // allocate storage
        *data = d;
    }

    // Implementation of shallow destructor
    Shallow::~Shallow(){
        delete data;        // free storage
        cout << "Destructor freeing data" << endl;
    }


    // Shallow Copy Constructor
    Shallow::Shallow(const Shallow &source)
        : data(source.data) {
            cout << "Copy constructor - shallow" << endl;
        }

    Shallow copy - only the pointer is copied - not what it is pointing to!
        Problem: source and the newly created object BOTH point to the SAME data area!

    ----------------------------------------------------------------------------------------

    Sample main - will likely crash

    int main() {
        Shallow obj1 {100};
        display_shallow(obj1);
        // obj1's data has been released!

        obj1.set_data_value(1000);
        Shallow obj2 {obj1};
        cout << "Hello World" << endl;
        return 0;
    }

*/

#include <iostream>

using namespace std;

class Shallow
{
private:
    int *data;

public:
    void set_data_value(int d) { *data = d; }
    int get_data_value() { return *data; }
    // Constructor
    Shallow(int d);
    // Copy Constructor
    Shallow(const Shallow &source);
    // Destructor
    ~Shallow();
};

Shallow::Shallow(int d)
{
    data = new int;
    *data = d;
}

Shallow::Shallow(const Shallow &source)
    : data(source.data)
{
    cout << "Copy constructor  - shallow copy" << endl;
}

Shallow::~Shallow()
{
    delete data;
    cout << "Destructor freeing data" << endl;
}

void display_shallow(Shallow s)
{
    cout << "Display:" << s.get_data_value() << endl;
}

int main()
{

    Shallow obj1{100};
    display_shallow(obj1);

    Shallow obj2{obj1};

    obj2.set_data_value(1000);
    display_shallow(obj1);
    display_shallow(obj2);
    return 0;
}
