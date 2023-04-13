/*
                Using Const with Classes

    - Pass arguments to class member methods as const
    - we can also create const objects
    - what happens if we call member functions on const objects
    - const-correctness

    Creating a const object

        - villain is a const object so it's attributes cannot change

            const Player villain {"Villain", 100, 55};

            villain.set_name("nice guy");                   // error

            std::cout << villain.get_name() << std::endl    // error compiles assume that get_name potentially could change the value so error! :>


    What happens when we call member methods on a const object?

            const Player villain {"Villain", 100, 55};

            void display_player_name(const Player &p){
                cout << p.get_name << endl;
            }

            display_player_name(villain);       // error



    Using const with classes

    class Player {
        private:
            ...
        public:
            std::string get_name() const;
            ...
    };



    const-correctness

        const Player villain {"Villain", 100, 555};

        villain.set_name("Nice guy");                   // error

        std::cout << villain.get_name() << std::endl;   // ok


    class Player {
        private:
            ...
        public:
            std::string get_name() const;
            // ERROR if code in get_name modifies this object
            ...
    };



*/
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
    // it has to follow const correctness
    std::string get_name() const
    { // consty method
        return name;
    }
    void set_name(std::string name_val)
    {
        name = name_val;
    }
    // Overloaded Constructors
    Player();
    Player(std::string name_val);
    Player(std::string name_val, int health_val, int xp_val);
};

Player::Player()
    : Player{"None", 0, 0}
{
}

Player::Player(std::string name_val)
    : Player{name_val, 0, 0}
{
}

Player::Player(std::string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val}
{
}

void display_player_name(const Player &p)
{
    cout << p.get_name() << endl;
}

int main()
{
    // it has to follow const correctness
    const Player villain{"Villain", 100, 55};
    Player hero{"Hero", 100, 15};

    // villain.set_name("Super villain");
    cout << villain.get_name() << endl;
    cout << hero.get_name() << endl;

    display_player_name(villain);
    display_player_name(hero);

    return 0;
}
