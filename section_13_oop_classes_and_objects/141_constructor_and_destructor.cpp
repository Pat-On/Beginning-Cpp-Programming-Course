/*
            Constructor and Destructor

    Constructor
    - Special member method
    - invoked during object creation
    - Useful for initialization
    - same name as the class
    - no return type is specified
    - can be overloaded


    Player Constructor Example:
    class Player
    {
        private:
            std::string name;
            int health;
            int xp;
        public:
            // Overloaded Constructors
            Player();
            Player(std::string name);
            Player(std::string name, int health, int xp);
    };

    Account Constructors
    class Account
    {
        private:
            std::string name;
            double balance;
        public:
            // Constructors - overloaded
            Account();
            Account(std::string name, double balance);
            Account(std::string name);
            Account(double balance);
    }



    ------------------------------------------------------------------------
        Destructors

    - special member method
    - same name as the class proceeded with a tilde (~)
    - invoked automatically when an object is destroyed
    - no return type and no parameters
    - only 1 destructor is allowed per class - cannot be overloaded
    - useful to release memory and other resources

    Player Destructor

    class Player
    {
        private:
            std::string name;
            int health;
            int xp;
        public:
            Player();
            Player(std::string name);
            Player(std::string name, int health int xp);
            // Destructor
            ~Player();
    }

    Account Destructor

    class Account
    {
        private:
            std::string name;
            double balance;
        public:
            // Constructors - overloaded
            Account();
            Account(std::string name, double balance);
            Account(std::string name);
            Account(double balance);
            // Destructor
            ~Account();
    }


    --------------------------------------------------------
    {
        Player slayer;
        Player frank {"Frank", 100, 4};
        Player hero{"Hero"};
        Player villain {"Villain"};
        // use the objects
        // 4 destructors called
    }

    Player *enemy = new Player("Enemy", 1000, 0); // pointer enemy
    delete enemy; // destructor called;


*/
// Section 13
// Constructors and Destructors

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
    void set_name(std::string name_val)
    {
        name = name_val;
    }
    // Overloaded Constructors - this is so nice! 
    Player()
    {
        cout << "No args constructor called" << endl;
    }
    Player(std::string name)
    {
        cout << "String arg constructor called" << endl;
    }
    Player(std::string name, int health, int xp)
    {
        cout << "Three args constructor called" << endl;
    }
    ~Player()
    {
        cout << "Destructor called for " << name << endl;
    }
};

int main()
{

    {
        Player slayer;
        slayer.set_name("Slayer");
    }

    {
        Player frank;
        frank.set_name("Frank");
        Player hero("Hero");
        hero.set_name("Hero");
        Player villain("Villain", 100, 12);
        villain.set_name("Villain");
    }

    Player *enemy = new Player;
    enemy->set_name("Enemy");

    Player *level_boss = new Player("Level Boss", 1000, 300);
    level_boss->set_name("Level Boss");

    delete enemy;
    delete level_boss;

    return 0;
}
