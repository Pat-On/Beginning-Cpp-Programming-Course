/*

                l-values
                - values that have names and are addressable
                - modifiable if they are not constants


                int x {100};    // x is an l-value
                x = 1000;
                x = 1000 + 20;

                string name;        // name is an l value
                name = "Frank"

    --------------------------------------------------------------------------------


                100 = x;            // 100 is NOT an l-value
                (100 + 20) = x;     /// (100 + 20) is NOT an l-value

                string name;
                name = "Frank";
                "Frank" = name;     // "Frank" is NOT an l-value

--------------------------------------------------------------------------------
--------------------------------------------------------------------------------
--------------------------------------------------------------------------------

            r-values

        - r-value (non-addressable and non-assignable)
            - A value that is not an l-value
                - on the right-hand side of an assignment expression
                - a literal
                - a temporary which intended to be non-modifiable

        int x {100};                    // 100 is an r-value
        int y = x + 200;                // (x + 200) is an r-value

        string name;
        name = "Frank";                 // "Frank" is an r-value

        int max_num = max(20, 30)       // max(20, 30) is an r-value



--------------------------------------------------------------------------------


    r-values

    - r-values can be assigned to l-values explicitly

    int x {100};
    int y {0};

    y = 100;        // r-value 100 assigned to l-value y

    x = x + y;      // r-value (x+y) assigned to l-value x


--------------------------------------------------------------------------------
            l-value references

    - the references we have used are l-value references
        - because we are referencing l-values

    int x {100};

    int &ref = x;       // ref1 is reference to l-value

    ref1 = 1000;

    int &ref2 = 100;    // error 100 is an r-value


--------------------------------------------------------------------------------

        - the same when we pass-by-reference

    int square(int &n) {
        return n*n;
    }

    int num {10};

    square(num);        // OK

    square(5);          // error can't reference r-value 5

*/