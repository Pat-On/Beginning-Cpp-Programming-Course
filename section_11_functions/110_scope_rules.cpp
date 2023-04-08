/*

            Scope Rules


    - C++ uses scope rules to determine where an identifier can be used

    - C++ uses static or lexical scoping

    - local or block scope

    - global scope


--------------------------------------------------------------------

    Local or Block Scope

    - identifiers declared in a block {}

    - function parameters have block scope

    - only visible within the block {} where declared

    - function local variables are only active while the function is executing

    - local variables are not preserved between function calls

    - with nested blocks inner blocks can 'see' but outer block cannot 'see' in

--------------------------------------------------------------------

    Static local variables

        - declared with static qualifier
            static int value {10};

        - value is preserved between function calls

        - only initialized the first time the function is called

        - variable that is live entire program time execution

--------------------------------------------------------------------

    Global Scope

    - identifier declared outside any function or class
    - visible to all parts of the program after the global identifier has been declared
    - global constants are ok
    - best practice - do not use global variables



*/