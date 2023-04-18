/*

            Pure Virtual Functions and Abstract Classes

    Abstract class
        - cannot instantiate objects
        - these classes are used as base classes in inheritance hierarchies
        - often referred to as Abstract Base Classes

    Concrete class
        - Used to instantiate objects from
        - all their member functions are defined
            - checking Account, savings account
            - faculty, staff
            - enemy, level boss


    Abstract Base class
        - too generic to create objects from
            - shape, employee, account, player

        - serves as parent to Derived classes that may have objects
        - contains at least one pure virtual function


    Pure virtual functions and abstract classes

    - Pure virtual function
        - used to make a class abstract
        - specified with "=0" in its declaration

            virtual void function() = 0; // pure virtual function

        - typically do not provide implementations

    - Pure virtual function
        - Derived classes MUST override the base class
        - if the Derived class does not override then the Derived class is also abstract
        - used when it does not make sense for a base class to have an implementation
            - but concrete classes must implement it

            virtual void draw () = 0;   // Shape
            virtual void defend () = 0; // Player


---------------------------------------------------------------------------------------

            Pure Virtual functions and abstract classes

                                                                                        Shape Class Hierarchy

                                        SHAPE

                                    +draw: void
                                    +rotate: void

        Open_Shape                                              Closed_Shape
            |
            |
        Line                                            Circle                  Square

---------------------------------------------------------------------------------------

        class Shape {                               // Abstract
        private:
            // attributes common to all shaper
        public:
            virtual void draw() = 0;            // pure virtual function
            virtual void rotate() = 0;          // pure virtual function
            virtual ~Shape();
            . . .
        };


        class Circle: public Shape {
        private:
            // attributes for a circle
        public:
            virtual void draw() override {
                // code to draw a circle
            }

            virtual void rotate() override{
                // code to rotate a circle
            }
            virtual ~Circle();
            . . .
        };

---------------------------------------------------------------------------------------

        Abstract Base Class

            - Cannot be instantiated

                Shape shape;                // Error
                Shape *pts = new Shape();   // Error

            - We can use pointers and references to dynamically refer to concrete classes derived from them

                Shape *ptr = new Circle();

                ptr->draw();
                ptr->rotate();


    We can use base class pointer and references to achieve dynamic polymorphism!

*/

// Section 16
// Pure virtual functions and abstract base classes
#include <iostream>
#include <vector>

class Shape
{ // Abstract Base class
private:
    // attributes common to all shapes
public:
    virtual void draw() = 0;   // pure virtual function
    virtual void rotate() = 0; // pure virtual function
    virtual ~Shape() {}
};

class Open_Shape : public Shape
{ // Abstract class
public:
    virtual ~Open_Shape() {}
};

class Closed_Shape : public Shape
{ // Abstract class
public:
    virtual ~Closed_Shape(){};
};

// ------------------------------------------------------------------------------------

class Line : public Open_Shape
{ // Concrete class
public:
    virtual void draw() override
    {
        std::cout << "Drawing a line" << std::endl;
    }
    virtual void rotate() override
    {
        std::cout << "Rotating a line" << std::endl;
    }
    virtual ~Line() {}
};

class Circle : public Closed_Shape
{ // Concrete class
public:
    virtual void draw() override
    {
        std::cout << "Drawing a circle" << std::endl;
    }
    virtual void rotate() override
    {
        std::cout << "Rotating a circle" << std::endl;
    }
    virtual ~Circle() {}
};

class Square : public Closed_Shape
{ // Concrete class
public:
    virtual void draw() override
    {
        std::cout << "Drawing a square" << std::endl;
    }
    virtual void rotate() override
    {
        std::cout << "Rotating a square" << std::endl;
    }
    virtual ~Square() {}
};

// ------------------------------------------------------------------------------------

void screen_refresh(const std::vector<Shape *> &shapes) // &shapes - passed by reference
{
    std::cout << "Refreshing" << std::endl;
    for (const auto p : shapes)
        p->draw();
}

int main()
{
    //    Shape s;                      // error can not declare Shape - abstract class
    //    Shape *p = new Shape();       // error can not declare Shape - abstract class

    //        Circle c;                 // staticly bind
    //        c.draw();

    //    Shape *ptr = new Circle();    // Shape pointer and instate Circle
    //    ptr->draw();                  // dynamicly polymorphism and function is bind at run time
    //    ptr->rotate();

    Shape *s1 = new Circle(); // base class pointers that point to our concrete derived classes - nice
    Shape *s2 = new Line();
    Shape *s3 = new Square();

    std::vector<Shape *> shapes{s1, s2, s3};

    //    for (const auto p: shapes)
    //        p->draw();

    screen_refresh(shapes);

    delete s1;
    delete s2;
    delete s3;

    return 0;
}
