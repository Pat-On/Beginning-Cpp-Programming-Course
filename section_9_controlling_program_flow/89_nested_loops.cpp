/*
                #89.Nested Loops

        - loop nested within another loop
        - can be many as many levels deep as the program needs
        - very useful with multi-dimensional data structures
        - outer loop vs. inner loop

    


*/


#include <vector>
#include <iostream>
using namespace std;

int calculate_pairs(vector<int> vec) {

    int result {};
    
    for (int i = 0 ; i < vec.size() ; ++i) {
        for (int j = i + 1 ; j < vec.size() ; ++j){
            result += vec[i] * vec[j];
        }
    }

    
    
    cout << result;
    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    return result;
}