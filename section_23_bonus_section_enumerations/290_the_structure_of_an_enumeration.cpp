/*
                The structure of an enumeration


    enum-key enum-name : enumerator-type { };

    enum-key - defines the scope of the enumeration

    enum-name - optional name of the enumeration

    enumerator type - can be omitted and the compiler will try to deduce it

    {} - List of enumerator definitions

    -----------------------------------------------------------------------

    Examples:


    enum {Red, Green, Blue};
            0   1     2         // implicit initialization

    enum {Red = 1, Green = 2, Blue = 3};    // Explicit initialization

    enum {Red = 1, Green, Blue }
                    2       3           // Explicit/Implicit initialization


    -----------------------------------------------------------------------

    Enumerator Type

    Integral Type                           Width in bits

    int                                     at least 16
    unsigned int

    long
    unsigned long                           at least 32

    long long
    unsigned long long                      at least 64


    enum {Red, Green, Blue};
            0    1      2
        000     001     010

    enum {Red, Green, Blue=-32769};
                            34 bits

    enum : uint8_t {Red, Green, Blue};      // underlying type: unsigned 8 bit int

    enum : long long {Red, Green, Blue};    // underlying type long long

    -----------------------------------------------------------------------

    Enumeration name

    enum {Red, Green, Blue}; Anonymous, no type safe

    in my_color;

    my_color = Green; // valid

    my_color = 4;   // also valid

    ---------

    enum Color {Red, Green, Blue}; <-- named type safe

    Color my_color;

    my_color = Green;       // valid

    my_color = 4;           // not valid

    -----------------------------------------------------------------------

    


*/