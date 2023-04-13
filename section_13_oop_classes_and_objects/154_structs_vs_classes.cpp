/*
            Structs and Classes

    - in addition to define a class we can declare a struct

    - stuct comes from the C programming language

    - essentially the same as a class expect
        - members are public by default // 



    side note: members of class are private by default

    --------------------------- class

    class Person {
        std::string name;
        std::string get_name();
    }

    Person p;
    p.name = "Frank";               // compiler error - private
    std::cout <<p.get_name();       // compiler error - private


    -------------------------- struct 

    struct Person {
        std::string name;
        std::string get_name(); // why if name is public

    }

    Person p;
    p.name = "Frank";           ok - public
    std::cout <<p.get_name();   ok - public 

--------------------------------------------------------------------------------------------------------

Some general guidelines

        - struct 
            - use struct for passive objects with public access
            - do not declare methods in struct

        - class
            - use class for active objects with private access
            - implement getters and setters as needed
            - implement member methods as needed 
*/