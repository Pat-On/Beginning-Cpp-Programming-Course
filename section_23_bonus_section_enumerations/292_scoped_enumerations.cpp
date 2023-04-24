/*

                recap:

                enum enum-name : enumerator-type {};

                enum <-- defined an unscoped enumeration


    -----------------------------------------------------------------

                enum class or enum struct       <--- defines a scoped enumeration


        enum class enum-name : enumerator-type{};

    -----------------------------------------------------------------

    Motivation why to use it


    enum Whale {Blue, Beluga, Gray};

    enum Shark {Greatwhite, Hammerhead, Bull, Blue }; <-- name clashes // error blue already defined

    if (Beluga == Hammerhead)       // valid because they are not scoped,
        std::cout << "A beluga whale is equivalent to a hammerhead shark.";


    -----------------------------------------------------------------

    Using if and switch statements with scoped enumerations is exactly identical

    enum class Whale {Blue, Beluga, Gray};

    Whale whale = Whale::Beluga;
                                                      switch(whale) {
    if(whale== Whale::Blue)                               case Whale::Blue:
        std::cout << "Blue Whale"                             std::cout << "Blue whale"; break;
    else if (whale == Whale::Beluga)                      case Whale::Beluga:
        std::cout << "Beluga whale";                          std::cout << "Beluga whale"; break;
                                                      }


    -----------------------------------------------------------------

    There is one difference in scoped enumerators:

        enum class Item {Milk = 350, Bread = 250, Apple = 132};      // underlying type: int

        int milk_code = Item::Milk;             //  Error! (Cannot convert item to int)
        int total = Item::Milk + Item::Bread;   // Error no matching + operator
        std::cout << Item::Milk;                // Error no matching << operator

    ------------------------------------------------------------------


    We have to explicitly cast underlying variables to theirs types

    int milk_code = int(Item::Milk);                    // milk_code 350
    or
    int milk_code = static_cast<int>(Item::Milk);

    int total = int(Item::Milk) + int(Item::Bread);     // total = 600
    std::cout << underlying_type_t<Item>(Item::Milk);   // Displays 350



*/