/*
                        Overloading the Assignment Operator (Copy)

        Copy assignment operator (=)

        - C++ provides a default assignment operator used for assigning one object to another


            Mystring s1 {"Frank"};
            Mystring s2 = s1;       // Not assignment
                                    // same as Mystring s2 {s1};

            s2 = s1;                // assignment

        - Default is memberwise assignment (shallow copy)
            - if we have raw pointer data member we must deep copy


    -------------------
        Overloading the copy assignment operator (deep copy)

            Type &Type::operator=(const Type $rhs);

            Mystring &Mystring::operator=(const Mystring &rhs);

            s2 = s1;            // we write this
            s2.operator=(s1);   // operator= method is called

    -------------------

        Overloading the copy assignment operator (deep copy)\

            Mystring &Mystring::operator=(const Mystring &rhs) {
                if (this ==&rhs)
                    return *this;

                delete [] str;
                str = new char[std::strlen(rhs.str) + 1];
                std::strcpy(str, rhs.str);

                return *this;
            }

    -----------------

        Overloading the copy assignment operator - steps for deep copy

            - check for self assignment

                if (this == &rhs)       // p1 = p1;
                    return *this        // return current object

            - deallocate storage for this->str since we are overwriting it

                delete [] str;

            - allocate storage for the deep copy (on the heap)

                str = new char[std::strlen(rhs.str) + 1];

            - Perform the copy

                std::strcpy(str, rhs.str);

            - return the current by reference to allow chain assignment

                return *this;
                                    // s1 = s2 = s3;

            

*/