// Section 19
// Read File 3
// Read and display Shakespeare Sonnet 18 poem using getline
#include <iostream>
#include <fstream>

int main()
{
    std::ifstream in_file;
    in_file.open("poem.txt");

    if (!in_file)
    {
        std::cerr << "Problem opening file" << std::endl;
        return 1;
    }
    std::string line{};

    // line by line
    // there are two type getLine method for c string type and C++ std::string
    while (std::getline(in_file, line))
    {
        std::cout << line << std::endl;
    }

    in_file.close();
    return 0;
}