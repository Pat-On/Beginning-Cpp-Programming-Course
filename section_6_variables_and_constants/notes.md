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
