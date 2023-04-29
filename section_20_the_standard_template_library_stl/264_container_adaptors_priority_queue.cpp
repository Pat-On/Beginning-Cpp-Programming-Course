/*

                Container Adaptors - Priority Queue


    std::priority_queue

    - allows insertions and removal of elements in order from the front of the container
    - elements are stored internally as a vector by default

    - elements are inserted in priority order
        largest value will always be at the front

    - no iterators are supported

    ---------------------------------------------------------------------------------------

    #include <queue>

    - push - insert an element into sorted order
    - pop - removes the top element (greatest)

    - top access the top element (greatest)

    - empty - is the queue empty?
    - size - number of elements in the queue

    ---------------------------------------------------------------------------------------

    std::priority_queue<int> pq; // vector


    pq.push();
    pq.push();
    pq.push();
    pq.push();
    pq.push();
    pq.push();

    std::cout << pq.top()   // 20 largest
    pg.pop();               // remove 20
    pg.top();               // 10 (largest)

    ---------------------------------------------------------------------------------------

    


*/