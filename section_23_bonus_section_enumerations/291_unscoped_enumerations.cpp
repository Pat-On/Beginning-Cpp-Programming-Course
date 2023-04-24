/*

                    Unscoped Enumerations

        enum-key enum-name : enumeration-type {};

            enum-key - defines the scope of the enumeration


        enum enum-name : enumeration-type {};

            enum - defines an unscoped enumeration

    -------------------------------------------------------------------------------


    Using if and switch statements with unscoped enumerations


    State state = get_state();

    if (state == Nominal)                   // accessed first
        initiate(Launch);
    else if (state == Inclement_weather)    // accessed second
        initiate(Hold);
    else if (state == Engine_Failure)       // accessed last
        initiate(Abort);

    -------------------------------------------------------------------------------

    for 5 or more cases they are implemented as a jump-table that provide equal access time <-- interesting

    switch (state) {
        case Engine_Failure:        // Equal access time
            initiate(Abort);
            break;

        case Inclement_weather:        // Equal access time
            initiate(Hold);
            break;

        case Nominal:
            initiate(Launch);        // Equal access time
            break;
    }


    -------------------------------------------------------------------------------

    Using cin and cout with unscoped enumerations

    enum State {Engine_Failure, Inclement_Weather, Nominal};

    State state;

    std::cin >> state;      // not allowed using standard extraction operator


    -------------------------------------------------------------------------------

    enum State {Engine_Failure, Inclement_Weather, Nominal};  // underlying type: int

    std::underlying_type_t<State> user_input;   // <---- underlying_type_t is going to deduct what underlying type is used in enum
    std::cin >> user_input;                     // userInput = 3
    State state = State(user_input);            // state = 3


    implement our own check if it is corrsponding to our enumerations


    -------------------------------------------------------------------------------

    enum State {Engine_Failure, Inclement_Weather, Nominal};  // underlying type: int

    // overloading extraction operator the operator>>

    std::istream& operator>> (std::istream& is, State& state) {
        std::underlying_type_t<State> user_input;           // type int
        is >> user_input;

        switch (user_input) {
            case Engine_failure:        state = State(user_input); break;

            case Inclement_Weather:     state = State(user_input); break;

            case Nominal:               state = State(user_input); break;

            default                     std::cout << "User input is not a valid state. ";

        }

        return is;
    }

    -------------------------------------------------------------------------------

    using cin and cout with unscoped enumerations

    State state;

    std::cin >> state;          // Valid with overloaded extraction operator

    -------------------------------------------------------------------------------

    using cin and cout with unscoped enumerations

    State state = Engine_Failure;

    std::cout << state;          // Displays 0 - we are not display the enumeration name just underlying value


    -------------------------------------------------------------------------------

    enum State {Engine_Failure, Inclement_Weather, Nominal};

    State state = Engine_Failure;

    switch (state) {    // Displays "Engine Failure"
        case Engine_Failure:            std::cout << "Engine Failure"; break;
        case Inclement_Weather:         std::cout << "Inclement Weather"; break;
        case Nominal:                   std::cout << "Nominal"; break;
        default:                        std::cout << "Unknown";
    }

    -------------------------------------------------------------------------------

    By overloading insertion operator:

    enum State {Engine_Failure, Inclement_Weather, Nominal};

    std::ostream& operator<< (std::ostream& os, State& state) {
        switch (state) {
            case Engine_Failure:        os << "Engine Failure"; break;
            case Inclement_Weather:     os << "Inclement Weather"; break;
            case Nominal:               os << "Nominal"; break;
            default:                    os << "Unknown";
        }

        return os;
    }


    -------------------------------------------------------------------------------

    State state = Engine_Failure;

    std::cout << state;         /// Displays "Engine Failure"

*/