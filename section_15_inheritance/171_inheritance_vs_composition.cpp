/*

                Inheritance vs composition


    Public inheritance vs composition

    - both allow reuse of existing classes

    - public inheritance
        - is-a relationship
            - employee is-a person
            - checking account is-a account
            - circle is-a shape

    - composition
        - has-a relationship
            - person has a account
            - player has-a special attack
            - circle has a location

    Example:

        Composition

        class Person {
            private:
                std::string name;   // has-a name
                Account account;    // has-a account
        }


*/