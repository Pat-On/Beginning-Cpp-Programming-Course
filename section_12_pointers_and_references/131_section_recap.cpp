/*

                Section Recap


    When to use pointers vs. references parameters:

        - pass-by-value
            - when the function does not modify the actual parameter, and
            - the parameter is small and efficient to copy like simple types (int, char, double etc)

        - pass-by-reference using a pointer
            - when the function does modify the actual parameter, and
            - the parameter is expensive to copy, and
            - it is ok to the pointer is allowed a nullptr value

        - pass-by-reference using a pointer to const
            - when the function does not modify the actual parameter, and
            - the parameter is expensive to copy, and
            - it is ok to the pointer is allowed a nullptr value
        
        - pass-by-reference using a const pointer to const
            - when the function does not modify the actual parameter, and
            - the parameter is expensive to copy, and
            - it is ok to the pointer is allowed a nullptr value, and
            - you do not want to modify the pointer itself
        
        - pass-by-reference using a reference
            - when the function does modify the actual parameter, and
            - the parameter is expensive to copy, and
            - the parameter will never be nullptr

        - pass-by-reference using a const reference
            - when the function does not modify the actual parameter, and
            - the parameter is expensive to copy, and
            - the parameter will never be nullptr

        

*/