# 36 Section Overview

The structure of a C++ Program

- Basic Components
- Preprocessor Directives
- The main function
- Namespaces
- Comments
- Basic I/O

# 37 Overview of the structure of a C++ Program

https://en.cppreference.com/w/cpp/keyword
C++ ~ 90
JAVA ~ 50
C ~ 32
Python ~ 33

# 38 #include Preprocessor Directive

- strips all the comments from the source
- comments replace by ' '
- and then execute preprocessed directive
  - #include <iostream>
  - #include "myfile.h"

Conditional Compilation
Read more: https://www.ibm.com/docs/en/i/7.4?topic=cd-conditional-compilation

# 39 Comments

// - single

/_ - multiline
_/

# 40 The main() function

- every C++ program must have exactly 1 main () function
- starting point of program execution
- return 0 indicates successful program execution
- 2 versions that are both valid

```
int main ()
{
    // code

    return 0;
}
```

program.exe

```
int main(int argc, char *argv[])
{
    // code

    return 0;
}
```

argc - argument count
argv - argument vector

program.exe argument1 argument2

# 41 Namespaces

- why `std::cout` and not just cout?
- what is a naming conflict
- names ggiven to parts of code to help reduce naming conflict
- `std` is the name for the C++ `standard` namespace
- third-party frameworks will have their own namespaces
- scope resolution operator `::`
- how can we use these namespaces?

example:

    - `std::cout`
    - `std::cin`

    or

    - `using namespace std`
    - `cin`
    - `cout`


    or

    - `using std::cout;`
    - `using std::cin;`
    - `using std::endl;

    - cout
    - 