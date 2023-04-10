/*

                                    Const and Pointers


    Passing pointers to a function

    const and Pointers

    - There are several ways to qualify pointers using const
        - pointers to constants
        - constant pointers
        - constant pointers to constants

    ------------------------------------------------------------------------

        Pointers to constants
        - the data pointed to by the pointers is constant and cannot be changed
        - the pointer itself can change and point somewhere else

        int high_score {100};
        int low_score {65};

        const int *score_ptr {&high_score};

        *score_ptr = 86;    // error
        score_ptr = &low_score // ok

    ------------------------------------------------------------------------

        Constant pointers

        - the data pointed to by the pointers can be changed 
        - the pointer itself cannot change and point somewhere else

        int high_score {100};
        int low_score {65};
        int *const score_ptr {&high_score};

        *score_ptr = 86;        // ok
        score_ptr = &low_score  // error


    ------------------------------------------------------------------------

                Constant pointers to constants

    - the data pointed to by the pointer is constant and cannot be changed
    - the pointer itself cannot change and point somewhere else

        int hight_score {100};
        int low_score {65};

        const int *const score_ptr {&high_score};

        *score_ptr = 86;        // error
        score_ptr = &low_score  // error
*/