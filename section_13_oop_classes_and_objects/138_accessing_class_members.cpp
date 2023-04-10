/*

            Accessing Class Members


    - We can access
        - class attributes
        - class methods
    - some class members will not be accessible (more on that later)
    - we need an object to access instance variables

     If we have an object(dot operator)
        - using the dot operator

            Account frank_account;
            frank_account.balance;
            frank_account.deposit(1000.00);

-------------------------------------------------------------------------------------------------------------------------

    If we have a pointer to an object (member of pointer operator)
        - Dereference the pointer then use the dot operator

        Account *frank_account = new Account();

        (*frank_account).balance;
        (*frank_account).deposit(1000.00);

        Or use the member of pointer operator(arrow operator)

        Account *frank_account = new Account();

        frank_account->balance;
        frank_account->deposit(1000.00);

-------------------------------------------------------------------------------------------------------------------------



*/

// Section 13
// Accessing Class Members
#include <iostream>
#include <string>

using namespace std;

class Player
{
public:
    // attributes
    string name;
    int health;
    int xp;

    // methods
    void talk(string text_to_say)
    {
        cout << name << " says " << text_to_say << endl;
    }
    bool is_dead();
};

class Account
{
public:
    // attributes
    string name;
    double balance;

    // methods
    bool deposit(double bal)
    {
        balance += bal;
        cout << "In deposit" << endl;
    }
    bool withdraw(double bal)
    {
        balance -= bal;
        cout << "In withdraw" << endl;
    }
};

int main()
{
    Account frank_account;
    frank_account.name = "Frank's account";
    frank_account.balance = 5000.0;

    frank_account.deposit(1000.0);
    frank_account.withdraw(500.0);

    Player frank;
    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 12;
    frank.talk("Hi there");

    // only difference compare to languages that I know
    Player *enemy = new Player;
    // dereferencing syntax
    (*enemy).name = "Enemy";
    (*enemy).health = 100;
    // arrow operator (pointer to player)
    enemy->xp = 15;

    // calling method through the pointer
    enemy->talk("I will destroy you!");

    return 0;
}
