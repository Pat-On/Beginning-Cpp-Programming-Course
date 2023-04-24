/*

        What is the STL?

    - a library of powerful, reusable, adaptable, generic classes and functions
    - implemented using c++ templates
    - implements common data structures and algorithms
    - huge class library!!
    - alexander Stepanov 1994


    --------------------------------------------------

    - assortment of commonly used containers
    - known time and size complexity
    - tried and tested - reusability
    consistent, fast and type-safe
    - extensible

    ------------------------------------------------

    - Containers
        - collections of objects or primitive types
        (array, vector, deque, stack, set, map etc)
    - algorithms
        - functions for processing sequences of elements from containers
            (find, max, count, accumulate, sort, etc.)
    - iterators
        - generate sequences of element from containers
            (forward, reverse, by value, by reference, constant, etc. )



    --------------------------------------------------------

    a simple example

    #include <vector>
    #include <algorithm>

    std::vector<int> v {1,5,3};

    --------------------------------------------------------
    a simple example - sort a vector ( we can sort any container from stl)

        std::sort(v.begin(), v.end());  // interesting syntax

        for (auto elem: v)
            std::cout << elem << std::endl;

        1
        3
        5

    --------------------------------------------------------

    A SIMPLE EXAMPLE - REVERSE A VECTOR

        std::reverse(v.begin(), v.end());

        for (auto elem: v)
            std::cout << elem << std::endl

        5
        3
        1

    --------------------------------------------------------

    A SIMPLE EXAMPLE - ACCUMULATE

        int sum {};

        sum = std::accumulate(v.begin(), v.end(), 0); // third param is important, if you want sum int use 0 if doubles use 0.0
        std::cout << sum << std::endl;

        9 // 1+3+5

    ---------------------------------------------------------

    TYPES OF CONTAINERS

    - Sequence containers
        - array
        - vector
        - list
        - forward_list
        - deque

    - associative containers
        - set
        - multi set
        - map
        - multi map

    - container adapters
        - stack
        - queue
        - priority queue

    ---------------------------------------------------------

    TYPES OF ITERATORS

    - input iterators - from the container to the program
    - output iterators - from the program to the container
    - forward iterators - navigate one item at a time in one direction
    - bi-directional iterators - navigate one item at a time both directions
    - random access iterators - directly access a container

    ---------------------------------------------------------

    TYPES OF ALGORITHMS

        - about 60 algorithms in ste STL
        - non-modifying
        - modifying

    --------------------------------------------------------

*/