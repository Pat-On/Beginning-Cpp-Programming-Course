/*

        Overloading Functions   - great way of abstraction

        - We can have functions that have different parameter lists that have the same name
        - Abstraction mechanism since we can just think "print" for example
        - A type of polymorphism
            - We can have the same name work with different date types to execute similar behavior
        - the compile must be able to tell the functions apart based on the parameter lists and argument supplied

        ------------------

        Example

            int add_numbers(int, int);              // add ints
            double add_numbers(double, double);     // add doubles

            int main() {
                cout << add_numbers(10, 20) << endl;        // integer
                cout << add_numbers(10.0, 20.0) << endl;    // double


                return 0;
            }



        -----------------

            Example;
                int add_numbers(int a, int b){
                    return a + b;
                }

                double add_numbers(double a, double b){
                    return a + b;
                }

        --------------------
        You need to implement all of them later on:

            void display(int n);
            void display(double d);
            void display(std::string s);
            void display(std::string s, std::string t);
            void display(std::vector<int> v);
            void display(std::vector<std::string> v);


        ------------------------------

        return type is not considered

        int get_value();
        double get_value();


        // error

        cout << get_value() << endl; // which one?

        ------------------------------

        basically:

            using the same name for different functions, that are going to be chosen by the type of the input


            characters - are changed into the int
            if double is implemented and you are passing float then float is going to be converted to double <------------- REMEMBER ABOUT CONVERSION


        // PROBLEM

            - with a default values
                 void print(int = 100);
                 void print(double = 125.5);        <--- compiles is going to give you error because can not decide which function to choose

*/

// answer to exercise:
#include <iostream>
#include <cmath>
using namespace std;

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE YOUR FUNCTION PROTOTYPES BELOW THIS LINE----

int find_area(int);
double find_area(double, double);

//----WRITE YOUR FUNCTION PROTOTYPES ABOVE THIS LINE----
//----DO NOT MODIFY THE CODE BELOW THIS LINE----

void area_calc()
{

    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR FUNCTION CALLS BELOW THIS LINE----

    int square_area = find_area(2);
    double rectangle_area = find_area(4.5, 2.3);

    //----WRITE YOUR FUNCTION CALLS ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----

    cout << "The area of the square is " << square_area << "\n"
         << "The area of the rectangle is " << rectangle_area;
}

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE YOUR FUNCTION DEFINITIONS BELOW THIS LINE----
int find_area(int side_length)
{
    return pow(side_length, 2); // return side_length*side_length will also work
}

double find_area(double length, double width)
{
    return length * width;
}
