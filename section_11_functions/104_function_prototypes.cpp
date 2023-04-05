/*

            Function Prototypes

        - the compiles must 'know' about a function before it is used


            - define functions before calling them
                - ok for small programs
                - not a practical solution for a large programs
            - use function prototypes
                - tells the compiles what it needs to know without a full function definition
                - also called forward declarations
                - places at the beginning of the program
                - also used in our own header files (.h) - more about this later


    ----------------------

    int function_name();    // prototype

    int function_name()
    {
        statements;
        return 0;
    }


    ----------------------

    int function_name (int);    // prototype
                                // or
    int function_name (int a);  // prototype

    int function_name(int a)
    {
        statements;
        return 0;
    }


    ----------------------

    void function_name();    // prototype

    void function_name()
    {
        statements;
    }

    ----------------------

    void say_hello();

    int main () {
        say_hello();    // ok
        say_hello(100); // error
        cout << say_hello()l   // error - because function is not returning anything!
                            // no return value
    }

*/

#include <iostream>

using namespace std;

// Function prototypes - errors without it
double calc_volume_cylinder(double radius, double height);
double calc_area_circle(double);
void area_circle();
void volume_cylinder();

const double pi = 3.14159;

int main()
{
    area_circle();
    volume_cylinder();
    return 0;
}

double calc_volume_cylinder(double radius, double height)
{
    // return pi *radius * radius * height;
    return calc_area_circle(radius) * height;
}

double calc_area_circle(double radius)
{
    return pi * radius * radius;
}

void area_circle()
{
    double radius{};
    cout << "\nEnter the radius of the circle: ";
    cin >> radius;
    cout << "The area of a circle with radius " << radius << " is " << calc_area_circle(radius) << endl;
}

void volume_cylinder()
{
    double radius{};
    double height{};
    cout << "\nEnter the radius of the cylinder: ";
    cin >> radius;
    cout << "Enter the height of the cylinder: ";
    cin >> height;
    cout << "\nThe volume of a cylinder with radius " << radius << " and height " << height << " is " << calc_volume_cylinder(radius, height) << endl;
}
