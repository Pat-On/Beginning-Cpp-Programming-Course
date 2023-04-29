/*

        Container Adaptors - Queue

    - First-in First-out (FIFO) data structure

    - implemented as an adapter over other STL container
        can be implemented as a list or deque

    - elements are pushed at the back and
        popped from the front

    - no iterators are supported

    -------------------------------------------------------------------------------------------

        std::queue

        #include <queue>

        - push - insert an element at the back of the queue
        - pop - remove an element from the front of the queue

        - front - access the element at the front
        - back - access the element at the back

        - empty - is the queue empty?
        - size - number of elements in the queue

    -------------------------------------------------------------------------------------------

        std::queue<int> q;          // deque <--- default

        std::queue<int, std::list<int>> q2;     // list
        std::queue<int, std::deque<int>> q2;     // deque


    -------------------------------------------------------------------------------------------

    q.push(10);
    q.push(30);

    q.front(); 10
    q.back(); 30

    q.pop() // remove 10
    q.pop()// remove 30

    std::cout << q.size(); // 0 :>

    -------------------------------------------------------------------------------------------
*/