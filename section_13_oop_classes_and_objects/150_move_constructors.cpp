/*
                            Move Constructor C++ 11


        Sometimes when we execute code the compiler creates unnamed temporary values

            int total {0};
            total = 100 + 200;

        - 100 + 200 is evaluated and 300 stored in an unnamed temp value
        - the 300 is then stored in the variable total
        - then the temp value is discarded

        the same happens with objects as well

        ----------------------------- WHEN IS IT USEFUL? -----------------------------

        - sometimes copy constructors are called many times automatically due to the copy semantics of C++

        - Copy constructors doing deep copying can have a significant performance bottleneck

        - C++ 11 introduced move semantics and the move constructor
        - move constructor moves an object rather than copy it

        - Optional but recommended when you have a raw pointer

        - copy elision - C++ may optimize copying away completely (RVO - Return Value Optimization)


        ----------------------------- r-value references -----------------------------

        - used in moving semantics and perfect forwarding
        - move semantics is all about r-value references
        - used by move constructor and move assignment operator to efficiently move an object rather than copy it
        - R-value reference operator (&&)

        Example:

                int x {100}

                int &l_ref = x      // l-value reference
                l_ref = 10          // change x to 10

                int &&r_ref = 200;  // r-value ref
                r_ref = 300;        // change r_ref to 300

                int &&x_ref = x;    // compiler error


        ----------------------------- l-value references -----------------------------

            int x {100};            // x in an l-value

            void func(int &num);    // A

            func(x);                // calls A - x is an l-value
            func(200)              // Error - 200 is an r-value

        Error: cannot bind non-const l-value reference of type 'int&' to an r-value of type 'int'


        ----------------------------- r-value references -----------------------------

            int x {100};            // x in an l-value

            void func(int &&num);    // B

            func(200);              // calls B - 200 - x is an l-value
            func(x)                 // Error - x is an l-value


        Error: cannot bind r-value reference of type 'int&&' to lvalue of type 'int'


        ----------------------------- l-value and r-value reference parameters -----------------------------

        int x {100};                // x is an l-value

        void func(int &num);        // A
        void func(int &&num);       // B

        func(x);                    // calls A - x is an l-value
        func(200);                  // calls B - 200 is an r-value

-------------------------------------------------------------------------------------------------------------------------------------------------

    Example - Move class

    class Move {
        private:
            int *data;      // raw pointer

        public:
            void set_data_value(int d) {*data = data; }
            int get_data_value()        {return *data;}
            Move(int d);                // constructor
            Move(const Move &source);   // copy constructor
            ~Move();
    };


----------------------------- Move class copy constructor -----------------------------
    Move::Move(const Move &source) {
        data = new int;
        *data = *source.data;
    }

    Allocate storage and copy

    ----------------------------- Inefficient copying -----------------------------

    Vector<Move> vec;
    vec.push_back(Move{10});
    vec.push_back(Move{20});

    Copy Constructors will be called to copy the temps

    ----------------------------- What does it do? -----------------------------

    - instead of making a deep copy of the move constructor
        - 'moves' the resource
        - simply copies the address of the resource from source to the current object
        - and, nulls out the pointer in the source pointer

    - very efficient


    ----------------------------- Syntax - r-value reference -----------------------------

        Type::Type(Type &&source);
        Player::Player(Player &&source);
        Move::Move(Move &&source);


    ----------------------------- Move class with move constructor -----------------------------

    Example - Move class

    class Move {
        private:
            int *data;      // raw pointer

        public:
            void set_data_value(int d) {*data = data; }
            int get_data_value()        {return *data;}
            Move(int d);                // constructor
            Move(const Move &source);   // copy constructor
            Move(Move &&source);        <--------------------- Move Constructor
            ~Move();
    };

        Implementation

    Move::Move(Move &&source)
        : data {source.data} {
            source.data = nullptr;  <----- Very important
        }

        "Steal" the data and then null out the source pointer

*/

#include <iostream>
#include <vector>

using namespace std;

class Move
{
private:
    int *data;

public:
    void set_data_value(int d) { *data = d; }
    int get_data_value() { return *data; }
    // Constructor
    Move(int d);
    // Copy Constructor
    Move(const Move &source);
    // Move Constructor
    Move(Move &&source) noexcept;
    // Destructor
    ~Move();
};

Move::Move(int d)
{
    data = new int;
    *data = d;
    cout << "Constructor for: " << d << endl;
}

// Copy ctor
Move::Move(const Move &source)
    : Move{*source.data}
{
    cout << "Copy constructor  - deep copy for: " << *data << endl;
}

// Move ctor
Move::Move(Move &&source) noexcept
    : data{source.data}
{
    source.data = nullptr;
    cout << "Move constructor - moving resource: " << *data << endl;
}

Move::~Move()
{
    if (data != nullptr)
    {
        cout << "Destructor freeing data for: " << *data << endl;
    }
    else
    {
        cout << "Destructor freeing data for nullptr" << endl;
    }
    delete data;
}

int main()
{
    vector<Move> vec;

    vec.push_back(Move{10});

    vec.push_back(Move{20});
    vec.push_back(Move{30});
    vec.push_back(Move{40});
    vec.push_back(Move{50});
    vec.push_back(Move{60});
    vec.push_back(Move{70});
    vec.push_back(Move{80});

    return 0;
}
