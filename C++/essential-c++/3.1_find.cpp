#include <iostream>
#include <cstdio>
#include <fstream>
#include <algorithm>
#include <cmath>
#include <deque>
#include <vector>
#include <queue>
#include <string>
#include <cstring>
#include <map>
#include <stack>
#include <set>
#include <sstream>
#include <list>
#include <functional>
#include <cstdlib>
using namespace std;
// chcp 65001
template<class T>
inline T* begin(const vector<T> &ve)
{return ve.empty() ? 0 : &ve[0];}
template<class T>
inline T* end(const vector<T> &ve)
{return &ve[ve.size()-1];}

template<class T>
T* find1(const T *array,
int size, const T &val)
{
    if(!array || size<1)
        return 0;

    for (int ix = 0; ix < size;++ix)
        if(array[ix]==val)
        return  &array[ix];

    return 0;
}

template<class T>
T* find2(const T *array,
int size, const T &val)
{
    if(!array || size<1)
        return 0;

    for (int ix = 0; ix < size;++ix,++array)
        if(*array==val)
            return array;

    return 0;
}

template<class T>
T* find3(const T *first,
const T* last, const T &val)
{
    if(!first || !last)
        return 0;

    for (; first != last;++first)
        if(*first==val)
            return first;

    return 0;
}

template<class Iter, class T>
Iter Find(Iter first, Iter last, const T &val)
{
    for (; first != last;++first)
        if(val==*first)
            return first;

    return last;
}

int main()
{
    const int size = 8;
    int a[size] = {1, 1, 2, 3, 5, 8, 13, 21};

    vector<int> ve(a, a + size);
    list<int> li(a, a + size);

    int *pa = Find(a, a + size, 13);
    if(pa!=a+size)
        cout << (pa) - (a) << endl;

    vector<int>::iterator iv;
    iv = Find(ve.begin(), ve.end(), 13);
    if(iv!=ve.end())
        cout << "find!\n";

    list<int>::iterator il;
    il = Find(li.begin(), li.end(), 13);
    if(il!=li.end())
        cout << "find!\n";

    return 0;

}

