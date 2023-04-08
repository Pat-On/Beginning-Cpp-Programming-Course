/*

            Inline Functions

        - function calls have a certain amount of overhead

        - you saw what happens on the call stack

        - sometimes we have simple functions

        - we can suggest to the compiler to compile them 'inline'
            - avoid function call overhead
            - generate inline assembly code
            - faster
            - could cause code bloat

        - compilers optimizations are very sophisticated
            - will likely inline even without your suggestion


--------------------------------------------------------------------
    example

    inline int add_numbers(int a, int b) { // definition
        return a + b
    }

    int main (){
        int result {0};
        result = add_numbers(100, 200); // call
        return 0;
    }


---------------------------------------------------------------------------

If a function is inlined by the compiler, it generates the code directly WITHOUT all the function call overhead.

Suppose we have a function 

int add(int a, int b) {
   int sum = a + b;
   return sum;
}
If the function is NOT inlined by the compiler, then we get the function call overhead that you describe using the stack.

However, it the function IS inlined by the compiler, then the call to the function would not incur the function call overhead and it might be replaced with something like this:

int result = add(10,20); 

would be inlined as:

int result = 10 + 20;   Notice no function call happens!


*/

