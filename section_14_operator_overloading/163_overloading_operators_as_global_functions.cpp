/*

            Operator Overloading

        Unary operators as global functions (++, --, -, !)
            - no longer access to this
            quite common implemented as a friend

            ReturnType operatorOp(Type &obj);

            Number operator-(const Number &obj);
            Number operator++(Number &obj);         // pre-increment
            Number operator++(Number &obj, int)     // post-increment

            bool operator!(const Number &obj);

            Number n1 {100};
            Number n2 = -n1;            // operator=(n1)
            n2 = ++n1;                  // operator++(n1)
            n2 = n1++;                  // operator++(n1, int)


        Mystring operator- make lowercase

                Mystring larry1 {"LARRY"};
                Mystring larry2;

                larry1.display();           // LARRY

                larry2 = -larry1            // operator-(larry1)

                larry1.display();           // LARRY
                larry2.display();           // larry


        Mystring operator-

        - often declared as friend functions in the class declaration

            Mystring operator-(const Mystring &obj){
                char *buff = new char[std::strlen(obj.str) + 1];
                std::strcpy(buff, obj.str);
                for (size_t i=0; i<std::strlen(buff); i++)
                    buff[i] = std::tolower(buff[i]);
                Mystring temp {buff};
                delete [] buff;
                return temp;7
            }




        ---------------------------------------------------------------------------

        Binary operators as global functions (+, -, ==, !=, <, >, etc)

            ReturnType operatorOp(const Type &lhs, const Number &rhs);


            Number operator+(const Number &lhs, const Number &rhs);
            Number operator-(const Number &lhs, const Number &rhs);

            bool operator==(const Number &lhs, const Number &rhs);
            bool operator<(const Number &lhs, const Number &rhs);

            Number n1 {100}, n2 {200};

            Number n3 = n1 + n2             // operator+(n1, n2)
            n3 = n1 - n2;                   // operator-(n1, n2)
            id (n1 == n2) . . .             // operator==(n1, n2)


        Mystring operator ==

            bool operator==(const Mystring &lhs, const Mystring &rhs){
                if (std::strcmp(lhs.str, rhs.str) == 0)
                    return true;
                else
                    return false;
            }

        - if declared as a friend of Mystring can access private str attribute
        - otherwise we muse use getter methods



        -------------------------------------------------------------------------------------

        Mystring operator+ (concatenation)

            Mystring larry {"Larry"};
            Mystring moe {"Moe"};
            Mystring stooges { " is one of the three stooges"};

            Mystring result = larry + stooges;
                            // operator+(larry, stooges);

            result = moe + " is also a stooge";
                            // operator+(moe, "is also a stooge");

            result = "Moe" + stooges;       // ok with non-mem,ber functions


        -------------------------------------------------------------------------------------
            Concatenation as a non member function hmm method :>


            Mystring operator+(const Mystring &lhs, const Mystring &rhs){
                size_t buff_size = std::strlen(lhs.str) +
                                    std::strlen(rhs.str) + 1;
                char *buff = new char[buff_size];
                std::strcpy(buff, lhs.str);
                std::strcpy(buff, rhs.str);
                Mystring temp {buff};
                delete [] buff;
                return temp;
            }
*/