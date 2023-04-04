/*

                95 C-style Strings

        Sequence of characters
            - contiguous in memory
            - implemented as an array of characters
            - terminated by a null character (null) <- he called it sentinel value
                - null - character with a value of zero
            - referred to as zero or null terminated strings
        
        String literal
            - sequence of character in double quotes, e.g. "Frank"
            - constant 
            - terminated with null character



            "C++ is fun"

    RAM:    C + + _ i s _ f u n \0        

    char my_name[] {"Frank"};

    Ram:    F r a n k \0

    my_name[5] = 'y'; // Problem

-------------------------------------------------

        char my_name[8] {"Frank"};

RAM:    F r a n k \0 \0 \0

    my_name[5] = 'y'; // ok



--------------------------------------------------------------------------------------


            char my_name[8];
        
        _ _ _ _ _ _ _ _

        my_name = "Frank";  // Error - because they are working based on the addressed of the first element, so you can not do that
                                                            you need to copy element by element

        strcpy(my_name, "Frank"); // ok

------------------------------------------------------------------------

    Functions that work with C-style Strings

        - Copying                   all these function work based on the one simple case - at the end there is \0 / null character as a stop
        - Concatenation
        - Comparison
        - Searching
        - and others 

------------------------------------------------------------------------

    #include<cstring>

    a few examples

    char str[80];

    strcpy(str, "hello "); // COPY

    strcat(str, "there "); // concatenate

    cout << strlen(str);    // 11

    strcmp(str, "Another");     // > 0 


------------------------------------------------------------------------

    #include<cstdlib>

    General purpose functions

    - include functions to convert c-style strings to 
        - integer
        - float
        - long
        - etc


        



*/