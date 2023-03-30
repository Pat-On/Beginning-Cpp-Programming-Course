/*
        59 Accessing and Modifying Vector Elements

    Accessing vector elements - array syntax

        vector_name [element_index]

            test_scores [1]


    vector <int> test_scores {100, 95, 99, 87, 88};

    cout << "First score at index 0: " << test_scores[0] << endl;


    --------------------------------------------------------------

    Accessing vector elements - vector syntax

        vector_name.at(element_index)

            test_scores.at(1)


    vector <int> test_scores {100, 95, 99, 87, 88};

    cout << "First score at index 0: " << test_scores.at(0) << endl;



    -----------------------------------------------------------------

    Changing the contents of vector elements - vector syntax

        vector_name.at(element_index)

        test_scores.at(0) = 90; // assignment statement


    ----------------------------------------------------------------

    So when do they grow as needed?

        vector_name.push_back(element)

        vector <int> test_scores {100, 95, 99}; // size is 3

        test_scores.push_back(90); // 100, 95, 99, 90
        test_scores.push_back(80); // 100, 95, 99, 90, 80

        VECTOR WILL AUTOMATICALLY ALLOCATE THE REQUIRED SPACE!
        ALL VECTORS ELEMENT MUST BE OF THE SAME TYPE

    ------------------------------------------------------

    What if you are out of bounds?

        - arrays never do bounds checking
        - many vector methods provide bounds checking
        - and exception and error message is generated

        vector <int> test_scores {100, 95}

        cin >> test_scores.at(5);

        terminate called after throwing an instance of 'std::out_of_range'....

*/

#include <iostream>
#include <vector> // don't forget this in order to use vectors

using namespace std;

int main()
{

    //    vector <char> vowels;         // empty
    //    vector <char> vowels (5);      // 5 initialized to zero
    vector<char> vowels{'a', 'e', 'i', 'o', 'u'};

    cout << vowels[0] << endl;
    cout << vowels[4] << endl;

    //    vector <int> test_scores (3);  // 3 elements all initialized to zero
    //   vector <int> test_scores (3, 100); // 3 elements all initialized to 100

    vector<int> test_scores{100, 98, 89};

    cout << "\nTest scores using array syntax:" << endl;
    cout << test_scores[0] << endl;
    cout << test_scores[1] << endl;
    cout << test_scores[2] << endl;
    cout << test_scores[4] << endl; // boundary checking on method

    cout << "\nTest scores using vector syntax:" << endl;

    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << "\nThere are " << test_scores.size() << " scores in the vector" << endl;

    cout << "\nEnter 3 test scores: ";
    cin >> test_scores.at(0);
    cin >> test_scores.at(1);
    cin >> test_scores.at(2);

    cout << "\nUpdated test scores: " << endl;

    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;

    cout << "\nEnter a test score to add to the vector: ";

    int score_to_add{0};
    cin >> score_to_add;

    test_scores.push_back(score_to_add);

    cout << "\nEnter one more test score to add to the vector: ";

    cin >> score_to_add;

    test_scores.push_back(score_to_add);

    cout << "\nTest scores are now: " << endl;

    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << test_scores.at(3) << endl;
    cout << test_scores.at(4) << endl;

    cout << "\nThere are now " << test_scores.size() << " scores in the vector" << endl;

    //  cout << "This should cause an exception!!" << test_scores.at(10) << endl;

    // Example of a 2D-vector

    vector<vector<int>> movie_ratings{
        {1, 2, 3, 4},
        {1, 2, 4, 4},
        {1, 3, 4, 5}};

    cout << "\nHere are the movie rating for reviewer #1 using array syntax :" << endl;
    cout << movie_ratings[0][0] << endl;
    cout << movie_ratings[0][1] << endl;
    cout << movie_ratings[0][2] << endl;
    cout << movie_ratings[0][3] << endl;

    cout << "\nHere are the movie rating for reviewer #1 using vector syntax :" << endl;
    cout << movie_ratings.at(0).at(0) << endl;
    cout << movie_ratings.at(0).at(1) << endl;
    cout << movie_ratings.at(0).at(2) << endl;
    cout << movie_ratings.at(0).at(3) << endl;

    cout << endl;
    return 0;
}