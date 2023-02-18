#include "../sort/sorting.h"
#include "../utilities/files_utilities/file_utilities.h"
#include "../utilities/vector_utilities/utilities_vectors.h"
#include <vector>

int binary_search_recur(std::vector<int> &v, int r, int l, int b)
{
    int mid = (l + r) / 2;
    if (b == v[mid])
        return mid;
    if (l == r)
        return -1;
    if (b < v[mid])
        l = mid;
    else
        r = mid + 1;

    return binary_search_recur(v, r, l, b);
}
int binary_search(std::vector<int> &v, int r, int l, int b)
{
    int mid;
    do
    {
        mid = (l + r) / 2;
        if (v[mid] == b)
            return mid;
        if (b < v[mid])
            l = mid;
        else
            r = mid + 1;
    } while (mid != r);

    return -1;
}

int main()
{
    std::vector<int> v = {24, 34, 54, 123, 33, 99, 10, 3};
    mergeSort(v, 0, v.size() - 1);
    printVector(v, 0, v.size() - 1);
    int n;
    std::cout << "n: ";
    std::cin >> n;
    int i = binary_search_recur(v, 0, v.size() - 1, n);
    int x = binary_search(v, 0, v.size() - 1, n);
    std::cout << "binary_search_recur: " << i << std::endl;
    std::cout << "binary_search: " << x << std::endl;
    // write_file_vector_int("unsorted_vector.txt", "Unsorted vector", v);
    // write_file_vector_int("sorted_vector.txt", "Sorted vector", v);
    return 0;
}