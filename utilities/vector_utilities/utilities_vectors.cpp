#include "utilities_vectors.h"
#include <iostream>
#include <ostream>
void printVector(std::vector<int> &v, int r, int l)
{
    for (r; r <= l; r++)
        std::cout << v[r] << " ";
    std::cout << std::endl;
}