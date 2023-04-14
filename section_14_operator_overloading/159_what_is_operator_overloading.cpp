/*

            Operator overloading

        what is operator overloading

    - using traditional operators such as +, =, *, etc with user-defined types
    - allows user defined types to behave similar to built-in types
    - cam make code more readable and writable
    - not done automatically ( expect for the assignment operator_
        they must be explicitly defined

    --------------------------

    Suppose we have a number class that models any number

    - using functions:
        Number result = multiply(add(a,b), divide(c,d));

    - using member methods
        Number result = (a.add(b)).multiply(c.divide(d));

    --------------------------

    What is operator overloading?

    suppose we have a Number class that models any number

    - using overloaded operators
        Number result = (a+b)*(c/d);

    -----------------------------------------------------

    What operators can be overloaded?

    - the majority of C++'s operators can be overloaded
    - the following operators cannot be overloaded:
            ::
            :?
            .*
            .
            sizeof

     ----------------------------------------------------

     Some basic rules
     - Precedence and Associativity cannot be changed
     - 'arity' cannot be changed (i.e. can not make the division operator unary)
     - can not overload operators for primitive type (e.g. int, double, etc)
     - can not create new operators
     - [] () -> and the assignment operator (=) must be declared as member methods
     - other operators can be declared as member methods or global functions



    Some examples

    - int
    - double
    - long
    - std::string
        a = b + c;
        a < b
        std::cout << a

    - Mystring
        s1 = s2 + s3;
        s1 < s2
        s1 == s2
        std::cout << s1

    - player
        p1 < p2
        p1 == p2
        std::cout << p1



----------------------------------------------------------------------------------------

                    Mystring class declaration


                class Mystring {
                    private:
                        char *str // c-style string

                    public:
                        Mystring();
                        Mystring(const char *s);
                        Mystring( const Mystring &source);
                        ~Mystring();
                        void display() const;
                        int get_length() const;
                        const char *get_str() const;
                }

*/