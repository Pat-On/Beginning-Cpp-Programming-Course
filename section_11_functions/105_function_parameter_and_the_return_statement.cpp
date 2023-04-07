/*

            Function Parameters

            - when we call a function we can pass in data to that function
            - in the function call they are called arguments
            - in the function definition they are called parameters
            - they must match in numer order and in type


            int add_numbers(int, int); // prototype

            int main () {
                int result {0};
                results = add_numbers(100, 200); // call
            }

            int add_numbers(int a, int b) { // definition
                return a + b;
            }

            -------------------- C string literal auto conversion to string c++

            void say_hello(std::string name) {
                cout << "Hello " << name << endl;
            }

            say_hello("frank");


            std::string my_dog {"Buster"};
            say_hello(my_dog);

        ----------------------------------------------------------------------


        Pass By Value

            - when you pass data into a function it is passed-by-value
            - a copy of the data is passed to the function
            - whatever changes you make to the parameter in the function does not affect the argument that was passed in

            - formal vs actual parameters
                - formal parameters - the parameters defined in the function header
                - actual parameters - the parameter used in the function call, the arguments


        example:

            void param_test(int format) {   // formal is a copy of actual
                cout << formal << endl;     // 50
                formal = 100;               // only changes the local copy
                cout << formal << endl;     // 100
            }

            int main() {
                int actual {50};
                cout << actual << endl;         // 50
                param_test(actual) ;            // pass in 50 to param_test
                cout << actual << endl;         // 50 - did not change
            }

        -----------------------------------------------------------

            Function Return Statement

            - if a function returns a value then it must use a return statement that returns a value
            - if a function does not return a value (void) then the return statement is optional
            - return statement can occur anywhere in the body of the function
            - return statement immediately exits the function
            - we can have multiple return statements in a function
                - a void many return statements in a function
            - the return value is the result of the function call


*/