/*
            Weak pointers


        weak_ptr

        - provides a non-owning 'weak' reference

        weak_ptr<T>
            - points to an object of type T on the heap
            - does no participate in owning relationship
            - always created from a shared_ptr
            - does not increment or decrement reference use count
            - used to prevent strong reference cycles which could prevent objects from being deleted\

        ---------------------------------------------------

        weak_ptr - circular or cyclic reference

            - A refers to B
            - B refers to A

        Shared strong ownership prevents heap deallocation

            A       ---------------------->     B
                    <---------------------

        shared_ptr<B>                       shared_ptr<A>


        ---------------------------------------------------

        weak_ptr - circular or cyclic reference
        Solution: make one of the pointers non-owning or 'weak'
        Now heap storage is deallocated properly

            A       ---------------------->     B
                    < -  -  -  -  -  -  -  -

        shared_ptr<B>                       weak_ptr<A>



*/