/*

        Infinite loops


    - loops whose condition expression always evaluate to true
    - usually this is unintended and a programmer error
    - sometimes programmers use infinite loops and include and break statements in the body to control them

    - sometimes infinite loops are exactly what we need
        - event loop in an event-driven program
        - operating system



            -----------------------------

        examples


        for (;;)
            do something

        -------

        while(true)
            do something

        -------

        do {
            do something
        } while (true);


        -------


        while (true) {
            char again {};
            cout << "Do you want to loop again? (Y/N): ";
            cin >> again

            if (again =="N" || again == 'n){
                break;
            }
        }

*/