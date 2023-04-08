/*

            How do Function Calls Work?

    - Functions use the "Function Call Stack"
        - Analogous to a stack of books
        - LIFO - Last In First Out
        - Push and Pop

    - Stack Frame or Activation Record
        - Functions must return control to function that called it
        - each time a function is called we create a new activation record and push it on stack
        - when a function terminates we pop the activation record and return
        - local variables and function parameters are allocated on the stack
    
    - Stack size is finite - Stack Overflow 

    ----------------------------------------------------

    


*/