/*

                    Overloading the Stream Insertion and Extraction Operators


            stream insertion and extraction operators(<<, >>)

                Mystring larry {"Larry"};

                cout << larry << endl;      // Larry

                Player hero {"Hero", 100, 33};

                cout << hero << endl;       // {name: Hero, health: 100, xp: 33}



            ----------------

                Mystring larry;

                cin >> larry;

                Player hero;

                cin >> hero;

            ---------------------

        Does not make sense to implement as member methods
            - left operand must be a user-defined class
            - not the way we normally use these operators


            Mystring larry;
            larry << cout;     /// huh?


            Plyer hero;
            hero >> cin         /// huh?


        ----------------------------------------------------------------------

        stream insertion operator (<<)


        std::ostream &operator<<(std::ostream &os, const Mystring &obj) {
            os << obj.str;          // if friend function
            // os << obj.get_str(); // if not friend function

            return os;
        }

        - return a reference to the ostream so we can keep inserting
        - do not return ostream by value!

        ---------------------------------------------------------------------


        stream extraction operator (>>)

        std::istream &operator>>(std::istream &is, Mystring &obj){
            char *buff = new char[1000];
            is >> buff;
            obj = Mystring{buff};   // if you have copy or move assignment
            delete [] buff;
            return is;
        }


        - return a reference to the istream so we can keep inserting
        - update the object passed in




*/