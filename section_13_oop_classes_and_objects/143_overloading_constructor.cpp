/*
        Overloading Constructors

    - Classes can have as many constructors as necessary
    - Each must have a unique signature - just overloading!
    - Default constructor is no longer compiler-generated once another constructor is declared


    Overloaded Constructors

    class Player
    {
        private:
            std::string name;
            int health;
            int xp;
        public:
            // overloaded constructors
            Player();
            Player(std::string name_vale);
            Player(std::string name_val, int health_val, int xp_val);
    }

    Overloaded constructors

    Player::Player(){
        name = "None";
        health = 0;
        xp = 0;
    }

    Player::Player(std::string name_val){
        name = name_val;
        health = 0;
        xp = 0;
    }

    Player::Player(std::string name_val, int health_val, int xp_val){
        name = name_val;
        health = health_val;
        xp = xp_val;
    }


    -----------------------------------------------------------------------
                3 ways of creating the object

    Player empty;                                   // None, 0, 0

    Player hero {"Hero"};                           // Hero, 0, 0
    Player villain {"Villain"};                     // Villain, 0, 0

    Player frank {"Frank", 100, 4};                 // Frank, 100, 4

    Player *enemy = new Player("Enemy", 1000, 0);   // Enemy, 1000, 0
    delete enemy;

*/