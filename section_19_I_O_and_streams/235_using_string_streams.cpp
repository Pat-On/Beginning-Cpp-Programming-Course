/*

                Using String Streams


        - allow us to read or write from strings in memory much as we would read and write to files
        - very powerful
        - very useful for data validation

        ---------------------------------------

        stringstream    - allows us to read and write
        istringstream   - to read from string streams
        ostringstream   - to write to

        1. #include <sstream>
        2. Declare an stringstream, istringstream or ostringstream object
        3. connect it to a std::string
        4. read/write data from/to the string stream using formatted i/o

        ---------------------------------------------------


        Reading from a stringstream


        #include <sstream>

        int num {};
        double total {};
        std::string name {};
        std::string info {"Moe 100 1234.5"};

        std::istringstream iss {info};
        iss >> name  >> num >>  total;


        ---------------------------------

        writing to a stringstream

        #include <sstream>

        int num {100};
        double total {1234.5};
        std::string name {"Moe"};

        std::ostringstream oss {};
        oss << name << " " << num << " " << total;
        std::cout << oss.str() << std::endl;


        ------------------------------------

        Validating input with stringstream

        int value {};
        std::string input {}

        std::cout << "Enter an integer: ";
        std::cin >> input;

        std::stringstream ss{input};
        if (ss >> value) {
            std::cout << "An integer was entered";
        } else {
            std::cout << "An integer was NOT entered";
        }

*/