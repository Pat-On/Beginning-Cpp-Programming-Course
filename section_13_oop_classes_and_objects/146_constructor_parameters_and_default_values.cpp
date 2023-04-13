
/*

                Default Constructor Parameters

        - can often simplify our code and reduce the number of overloaded constructors
        - same rules apply as we learned with non-member functions


        Example:

        class Player
        {
            private:
                std::string name;
                int health;
                int xp;
            public:
                // Constructor with default parameter values
                Player(std::string name_val = "None",
                        int health_val = 0,
                        int xp_val = 0
                        );
        };


        Player::Player(std::string name_val, int health_val, int xp_val)
                : name {name_val}, health {health_val}, xp {xp_val}{

                }

        Player empty;           // None, 0, 0
        Player frank {"Frank"}  // Frank, 0, 0
        Player villain {"Villain", 100, 55} // Villain, 100, 55
        Player hero {"Hero", 100}

        // Note what happens if you declare a no-args constructor

*/
// Section 13
// Default Constructor Parameters
#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
    std::string name;
    int health;
    int xp;

public:
    // default params
    // prototyping
    Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
    //  Player() {}    // Will cause a compiler error
};

// because of default values we do not need to provide all params
Player::Player(std::string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val}
{
    cout << "Three-args constructor" << endl;
}

int main()
{

    Player empty;
    Player frank{"Frank"};
    Player hero{"Hero", 100};
    Player villain{"Villain", 100, 55};

    return 0;
}
