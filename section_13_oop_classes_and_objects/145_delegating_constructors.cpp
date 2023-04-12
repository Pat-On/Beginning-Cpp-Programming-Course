/*

            Delegating Constructors

    - Often the code for constructors is very similar

    - duplicated code can lead to errors

    - C++ allows delegating constructors
        - code for one constructor can call another in the initialization list
        - avoids duplicating code

    ---------------------------------------------

    class Player
    {
        private:
            std::string name;
            int health;
            int xp;
        public:
            // overload constructors
            Player();
            Player(std::string name_val);
            Player(std::string name_val, int health_val, int xp_val);
    }

    Player::Player()
        : name{"None"}, health{0}, xp{0}{
    }

    Player::Player(std::string name_val)
         : name{name_val}, health{0}, xp{0}{
    }

    Player::Player(std::string name_val, int health_val, int xp_val)
         : name{name_val}, health{health_val}, xp{xp_val}{
    }

    ---------------------------------------------
    Player::Player(std::string name_val, int health_val, int xp_val)
         : name{name_val}, health{health_val}, xp{xp_val}{
    }

    Player::Player()
        : Player {"None", 0, 0}{

        }

    Player::Player(std::string name_val)
        : Player {name_val, 0, 0}{

        }

    !! It works only with initialization list! Interesting

*/

// Section 13
// Delegating Constructors
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
    // Overloaded Constructors
    Player();
    Player(std::string name_val);
    Player(std::string name_val, int health_val, int xp_val);
};

Player::Player()
    // we are calling 3 args constructor
    : Player{"None", 0, 0}
{
    cout << "No-args constructor" << endl;
}

Player::Player(std::string name_val)
    // we are calling 3 args constructor
    : Player{name_val, 0, 0}
{
    cout << "One-arg constructor" << endl;
}

// this guys is going to do entire work
Player::Player(std::string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val}
{
    cout << "Three-args constructor" << endl;
}

int main()
{

    Player empty;
    Player frank{"Frank"};
    Player villain{"Villain", 100, 55};

    return 0;
}
