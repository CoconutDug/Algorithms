#include "searching.h"

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
