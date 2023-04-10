/*

Declaring a Class

class Class_Name
{
    // declaration(s);
};


class Player
{
    //attributes
    std::string name;
    int health;
    int xp;

    // methods
    void talk(std::string text_to_say);

    bool is_dead();
}

-------------------------------------------------

    Creating Objects

        Player frank;
        Player hero;

        Player *enemy = new Player();
        delete enemy;

        Account frank__account;
        Account jim_account;

        Account accounts[] {frank_account, jim_account};

        std::vector<Account> accounts1 {frank_account};
        accounts1.push_back(jim_account);

*/

// Section 13
// Declare Classes and Objects
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player
{
    // attributes
    string name{"Player"};
    int health{100};
    int xp{3};

    // method prototypes
    void talk(string);
    bool is_dead();
};

class Account
{
    // attributes
    string name{"Account"};
    double balance{0.0};

    // method prototypes
    bool deposit(double);
    bool withdraw(double);
};

int main()
{
    Account frank_account;
    Account jim_account;

    Player frank;
    Player hero;

    Player players[]{frank, hero};

    vector<Player> player_vec{frank};
    player_vec.push_back(hero);

    Player *enemy{nullptr};
    enemy = new Player;

    delete enemy;

    return 0;
}