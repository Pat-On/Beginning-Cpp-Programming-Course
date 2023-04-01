/*


            The switch statement


        switch(integer_control_expr){
            case expression_1: statement_1; break;
            case expression_2: statement_2; break;
            ...
            default: statement_default;
        }




    example:

    enum Color {
        red, green, blue
    }

    Color screen_color {green};



    switch (screen_color) {
        case    red:    cout << "red"; break;
        case    green:  cout << "green"; break;
        case    blue:   cout << "blue"; break;
        default:        cout << "should never execute";
    }


    ----------------------------------
            the switch statement

    - the control expression must evaluate to an integer type
    - the case expressions must be constant expressions that evaluate to integer or integers literals
    - once a mach occurs all following case section are executes UNTIL a BREAK IS REACHED THE SWITCH COMPLETE

    - best practice - provide break statement for each case
    - best practice - default is optional but should be handled 

    

*/