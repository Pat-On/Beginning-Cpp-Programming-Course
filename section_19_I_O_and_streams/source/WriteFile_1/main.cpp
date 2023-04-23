// Section 19
// Write File
#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::ofstream out_file{"../output.txt"};                // default - truncate
    std::ofstream out_file{"../output.txt", std::ios::app}; // append mode
    // file exist or file create
    if (!out_file)
    {
        std::cerr << "Error creating file" << std::endl;
        return 1;
    }

    // variable - container
    std::string line;

    // get input from user
    std::cout << "Enter something to write to the file: ";
    // console get line
    std::getline(std::cin, line);

    // insert
    out_file << line << std::endl;

    // close file
    out_file.close();

    return 0;
}
