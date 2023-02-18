#include <bits/stdc++.h>
#include "sorting.h"
#include "../utilities/vector_utilities/utilities_vectors.h"

int main()
{
    std::vector<int> vec = {12, 2, 31, 100, 25, 8, 3, 33, 32, 17, 40, 42, 90};
    // std::vector<int> vec = {2, 5, 9, 8, 3, 4};
    printVector(vec, 0, vec.size() - 1);
    mergeSort(vec, 0, vec.size() - 1);
    printVector(vec, 0, vec.size() - 1);
}