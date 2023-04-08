/*
                        Declaring Pointers


                variable_type *pointer_name


                int *int_ptr;
                double * double_ptr;
                char *char_ptr;
                string *string_ptr;

if not initialized we have garbage data



            initializing pointer variables to 'point nowhere'


                variable_type *pointer_name {nullpts};

                int *int_ptr {};        // it is initialized to zero, it point to nothing
                double *double_ptr {nullptr};
                char *char_ptr {nullptr};;
                string *string_ptr {nullptr};;

---------------------------------------------------------------------------------------------------


            Initializing pointer variables to 'point nowhere'
            - always initialize pointers
            - uninitialized pointers contain garbage data and can 'point anywhere'                              <--- the most common error
            - initializing to zero or nullptr(c++ 11) represents address zero
                - implies that the pointer is 'pointing nowhere'
            - if you do not initialize a pointer to point to a variable or function then you should initialize it to nullptr to 'make it null'

*/