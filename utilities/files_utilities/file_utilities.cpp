#include <iostream>
#include <fstream>
#include "file_utilities.h"
bool read_file(std::string filename)
{
    std::string line;
    std::ifstream stream(filename);
    if (stream.is_open())
    {
        while (std::getline(stream, line))
        {
            std::cout << line << "\n";
        }
        stream.close();
        return true;
    }
    return false;
}

bool write_file_vector_int(std::string filename, std::string header, std::vector<int> &v)
{
    std::ofstream stream(filename);

    if (stream.is_open())
    {
        stream << header << "\n";
        for (int d : v)
            stream << d << " ";
        stream.close();
        return true;
    }
    return false;
}