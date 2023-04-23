/*
            Writing to a Text File


    Output Files (fstream and ofstream)

    fstream and ofstream are commonly used for output files

    1. #include<fstream>
    2. Declare an fstream or ofstream object
    3. Connect it to a file on your file system (opens it for writing)
    4. Write data to the file via the stream
    5. Close the stream


    ------------------------------------------------------------

    Output files will be created if they do not exist (default and path must exist)
    Output files will be overwritten (truncated) by default
    can be opened so that new writes append
    can be open in text or binary modes

    ------------------------------------------------------------

    Opening a file for writing with (fstream)  // reading and writing at the same time

    std::fstream out_file {"myfile.txt", std::ios::out};

    - open for writing in binary mode

    std::fstream out_file {"myfile.txt, std::ios::out | std::ios::binary };
    // non text files that contain binary

    ------------------------------------------------------------

    opening a file for writing with (ofstream)

    std::ofstream out_file {"myfile.txt", std::ios::out};

    std::ofstream out_file {"myfile.txt"};

    - open for writing in binary mode
    std::ofstream out_file {"myfile.txt,  std::ios::binary };


    ------------------------------------------------------------


        // truncate (discard contents) when opening
        std::ofstream out_file {"myfile.txt", std::ios::trunc};

        // append on each write
        std::ofstream out_file {"myfile.txt", std::ios::app};

        // seek to end of stream when opening
            std::ofstream out_file {"myfile.txt", std::ios::ate};


    ------------------------------------------------------------

    Opening a file for writing with open

    std::ofstream out_file
    std::string filename;
    std::cin >>  filename; get the file name

    out_file.open(filename);

    // opr

    out_file.open(filename, std::ios::binary);

    -----------------------------------------------------------

    Check if file opened successfully (is_open)

    if (out_file.is_open()) {
        // read from it
    } else {
        file could not be created or opened
        // does it exist
        // should the program terminate?
    }


    -----------------------------------------------------------


    if (out_file) { // just check the object
        // read from it
    } else {
        file could not be created or opened
        // does it exist
        // should the program terminate?
    }

    -----------------------------------------------------------

    closing a file

        - always close any open files to flush out any unwritten data

        out_file.close();

    ------------------------------------------------------------


    Writing to files using <<

    - we can use the insertion operator for formatted write
    - same way we used it with cout

    int num {100};                              100
    double total {255.67};                      255.67
    std::string name {"Larry"};                 Larry

    out_file << num << "\n"
            << total << "\n"
            << name << std::endl;

    ------------------------------------------------------------

    Copying a text file one line at a time

        std::ifstream in_file {"myfile.txt"}; // open file
        std::ofstream out_file {"copy.txt"};

        if (!in_file {      // check if file is open
            std::cerr << "File open error" << std::endl;
            return 1;       // exit the program main
        })

        if (!out_file) {        // check if file is open
            std::cerr << "File create error" << std::endl;
            return 1; // exit the program (main)
        }


        std::string line {};

        while (std::getline(in_file, line)) // read a line
            out_file << line << std::endl;

        in_file.close();
        out_file.close();


    ----------------------------------------------------------------


        Copying a text file one character at a time (get/put)

        std::ifstream in_file {"myfile.txt"}; // open file
        std::ofstream out_file {"copy.txt"};

        if (!in_file {      // check if file is open
            std::cerr << "File open error" << std::endl;
            return 1;       // exit the program main
        })

        if (!out_file) {        // check if file is open
            std::cerr << "File create error" << std::endl;
            return 1; // exit the program (main)
        }


        char c;;

        while (in_file.get(c)) // read a char
            out_file.put(c)

        in_file.close();
        out_file.close();
*/