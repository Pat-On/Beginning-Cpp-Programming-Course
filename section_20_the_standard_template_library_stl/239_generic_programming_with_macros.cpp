/*

            GENERIC PROGRAMMING WITH MACROS

    Generic programming
        writing code that works with a variety of types as arguments
        as long as those arguments types meet specific syntactic and
        semantic requirements - Bjarne Stroustrup

    Macros  <--- be careful while using macros especially with params ( in legacy code, most of the time in C code)

    Function Templates

    Class Templates

    ----------------------------------------

    macros (#define)

    C++ preprocessor directives
    preprocessor does not know C++
        - No type information
    Simple substitution

    #define MAX_SIZE 100            <--- no type associated
    #define PI 3.14159

    ----------------------------------------

    if (num > MAX_SIZE)
        std::cout << "To big";

    double area = PI * r * r;

    ----------------------------------------
    preprocessor will remove pound hash defined value and replaced them, so:

    if ( num > 100)
        std::cout << "Too big";
    double area = 3.14159 * r * r;

    ----------------------------------------

    max function

        - suppose we need a function to determine of max of 2 integers

        int max(int a, int b){
            return (a > b) > a : b;
        }

        int x = 100;
        int y = 200;
        std::cout << max(x, y);         // displays 200

    ----------------------------------------

    - now suppose we need to determine the max of 2 doubles, and 2 chars

    int max (int a, int b){
        return (a > b) ? a : b;
    }

    double max (int a, int b){
        return (a > b) ? a : b;
    }

    char max (int a, int b){
        return (a > b) ? a : b;
    }

    ----------------------------------------

    Macros with argument s (#define)

    - we can write a generic macro with arguments instead

    #define MAX(a, b) ((a > b) > a : b)

    std::cout << MAX(10, 20)      << std::endl; // 20
    std::cout << MAX(2.4, 3.5)    << std::endl; // 3.5
    std::cout << MAX('A', 'C')    << std::endl; // C

    ----------------------------------------

    WE HAVE TO BE CAREFUL WITH MACROS

    #define SQUARE(a) a * a
    results = SQUARE(5);    // Expect 25
    results = 5*5;          // Get 25

    result = 100/SQUARE(5); // Expect 4
    result = 100/5*5        // Get 100! <--------------------- ou ::> because of the blind substitution

    -----------------------------------------------

    wrap all macros into the parentheses

    #define SQUARE(a) ((a) * (a))

    result = 100/SQUARE(5);     // Expect 4
    result = 100/((5) * (5));   // Now we get 4!!

*/