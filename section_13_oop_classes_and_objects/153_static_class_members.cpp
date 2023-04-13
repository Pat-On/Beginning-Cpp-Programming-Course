/*
                Static Class Members

    - Class data members can be declared as static
        - a single data member that belongs to the class, not the objects
        - useful to store class-wide information

    - class functions can be declared as static
        - independent of any objects
        - can be called using the class name

---------------------------------------------------------------------------------

    Player class - static members

    class Player {
        private:
            static int num_players;

        public:
            static int get_num_players();
            ...
    }

    Player class - initialize the static data

        Typically in Player.cpp

        #include "Player.h"

        int Player::num_player = 0;

        int Player::get_num_players(){
            return num_players;
        }

        Player Class - updaTE THE COnstructor


        Player::Player(std::string name_val, int health_val, int xp_val)
                : name {name_val}, health{health_val}, xp{xp_val}{
                    ++num_players;
                }



        Player Class - Destructor

        Player::~Player() {
            --num_players;
        }
*/