#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <functional>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
// chcp 65001
void print() {}
template <class T, class... Types>
void print(const T &firstArg, const Types &... args)
{
    cout << firstArg;
    print(args...);
}

void qSort(int *a, int l, int r)
{
    if (l < r)
    {
        int i = l, j = r;
        int val = a[l];

        while (i < j)
        {
            while (i < j && val <= a[j])
                --j;
            if (i < j)
                a[i] = a[j];
            while (i < j && val >= a[i])
                ++i;
            if (i < j)
                a[j] = a[i];
        }
        a[i] = val;
        qSort(a, l, i - 1);
        qSort(a, i + 1, r);
    }
}

void Merge_two(int *a, int l, int m, int r, int *t)
{
    int ix = l, jx = m + 1;
    int e_l = m, e_r = r;
    int kx = 0;

    while (ix <= e_l && jx <= e_r)
        t[kx++] = a[ix] < a[jx] ? a[ix++] : a[jx++];
    while (ix <= e_l)
        t[kx++] = a[ix++];
    while (jx <= e_r)
        t[kx++] = a[jx++];

    for (int i = 0; i < kx; ++i)
        a[l + i] = t[i];
}
void Merge_sort(int *a, int l, int r, int *t)
{
    if (l < r)
    {
        int m = (l + r) / 2;
        Merge_sort(a, l, m, t);
        Merge_sort(a, m + 1, r, t);
        Merge_two(a, l, m, r, t);
    }
}
void mSort(int *a, int l, int r)
{
    if (l < r)
    {
        int *t = new int[r - l + 1];
        Merge_sort(a, l, r, t);
        delete[] t;
    }
}
int main()
{
    char a[10];
    memset(a, 65, sizeof(a));

    for (auto elem : a)
        cout << elem << " ";
    cout << endl;

    return 0;
}
