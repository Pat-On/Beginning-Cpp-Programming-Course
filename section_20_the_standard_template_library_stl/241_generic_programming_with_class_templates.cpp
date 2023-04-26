/*

            Generic Programming with class templates

            What is a C++ Class Template?

            - Similar to function template, but at the class level
            - Allows plugging-in any data type
            - Compiler generates the appropriate class from the blueprint

    ----------------------------------------------------------------------------------

        Generic Programming with class templates

        - lets say we want a class to hold items where the item has a name and an integer

        class Item {
        private:
            std::string name;
            int value;
        public:
            Item(std::string name, int value)
                : name{name}, value{value}
        {}
        std::string get_name() const {return name;}
        int get_value() const {return value;}
        }

    -------------------------------------------------------------------------------

        - But  we'd like our Item class to be able to hold any type of data in addition to the string

        - we can not overload class names

        - we do not want to use dynamic polymorphism

    --------------------------------------------------------------------------------


        template <typename T>
        class Item {                // int to T (can be any value)
        private:
            std::string name;
            T value;
        public:
            Item(std::string name, T value)
                : name{name}, value{value}
        {}
        std::string get_name() const {return name;}
        T get_value() const {return value;}
        }

    --------------------------------------------------------------------------------

        Item<int> item1 {"Larry", 1};

        Item<double> item2 {"House", 1000.0};

        Item<std::string> item3 {"Frank", "Boss"};

        std::vector<Item<int>> vec

    --------------------------------------------------------------------------------

    Multiple types as template parameters
        - We can have multiple template parameters
        - an their types can be different


    template <typename T1, typename T2>
    struct My_Pair {
        T1 first;
        T2 second;
    }

    My_Pair <int, double> p2 {124, 13.6};


    --------------------------------------------------------------------------------

    std::pair <std::string, int> p1 {"Frank", 100};

    std::cout << p1.first; // Frank
    std::cout << p2.second; // 100
*/