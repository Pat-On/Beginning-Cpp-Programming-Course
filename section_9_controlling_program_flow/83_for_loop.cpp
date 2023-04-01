/*


        83 For Loop


    Syntax

    for (initialization ; condition ; increment)
        statement;


    for (initialization ; condition ; increment) {
        statement(s)
    }


    int i {0};

    for (i = 1 ; i <= 5 ; ++i)
        cout << i << endl;


    initialization style
        for (int i {1} ; i <= 5 ; ++i)
            cout << i << endl;

    assignment style
        for (int i = 1 ; i <= 5 ; ++i)
            cout << i << endl;


-------------------------------------------------------------------------


            COMA OPERATOR


        for (int i {1}, j {5} ; i <=5 ; ++i , ++j){
            cout << i << " * " << j << " : " << (i * j) << endl;
        }

------------------------------------------------------------------------------

    some other details....

        - the basic for loop is very cl,ear and concise
        - since the for loop's expressions are all optyion, it is possible to have
            - no initialization
            - no test
            - no increment

                for (; ; ){
                    cout << "Endless loop" << endl;
                }



vector <int> nums {10, 20,30,40, 50};
for (int i {0} : i < nums.size(); ++i) {
    count << nums[i] << endl
}


// fixing small warning
for (unsigned i {0} : i < nums.size(); ++i) {
    count << nums[i] << endl
}


*/