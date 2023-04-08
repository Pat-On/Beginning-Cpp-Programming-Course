/*

        Recursive Functions

    - A recursive function is a function that calls itself
        - either directly or indirectly through another function

    - recursive problem solving
        - base case
        - divide the rest of problem into subproblem and do recursive call

    - there are many problems, that lend themselves to recursive solutions

    - mathematic - factorial, fibonacci, fractals,...

    - searching and sorting - binary search, search trees, ...


--------------------------------------------------------------
        example - like always - factorial


            0! = 1
            n! = n * (n-1)!

            base case:
                factorial(0) = 1

            recursive case:
                factorial(n) = n * factorial(n-1)


--------------------------------------------------------------

        unsigned long long factorial(unsigned long long n) {
            if (n == 0){
                return 1;       // base case
            }
            return n * factorial(n-1);          // recursive case
        }

        int main () {
            cout << factorial(8) << endl; // 40320
            return 0;
        }

------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

            EXAMPLE - LIKE ALWAYS - FIBONACCI

        Fib(0) = 0
        Fib(1) = 1
        Fib(n) = Fib(n-1) + Fib(n - 2)

    Base Case:
        - Fib(0) = 0
        - Fib(1) = 1

    Recursive case:
        - Fib(n) = Fib(n-1) + Fib(n-2)


            C++ Implementation

    unsigned long long fibonacci(unsigned long long n){
        if (n <= 1)
            return n;                           // base case
        return fibonacci(n-1) + fibonacci(n-2); //recursion
    }

    int main() {
        cout < fibonacci(30) << end; // 832040
        return 0;
    }

-------------------------------------------------------------------------------------------------------

    Important notes

    - if recursion does not eventually stop you will have infinite recursion
    - recursion can be resource intensive
    - remember the base case(s)
        - it terminates the recursion
    - only use recursive solutions when it makes sense
    - anything that can be done recursively can be done iteratively
        - stack overflow error





*/

// task from udemy

#include <iostream>
#include <iomanip>
using namespace std;

int function_activation_count{0};

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE THE FUNCTION PROTOTYPE BELOW THIS LINE----

double a_penny_doubled_everyday(int, double amount = 0.01);

//----WRITE THE FUNCTION PROTOTYPE ABOVE THIS LINE----
//----DO NOT MODIFY THE CODE BELOW THIS LINE----

void amount_accumulated()
{
    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE THE FUNCTION CALL BELOW THIS LINE----

    double total_amount = a_penny_doubled_everyday(25);

    //----WRITE THE FUNCTION CALL ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    cout << "If I start with a penny and doubled it every day for 25 days, I will have $" << setprecision(10) << total_amount;
}

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE THE FUNCTION DEFINITION BELOW THIS LINE----

double a_penny_doubled_everyday(int n, double amount)
{
    function_activation_count++;
    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE THE FUNCTION BODY BELOW THIS LINE----

    if (n <= 1)
        return amount;
    return a_penny_doubled_everyday(--n, amount * 2);

    //----WRITE THE FUNCTION BODY ABOVE THIS LINE----
    // DO NOT MODIFY THE CODE BELOW THIS LINE----
}

int test_function_activation_count()
{
    return function_activation_count;
}