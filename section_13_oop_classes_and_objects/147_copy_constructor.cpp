/*
                Copy Constructor

    When objects are copied C++ must create a new object from an existing object

    when is a copy of an object made?
        - passing object by value as a parameter
        - returning an object from a function by value
        - constructing one object based on another of the same class

    C++ must have a way to accomplishing this so it provides a compiler-defined copy constructor if you do not



        ------------------------ Pass object by-value ------------------------

    Player hero {"Hero", 100, 20};

    void display_player(Player p) {
        // p is a COPY of hero in this example
        // use p
        // destructor for p will be called
    }

    display_player(hero);

        ----------------------------------------------------------------------

    Player enemy;

    Player create_super_enemy() {
        Player an_enemy{"Super Enemy", 1000, 1000};
        return an_enemy; // a copy of an enemy is returned
    }

    enemy = create_super_enemy();


            ---------------------------------------------------------------------

                Construct one object based on another

            Player hero {"Hero", 100, 100};
            Player another_hero {hero}; //  A COPY OF HERO IS MADE

----------------------------------------------------------------------------------------------------
----------------------------------------------------------------------------------------------------
----------------------------------------------------------------------------------------------------

            Copy Constructor

    - if you do not provide your own way of copying objects by value then the compiler provides a default way of copying objects
    - copies the values of each data member to the new object
        - default memberwise copy
    - perfectly fine in many cases
    - beware if you have a poinmter data member
        - pointer will be copied
        - not what it is pointing to
        - shallow vs deep copy


-------------------------------------------------------------------
            Best practices

    - provide a copy constructor when your class has raw pointer members
    - provide the copy constructor with a const reference parameter
    - use STL classes as they already provide copy constructors
    - avoid using raw pointer data members if possible

----------------------------------------------------------------------------------------------------

            Declaring the copy constructor

    Type::Type(const Type &source); // passing by reference, const because it prevent any modification

    Player::Player(const Player &source);

    Account::Account(const Account &source);


            Implementing the Copy constructor

    Type::Type(const Type &source){
        // code or initialization list to copy the object
    }



    Player

    Player::Player(const Player &source)
          : name{source.name},
            health {source.health},
            xp {source.xp}

*/

// Section 13
// Copy Constructor
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
    std::string get_name() { return name; }
    int get_health() { return health; }
    int get_xp() { return xp; }
    Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
    // Copy constructor - prototype
    Player(const Player &source);
    // Destructor - prototype
    ~Player() { cout << "Destructor called for: " << name << endl; }
};

Player::Player(std::string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val}
{
    cout << "Three-args constructor for " + name << endl;
}

// :: scope resolution operator
Player::Player(const Player &source)
    // : name(source.name), health(source.health), xp{source.xp} {
    : Player{source.name, source.health, source.xp}
{
    cout << "Copy constructor - made copy of: " << source.name << endl;
}

void display_player(Player p)
{
    cout << "Name: " << p.get_name() << endl;
    cout << "Health: " << p.get_health() << endl;
    cout << "XP: " << p.get_xp() << endl;
}

int main()
{
    Player empty{"XXXXXX", 100, 50};

    Player my_new_object{empty};

    display_player(empty);

    Player frank{"Frank"};
    Player hero{"Hero", 100};
    Player villain{"Villain", 100, 55};

    return 0;
}