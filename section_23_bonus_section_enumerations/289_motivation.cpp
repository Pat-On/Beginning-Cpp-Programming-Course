/*

                Motivation


    - What is an enumeration?

    A user-defined type that models a set of constant integral values

    - The days of the week
    - the months of the year
    - the suits in a deck of cards
    - the values in a deck of cards
    - states of a system
    - the directions on a compass

    ------------------------------------------------------------------------------


    Prior to enumerated types
        - unnamed numerical constants
        - magic numbers

        - These constants would be used as conditionals in control statements
        - often, one would have no idea what an algorithm was doing

        - As a result, many algorithms suffered from low readability and high numbers of logic errors

    ------------------------------------------------------------------------------

    Readability

    int state
    std::cin >> state;

    if (state == 0)
        initiate(3);
    else if (state == 1)
        initiate(4)
    else if (state == 1)
        initiate(5)

    ------------------------------------------------------------------------------

    enum State {Engine_Failure = 0, Inclement_Weather = 1, Nominal = 2};
    enum Sequence {Abort = 3, Hold = 4, Launch = 5};

    int user_input;
    std::cin >> user_input;
    State state = State(user_input);

    if (state == Engine_Failure)
        initiate(Abort);
    else if (state == Inclement_Weather)
        initiate(Hold);
    else if (state == Nominal)
        initiate(Launch);

    ------------------------------------------------------------------------------

    Algorithmic Correctness

    int get_state(){
            return state_of_fridge;
    }

    int getState(){
        return state_of_rocker;
    }

    int state = get_state();

    if (state == 0)
        initiate(3);
    else if (state == 1)                <---- compiles no error!
        initiate(4)
    else if (state == 1)
        initiate(5)

    ------------------------------------------------------------------------------

    Algorithmic Correctness

    int get_state(){
            return state_of_fridge;
    }

    int getState(){
        return state_of_rocker;
    }
    int state = get_state();

    if (state == Engine_Failure)
        initiate(Abort);
    else if (state == Inclement_Weather)        <---- does not compile! ERROR! Rocket is save!
        initiate(Hold);
    else if (state == Nominal)
        initiate(Launch);

*/