/*

                        Stream Manipulators

    - Streams have useful member functions to control formatting
    - can be used on input an d output streams
    - the time of the effect on the stream varies
    - can be used as member function or as a manipulator
        std::cout.width(10);            // Member function
        std::cout << std::setw(10);     // manipulator
    - We will focus on manipulator usage

    ------------------------------------------------------------------------------

    Common stream manipulators (preview to next lectures)

    - Boolean
        - boolalpha,
        - noboolalpha
    - Integer
        - dec
        - hex
        - oct
        - showbase
        - noshowbase
        - showpos
        - noshowpos
        - uppercase
        - nouppercase

    - Floating point
        - fixed
        - scientific
        - setprecision
        - showpoint
        - noshowpoint
        - showpos
        - noshowpos

    - Field width, justifiaction and fill
        - setw
        - left
        - right
        - internal
        - setfill

    - Others
        - endl
        - flush
        - skipws
        - noskipws
        - ws



*/