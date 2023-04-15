/*

            Operator Overloading

        Unary operators as member methods (++, --, =, !)

            ReturnType Type::operatorOp();

            Number Number::operator-() const;
            Number Number::operator++();        // pre-increment
            Number Number::operator++(int);     // post-increment
            bool Number::operator!() const;


            Number n1 {100};
            Number n2 = -n1;        // n1.operator-()
            n2 = ++n1               // n1.operator++()
            n2 = n1++               // n1.operator++(int)


            Mystring larry1 {"LARRY"};
            Mystring larry2;

            larry1.display();           // LARRY

            larry2 = -larry1            // larry1.operator- ()

            larry1.display()            // LARRY
            larry2.display()            // larry



            Mystring operator- make lowercase


                Mystring Mystring::operator- () const {
                    // init
                    char *buff = new char[std::strlen(str) + 1];

                    // copy
                    std::strcpy(buff, str);


                    // lowering down all chars
                    for (size_t i =0; i<std::strlen(buff); i++)
                        buff[i] = std::tolower(buff[i]);

                    Mystring temp {buff};
                    delete [] buff; // remove buff to not have leak in memory
                    return temp;
                }


------------------------------------------------------------------------------------------------------------------

            Binary operators as member methods(+, -, ==, !=, <, >, etc)


                ReturnType Type:operatorOp(const Type &rhs);

                Number Number::operator+(const Number &rhs) const;
                Number Number::operator-(const Number &rhs) const;
                bool Number::operator==(const Number &rhs) const;
                bool Number::operator<(const Number &rhs) const;


                Number n1 {100}, n2 {200};
                Number n3 = n1 + n2;            // n1.operator+(n2)
                n3 = n1 - n2;                   // n1.operator-(n2)
                if (n1 == n2) . . .             // n1.operator==(n2)

------------------------------------------------------------------------------------------------------------------

                Mystring operator==

                        bool Mystring::operator==(const Mystring &rhs) const {
                            if (std::strcmp(str, rhs.str) == 0)
                                return true;
                            else
                                return false;

                        }

                        // if (s1 == s2)                // s1 and s2 are Mystring objects

------------------------------------------------------------------------------------------------------------------

                Mystring operator+ (concatenation)


                    Mystring larry {"Larry"};
                    Mystring moe{"Moe"};
                    Mystring stooges { "is one of the three stooges"};

                    Mystring result = larry + stooges;
                                        // larry.operator+(stooges);

                    result = moe + " is also a stooge";
                                // moe.operator+("is also a stooge");

                    result = "Moe" + stooges;       // "Moe".operator+(stooges) <--- ERROR
                    // object on the left side must be the type of the object that you are using
                    // You can make it work implementing operators non members function


------------------------------------------------------------------------------------------------------------------

                My string operator+ (concatenation) - implementation

                    Mystring Mystring::operator+(const Mystring &rhs) const {
                        size_t buff_size = std::stlen(str) +
                                            std::strlen(rhs.str) + 1;
                        char *buff = new char[buff_size];
                        std::strcpy(buff, str);
                        std::strcat(buff, rhs.str);
                        Mystring temp {buff};
                        delete [] buff;
                        return temp;
                    }


*/