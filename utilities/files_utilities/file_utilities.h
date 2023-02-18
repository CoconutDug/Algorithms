#ifndef FILE_UTILITIES_H
#define FILE_UTILITIES_H
#include <vector>
#include <string>
#include <stdio.h>
bool read_file(std::string filename);
bool write_file_vector_int(std::string filename, std::string header, std::vector<int> &v);
#endif