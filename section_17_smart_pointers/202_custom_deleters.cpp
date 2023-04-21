/*

        Custom Deleters

        - Sometimes when we destroy a smart pointer we need more than to just destroy the object on the heap

        - these are special use-cases

        - C++ smart pointers allow you to provide custom deleters

        - lots of way to achieve this
            - functions
            - lambdas
            - others....

    -----------------------------------------------------------------

    Custom deleters - function

    void my_deleter(Some_Class *raw_pointer) {
        // your custom deleter code
        delete raw_pointer;
    }

    shared_ptr<Some_Class> ptr { new Some_class{}, my_deleter};

    -----------------------------------------------------------------

    Costom deleters - function - custom

    void my_deleter(Test *ptr){
        cout << "In my custom deleter" << endl;

        delete ptr;
    }

    shared_ptr<Test> ptr { new Test{}, my_deleter};

    -----------------------------------------------------------------

    Custom deleters - Lambda expression (c++ antonymous function)

    shared_ptr<Test> ptr (new Test {100}, [] (test *ptr){
        cout << "In my custom deleter" << endl;
        delete ptr;
    })

*/