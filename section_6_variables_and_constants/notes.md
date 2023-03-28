# 43 Section Overview

Variables and constants

- declaring variables
- C++ primitive types
  - integer
  - floating point
  - boolean
  - character
- `sizeof` operator

- What is a constant?
- declaring constants
- literal constants
- constants expressions

# 44 What is a Variable

```
move 21 to location 1002                memory
                                                1000
                                                1001
                                        21      1002
                                                1003
                                                1004
                                                1005
                                                1006
```

```
move 21 to location 1002                memory
                                                1000
                                                1001
                                age     21      1002   - binding
                                                1003
                                                1004
                                                1005
                                                1006
```

- A variable is an abstraction for a memory location
- allow programmers to use meaningul names and not memory addresses
- variables have

  - type - their category (integer, real nuumber, string, Person, Account)
  - value the content (10, 3.14, "frank")

- Variables must be declared before they are used
- a variables value may change

# 45 Declaring and Initializing Variables

## Declaring Variables

VariableType VariableName;

int age;
double rate;
string name;

Account franks_account;
Person James;

## Declaring and Initializing Variables

Naming Variables

- Can contain letters, numbers, and underscores
- must begin with a letter or underscore
  - cannot begin with a number
- cannot use C++ reserver keywords
- cannot redeclare a name in the same scope
  - remember that C++ is case sensitive

Legal:

- Age
- age
- \_age
- My_age
- your_age_in_2014
- INT
- Int

Illegal

- int
- $age
- 2014_age
- my age
- Age+1
- cout
- return

### Naming Variables - Style and Best Practices

- Be consistent with your naming conventions

  - myVariableName vs my_variable_name
  - avoid beginning names with underscores

- use meaningful names

  - not too long and not too short

- never use variables before initializing them!

- declare variables close to when you need them in your code

### Initializing Variables

int age; // uninitialized value can be anything - common error problem

int age = 21; // C-like initialization

int age (21); // constructor initialization

int age {21}; // C++ 11 list initialization syntax <--- he is encouraging to use this type of initialization

# 46 Global Variables

```
using namespace std;

int age {18};

int main() {
  int age {16};

  cout << age << endl;

}

```

# 47 C++ built-in Primitive Types

- fundamental data types implemented directly by the c++ language
- chartacter types
- integer types
  - signed and unsigned
- floating-point types
- boolean type
- size and precision is often compiler-dependent
  - #include<climits>

## type sizes

- expresed in bits
- the more bits the more values that can be represented
- the more bits the more storage required

```
  size in bits              represented values
      8                                     256     2^8
      16                                 65,536     2^16
      32                          4,294,967,296     2^32
      64             18,446,744,073,709,551,615     2^64
```

## character types

- used to represents single character, "A", "X" "@"
- wider types are used to represents wide character sets

```
type name               Size / Precision
char                    exactly one byte. At least 8 bits
char16_t                At least 16 bits
char32_t                At least 322 bits
wchar_t                 Can represent the largest available character set
```

## Integer types

- used to represent whole numbers
- signed and unsigned versions
- A signed integer is a 32-bit datum that encodes an integer in the range [-2147483648 to 2147483647]. An unsigned integer is a 32-bit datum that encodes a nonnegative integer in the range [0 to 4294967295].

```
  Type Name                         Size / precision
  signed short int                    at least 16 bits
  signed int                          at least 16 bits
  signed long int                     at least 32 bits
  signed long long int                at least 64 bits

  unsigned short int                  at least 16 bits
  unsigned int                        at least 16 bits
  unsigned long int                   at least 32 bits
  unsigned long long                  at least 64 bits
```

## Floating-point Type

- used to represent non-integer numbers
- represented by mantissa and exponent (scientific notation)
- precision is the number of digits in the mantissa
- precision and size are compiler dependant

```
Type Name                   Size / Typical Precision                Typical Range
float                               / 7 decimal digits              1.2x 10^-38 to 3.4x10^38
double                  no less than float / 15 decimal digits      2.2x10^-308 to 1.8x10^308
long double             no less than double / 19 decimal digits     3.3x10^-4932 to 1.2x10^4932
```

## Bollean type

- used to represent true and false
- zero is false
- non-zero is true

```
type name           size / precision
bool                usually 8 bits
                    true or false (C++ keywords)
```

# 48 What is the size of a Variable (sizeof)

### The sizeof operator

- determines the size in bytes of a type or variable

- examples
  - sizeof(int)
  - sizeof(double)
  - sizeof(some_variable)
  - sizeof some_variable

## using the sizeof operator

- <climits> and <cfloat>

- the climits and cfloat include files contain size and precision information about you implementation of C++

INT_MAX
INT_MIN

LONG_MIN
LONG_MAX
etc....
