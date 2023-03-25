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
