/*

        103 Function Definition


    - Name
        - the name of the function
        - same rules as for variables
        - should be meaningful
        - usually a verb or verb phrase
    - parameter list
        - the variables passed into the function
        - their types must be specified
    - return type
        - the type of the data tha is returned from the function
    - body
        - the statements that are executed when the function is called
        - in curly braces {}

    ---------------------------------------------------

        example with no parameters

        int function_name ()
        {
            statement(s);
            return 0;
        }

        void function_name (int a)
        {
            statement(s);
            return;
        }

        void say_hello () {
            cout << "Hello" << endl;
        }

    ---------------------------------------------------

        Calling Functions in C++

        - functions can call other functions
        - compiles must know the function details before it is called

        int main() {
            say_hello(); // called before it is defined ERROR
            return 0;
        }

        void say_hello (){
            cout << "Hello" << endl;
        }

*/