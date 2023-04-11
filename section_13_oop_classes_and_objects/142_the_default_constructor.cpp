/*
            The Default Constructor

    - Does not expect any arguments
        - also called the no-args constructor
    - if your write no constructors at all for a class
        - C++ will generate a Default Constructor that does nothing
    - called when you instantiate a new object with no arguments

    Player frank;
    Player *enemy = new Player;


    ------------------------------------------
    Account - using default constructor

    class Account
    {
        private:
            std::string name;
            double balance;
        public:
            bool withdraw(double amount);
            bool deposit(double amount);
    };

    Account frank_account;

    Account *mary_account = new Account;
    delete mary_account;


    --------------------------------------------------

    Account - user-defined no-args constructor

    class Account
    {
        private:
            std::string name;
            double balance;
        public:
            Account(){
                name = "None";
                balance = 0.0;
            }
        bool withdraw(double amount);
        bool deposit(double amount);
    }


    ---------------------------------------------------------------------------

        Declaring a Class

    Account - no default constructor

    class Account
    {
        private:
            std::string name;
            double balance;
        public:
            // if you are going to specify this, default constructor is not specified
            // so you need to write overload by yourself!
            Account(std::string name_val, double bal){
                name = name_val;
                balance = bal;
            }

        bool withdraw(double amount);
        bool deposit(double amount);
    }


    conclusion

    Account frank_account // error

    Account *mary_account = new Account; // error

    Account bill_account {"Bill", 15000.0}; //ok

*/

// Section 13
// Default Constructors
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
    std::string get_name()
    {
        return name;
    }

    // constructors! OVERLOADING
    Player()
    {
        name = "None";
        health = 100;
        xp = 3;
    }
    Player(std::string name_val, int health_val, int xp_val)
    {
        name = name_val;
        health = health_val;
        xp = xp_val;
    }
};

int main()
{
    Player hero;
    Player frank{"Frank", 100, 13};
    frank.set_name("Frank");
    cout << frank.get_name() << endl;
    return 0;
}
