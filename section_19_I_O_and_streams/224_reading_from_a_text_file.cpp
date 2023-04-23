/*

            Input files (fstream and ifstream)

        fstream and ifstream are commonly used for input files

        1. #include <fstream>
        2. Declare an fstream or ifstream object
        3. Connect it to a file on your file system (opens it for reading)
        4. Read data from the file via the stream
        5. close the stream

------------------------------------------------------------------------------------

    Opening a file for reading with (fstream)

        std::fstream in_file {"../myfile.txt",
                                std::ios::in};

    - open for reading in binary mode

    std::fstream in_file {"../myfile.txt",                  // reading and writing at the same time
                            std::ios::in | std::ios"binary"};
                                        set both to true
                                        pipe operator - bite wise or operator

----------------------------------------------------------------------------------


    Opening a file for reading with (ifstream)

        std::ifstream in_file {"../myfile.txt",
                                std::ios::in};

        std::ifstream in_file {"../myfile.txt"};

        - open for reading in binary mode

        std::ifstream in_file {"../myfile.txt",
                                std::ios::binary};

-----------------------------------------------------------------------------------

    Opening a file for reading with open

        std::string filename;
        std::cin >> filename;       // get the file name

        in_file.open(filename);
        // or
        in_file.open(filename, std::ios::binary);

-----------------------------------------------------------------------------------
    check if file opened successfully (is_open)

        if (in_file.is_open()){
            // read from it
        } else {
            // file could not be opened
            // does it exists?
            // should the program terminate
            // permission problems?
        }

-----------------------------------------------------------------------------------

    check if file opened successfully - test the stream object

    if (in_file) { // just check the object
        // read from it
    } else {
        // file could not be opened
        // does it exist?
        // should the program terminate?
    }

-----------------------------------------------------------------------------------


    Closing file

        - always close any open files to flush out any unwritten data   <--- especially in output files


        in_file.close();

-----------------------------------------------------------------------------------

        Reading from files using >>

        - we can use the extraction operator for formatted read
        - same way we used it with cin
                                                                Content of the file
        int num {};                                 |                100
        double total {};                            |                255.67
        std::string name {};                        |                Larry

        in_file >> num;
        in_file >> total >> name;

-----------------------------------------------------------------------------------

    Reading from files using getline

        - we can use getline to read the file one line at a time

        std::string line {};            | This is a line

        std::getline(in_file, line);            <--- similar to the cmd version


-----------------------------------------------------------------------------------

        Reading text file one line at a time

        std::ifstream in_file{"../myfile.txt"};         // open file
        std::string line {};

        if (!in_file){                      check if file is open
            std::cerr << "File open error" << std::endl;
            return 1;                       // exit the program main
        }
        while (!in_file.eof()) {            // while not at the end     eof() true when we return end of the file (this is end of the file in Linux and MacOS)
            std::getline(in_file, line);    // read a line
            cout << line << std::endl;      // display the line
        }

        in_file.close();        // close the file

-----------------------------------------------------------------------------------

        Reading text file one character at a time (get)

            std::ifstream in_file{"../myfile.txt"};     // open file
            char c;

            if (!in_file){          // check if file is open
                std::cerr << "File open error" << std::endl;
                return 1;       // exit the program (main)
            }


            while (in_file.get(c)) // read a character <-- hahaha character xD
                cout << c;

            in_file.close();            // close the file


*/
