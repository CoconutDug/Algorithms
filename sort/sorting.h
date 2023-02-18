#ifndef SORTING_H
#define SORTING_H
#include <bits/stdc++.h>
void swap(int &f, int &s);

void merge(std::vector<int> &v, int r, int l, int mid);
void mergeSort(std::vector<int> &v, int r, int l);
#endif