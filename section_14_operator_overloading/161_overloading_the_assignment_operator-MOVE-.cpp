/*

                    Overloading the assignment operator

        Operator Overloading
        Move assignment operator (=)

        - You can choose to overload the move assignment operator
            - C++ will use the copy assignment operator if necessary

            Mystring s1;

            s1 = Mystring {"Frank"}; // move assignment

        - if we have raw pointer we should overload the move assignment operator for efficiency


                Type &Type::operator=(Type &&rhs);

                Mystring &Mystring::operator=(Mystring &&rhs);

                s1 = Mystring{"Joe"};   // move operator= called
                s1 = "Frank";           // move operator= called


            Mystring &Mystring::operator=(Mystring &&rhs){
                if (this == &rhs)       // self assignment
                    return *this;       // return current object

                delete [] str;          // deallocate current storage
                str = rhs.str           // steal the pointer

                rhs.str = nullptr       // null out the rhs object

                return *this;           // return current object
            }



            ---------------------------------------------------------------------------------------
                            Overloading the Move assignment operator - steps

            - check for self assignment

                if (this == &rhs)
                    return *this            // return current object

            - Deallocate storage for this->str since we are overwriting it

                delete [] str;

            - Steal the pointer from the rhs object and assign it to this->str

                str = rhs.str

            - null out the rhs pointer

                rhs.str = nullptr;

            - return the current object by reference to allow chain assignment

                return *this


*/