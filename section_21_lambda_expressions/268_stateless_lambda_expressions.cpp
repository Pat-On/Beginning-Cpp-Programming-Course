/*

            Stateless Lambda Expressions


    [] () -> return_type specifiers {} ;

    [] capture list
            defines the context in which the lambda executes



    -----------------------------------------------------------------------

    examples:

    [] () {std::cout << "Hi"; }();

    int x {10};

    [] (int x) {std::cout << x; } (100);

    -----------------------------------------------------------------------


    const int n{3};

    int nums[n] {10, 20, 30};

    auto sum = [] (int nums [], int n) {
        int sum {0};
        for( int i = 0; i < n; i++)
            sum += nums[i];
        return sum;
    };

    std::cout << sum(nums, 3)           // displays 60

    -----------------------------------------------------------------------


        using values and references as lambda parameters

        [] (int x) {std::cout << x;} ;

            (int x) <-- value parameter
            (int &x) <--- reference parameter


    -----------------------------------------------------------------------

    int test_score1 {88};
    int test_score2 {75};

    auto bonus = [] (int &score1, int &score2, int bonus_points){
        score1 += bonus_points;
        score2 += bonus_points;
    };


    bonus (test_score1, test_score2, 5);

    std::cout << "test_score1: " << test_score1 << std::endl;       // displays 93
    std::cout << "test_score2: " << test_score2 << std::endl;       // displays 80

    -----------------------------------------------------------------------

    using pointers as lambda parameters


    int x;
            pointer param
    auto 1 = [] (int *x) {std::cout << *x; };   dereferencing operator

    l(&x);  <--- referencing (address-of) operator

    -----------------------------------------------------------------------

    int test_score1 {88};
    int test_score2 {75};

    auto bonus = [] (int *score1, int *score2, int bonus_points){
        *score1 += bonus_points;
        *score2 += bonus_points;
    };


    bonus (&test_score1, &test_score2, 5);

    std::cout << "test_score1: " << test_score1 << std::endl;       // displays 93
    std::cout << "test_score2: " << test_score2 << std::endl;       // displays 80


    -----------------------------------------------------------------------


    using arrays and vectors as lambda reference parameters

    std::vector<int> test_scores {93, 88, 75, 68, 65};

    auto bonus = [] (std::vector<int> &scores, int bonus_points){
        for (int &score: scores)
            score += bonus_points;
    }

    bonus(test_scores, 5);

    -----------------------------------------------------------------------

    Using auto as lambda parameter type specifiers

    int num1 {10};
    float num2 {20.5};

    auto l = [] (auto x ) {std::cout << x;} ;               <------------- powerful concept in code


    l(num1);
    l(num2);

    -----------------------------------------------------------------------

    using arrays and vectors as lambda reference parameters

    std::vector<int> test_scores {93, 88, 75, 68, 65};

    auto bonus = [] (auto &scores, int bonus_points){ <----- by auto we can pass any type that we can iterate float int etc
        for (int &score: scores)
            score += bonus_points;
    }

    bonus(test_scores, 5);

    Auto <--- it is not type, it is instruction to the compiler to deduct the actual type


    -----------------------------------------------------------------------

    Using lambda expressions as function parameters

    #include <functional>                   // for std::function

    void foo(std::function<void(int)>l){
        l(10)l                                                  // c++ 14
    }
                    void - return typ
                    int - parameter
    or

    void foo(void (*l) (int)){
        l(10);                                                  // c++ 14
    }

    or

                auto for both

    void foo(auto l){
        l(10);                                                  // c++ 20
    }

    -----------------------------------------------------------------------

    #include <functional>

    std::function<void(int)> foo() {
        return [] (int x) {std::cout << x;} ;
    }

    or

    void (*foo()) (int){
        return [] (int x) {std::cout << x;};
    }

    or

    auto foo(){
        return [] (int x) {std::cout << x;};
    }

    -----------------------------------------------------------------------

    all 3 versions are used the same way

    auto l = foo();
    l (10);         // displays 10


    -----------------------------------------------------------------------

    foo([] (int x) {std::cout << x;});

    or

    auto l = [] (int x) {std::cout << x;};          // lambda as a function

    foo(l);

    -----------------------------------------------------------------------

    void print_if(std::vector<int> nums, bool (*predicate) (int)){
        for (int i: nums)
            if (predicate(i))
                std::cout << i;
    }

    int main () {
        std::vector<int> nums {1,2,3};

        print_if(nums, [] (auto x) {return x % 2 == 0;});   // displays evens

        print_if(nums, [] (auto x) {return x % 2 != 0;});   // displays odds

        return 0;
    }
*/