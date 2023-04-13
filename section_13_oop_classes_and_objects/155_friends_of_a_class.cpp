/*

            Friend of a class

    - friend 
        - a function or class that has access to private class member
        - and that function of or class is not a member of the class it is accessing

    - function
        - can be regular non-member functions
        - can be member methods of another class

    - class
        - another class can have access to private class members

---------------------------------------------------------------------------------------------

    - friendship must be granted not taken
        - declared explicitly in the class that is granting friendship
        - declared in the function prototype with the keyword friend

    - friendship is not symmetric
        - must be explicitly granted
            - if a is a friend of b
            - b is not a friend of A
    
    - friendship is not transitive
        - must be explicitly granted
            - if a is a friend of B and
            - b is a friend of c
            - then A is not a friend of c
            
*/