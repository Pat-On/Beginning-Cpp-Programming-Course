/*
        Constructor Initialization Lists

    - so far all data member values have been set in the constructor body

    - constructor initialization lists
        - are more efficient
        - initialization list immediately follows the parameter list
        - initializes the data members as the object is created!
        - order of initialization is the order of declaration in the class


    ---------
    class Player
    {
        private:
            std::string name;
            int health;
            int xp;
        public:
            //overloaded constructors
            Player();
            Player(std::string name_val);
            Player(std::string name_var, int health_val, int xp_val);
    }


    -------------------------------------------

    Player()

    Previous way:
    Player::Player(){
        name = "None"; // assignment not initialization
        health = 0;     // so the player was already initialized and then we are assigning the values
        xp = 0;
    }


    -----------------------------------

    Better way:
    Player::Player()
        : name{"None"}, health{0}, xp{0} { // initial data member and data values when they are created!

        }


    ---------------------------------------------------------------------------------------------------------------------------

    Player(std::string)


    Previous Way:

    Player::Player(std::string name_val){
        name = name_val;    // assignment not initialization
        health = 0;         // so this is process of initializing data and then repeating it and assign it during the process of passing values and reassigning it. - not efficient
        xp = 0;
    }

    Better Way:
    Player::Player(std::string name_val)
        : name{name_val}, health{0}, xp{0}{ // this is the order of initialization: name->health->xp

    }


*/

// Section 13
// Constructor Initialization Lists
#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
    std::string name{"XXXXXXX"};
    int health;
    int xp;

public:
    // Overloaded Constructors
    Player();
    Player(std::string name_val);
    Player(std::string name_val, int health_val, int xp_val);
};

Player::Player()
    : name{"None"}, health{0}, xp{0}
{
}

Player::Player(std::string name_val)
    : name{name_val}, health{0}, xp{0}
{
}

Player::Player(std::string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val}
{
}

int main()
{

    Player empty;
    Player frank{"Frank"};
    Player villain{"Villain", 100, 55};

    return 0;
}
