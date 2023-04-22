/*
        Stack Unwinding and How it Works

    - If an exception is thrown but not caught in the current scope 
    C++ tried to find a handler for the exception by unwinding the stack

    - function in which the exception was not caught terminates and is removed from the call stack

    - if a try block was used to then catch block are checked for a match

    - if no try block was used or the catch handler does not mach stack unwinding occurs again

    - if the stack in unwound back to main and no catch handled handle the exception the program terminates

    ----------------------------------------------------------------------------

    


*/