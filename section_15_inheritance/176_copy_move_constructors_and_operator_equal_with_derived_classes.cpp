/*

                    Copy/Move Constructors and
                        operator= with Inheritance


    Copy and Move constructors and overload operator=

    - not inherited from the Base class

    - you may not need to provide your own
        - compiles-provided versions may be just fine

    - we can explicitly invoke the base class versions from the derived class

--------------------------------------------------------------------------------------------


            Copy Constructor

    Can invoke Base copy constructor explicitly
        - derived object 'other' wil be sliced

    Derived::Derived(const Derived &other)
        :Base(other), {Derived Initialization list}             <- it uses slices
        {
            // Code
        }

--------------------------------------------------------------------------------------------


                    Copy constructors


        class Base {
            int value;
        public:
            // same constructors as previous example

            Base (const Base &other) :value{other.value}{
                cout << "Base copy constructor" << endl;
            }
        };


                    Derived class

        class Derived : public Base {
            int doubled_value;
        public:
            // same constructors as previous example

            Derived(const Derived &other)
                :Base(other), doubled_value {other.doubled_value} {
                    cout << "Derived copy constructor " << endl;
                }
        };

--------------------------------------------------------------------------------------------

                    Overloaded operator=


        class Base {
            int value;
        public:
            // same constructor as previous example
            Base &operator=(const Base &rhs) {
                if (this != &rhs){
                    value = rhs.value; // assign
                }

                return *this
            }
        };


                    Derived Class

        class Derived : public Base {
            int doubled_value;
        public:
            // same constructors as previous example
            Derived &operator=(const Derived &rhs) {
                if (this != &rhs) {
                    // assigning Base part - we need to explicitly call it
                    Base::operator=(rhs)                    // assign base part
                    doubled_value = rhs.doubled_value       // assign derived part
                }
                return *this;
            }
        };

--------------------------------------------------------------------------------------------

            Inheritance

    Copy/Move constructors and overloaded operator=
    - often you do not need to provide your own

    - if you do not not define them in Derived
        - then the compiles will create them and automatically and call the base class's version

    - if you do provide derived versions
        - then you must invoke the base versions explicitly yourself

    - be careful with raw pointers
        - especially if base and derived each have raw pointers
        - provide them with deep copy semantics




*/