/*

        Class Member Access Modifiers


            public private and protected

            public
                - accessible everywhere

            private
                - accessible only by members or friend of the class

            protected
                - used with inheritance - we will talk about it in the next section


    ---------------------------------------


        class Class_Name
        {
            public
            /// declaration(s);
        }

        class Class_Name
        {
            private
            /// declaration(s);
        }


    ---------------------------------------

    Creating Objects

    Examples

    Player frank;
    frank.name = "Frank"; // compiler error because it is private
    frank.health = 100;  // compiler error because it is private

    frank.talk("Ready to battle");  // ok
*/

#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
    // attributes
    string name{"Player"};
    int health;
    int xp;

public:
    // methods
    void talk(string text_to_say) { cout << name << " says " << text_to_say << endl; }
    bool is_dead();
};

int main()
{
    Player frank;
    //  frank.name = "Frank";
    //  cout << frank.health << endl;
    frank.talk("Hello there");
    return 0;
}
