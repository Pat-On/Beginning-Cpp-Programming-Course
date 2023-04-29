/*

               Container Adaptors - Stack

    - Last-in First-out (LIFO) data structure

    - implemented as an adapter over other STL container
        Can be implemented as a vector, list or dequeue

    - all operations occur on one and of the stack (top)

    - no iterators are supported

    -------------------------------------------------------------------------------------------

    #include <stack>

    - push - insert an element at the top of the stack
    - pop - remove an element from the top of the stack
    - top - access the top element of the stack
    - empty - is the stack empty?
    - size - number of elements in the stack

    -------------------------------------------------------------------------------------------

    std::stack<int> s;                      // dequeue - default

    std::stack<int, std::vector<int>> s1;   // vector

    std::stack<int, std::list<int>> s2;     // list

    std::stack<int, std::dequeue<int>> s3;  // deque

    -------------------------------------------------------------------------------------------

    s.push(10)              10



    s.push(20)              20
                            10


    s.push(30)              30
                            20
                            10
    -------------------------------------------------------------------------------------------


    std::cout << s.top;     // 30

    s.pop();                // 30 is removed


    std::cout << s.size();  // 2 (20 and 10)
    -------------------------------------------------------------------------------------------
*/