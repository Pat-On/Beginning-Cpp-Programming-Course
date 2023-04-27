/*

    Containers


    Data structures that can store object of almost any type
        - template-based classes

    each container has member functions
        - some are specific to the container
        - other are available to all containers

    each container has an associated header file
        $include <container_type>

    ----------------------------------------------------------

    Function                                Description

    Default constructor                     Initializes an empty container
    Overloaded constructors                 Initializes containers with many options
    copy constructor                        initializes container as a copy of another container
    Move constructor                        Moves existing container to new container
    Destructor                              Destroys a container
    Copy assignment (operator=)             Copy one container to another
    Move assignment (operator=)             Move one container to another
    Size                                    Returns the number of elements in the container
    empty                                   Returns boolean - is the container empty?
    insert                                  Insert an element into the container

    ----------------------------------------------------------

    Operator< and operator<=                Returns boolean - compare contents of 2 containers
    Operator > and operator >=              Returns boolean - compare contents of 2 containers
    operator== and operator!=                Returns boolean - are the contents of 2 containers equal or not
    swap                                    swap the elements of 2 containers
    erase                                   Remove element(s) from a container
    clear                                   Remove all elements from a container
    begin and end                           Returns iterators to first element or end
    rbegin and rend                         Returns reverse iterators to firs element or end
    cbegin and cend                         Returns constant iterators to first element or end
    crbegin and crend                       Returns constant reverse iterators to first element or end

    ----------------------------------------------------------

    Containers elements

    What types of elements can we store in containers?

    - A copy of the element will be stored in the container
        - all primitives OK

    - element should be
        - copyable and assignable (copy constructor / copy assignment)
        - movable for efficiency (move constructor / move assignment)

    - Ordered associative containers must be able to compare elements
        - operator<, operator==

*/