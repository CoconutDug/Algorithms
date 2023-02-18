
#include <iostream>
#include <fstream>
#include "file_utilities.h"
#include <vector>

int main()
{
    std::string filename = "pepe.txt";
    std::string header = "This is a test to write and read a file";
    std::vector<int> i = {1, 2, 34, 5, 6, 7, 8, 9, 0};
    if (!write_file_vector_int(filename, header, i))
    {
        std::cout << "Unable to open: " << filename << std::endl;
    }
    if (!read_file(filename))
    {
        std::cout << "Unable to open: " << filename << std::endl;
    }
}