#include "sorting.h"
/**
 *  @brief A function that swap the value of two variables
 *
 *
 *  @param f first element to swap
 *  @param s second element to swap
 */
void swap(int &f, int &s)
{
    int temp = s;
    s = f;
    f = temp;
}

/**
 *  @brief A function that merge to sorted sections from a vector.
 *
 *
 *  @param v vector<int> that contain the sections to be sorted
 *  @param r the begin index from where the vector is going to be sorted
 *  @param l the end index from where the vector is going to be sorted
 *  @param mid the middle index between l & r. This divides the vector in two sections
 */
void merge(std::vector<int> &v, int r, int l, int mid)
{
    int ap1 = r, ap2 = mid;
    int c = 0;
    int p = r;
    int x = 0;
    std::vector<int> temp(l - r + 1);
    while (ap1 < mid && ap2 <= l)
    {
        if (v[ap1] > v[ap2])
        {
            temp[c] = v[ap2];
            ap2++;
        }
        else
        {
            temp[c] = v[ap1];
            ap1++;
        }
        c++;
    }
    while (ap1 < mid)
    {
        temp[c] = v[ap1];
        c++;
        ap1++;
    }
    while (ap2 <= l)
    {
        temp[c] = v[ap2];
        c++;
        ap2++;
    }
    while (p <= l)
    {
        v[p] = temp[x];
        x++;
        p++;
    }
}

/**
 *  @brief A function that implements merge sort functionality to sort a given array.
 *
 *
 *  @param v the array to sort
 *  @param r the begin index from where the vector is going to be sorted
 *  @param l the end index from where the vector is going to be sorted
 */
void mergeSort(std::vector<int> &v, int r, int l)
{
    if (r >= l)
        return;
    int mid = ((l - r) / 2) + r;
    mergeSort(v, r, mid);
    mergeSort(v, mid + 1, l);
    merge(v, r, l, mid + 1);
}