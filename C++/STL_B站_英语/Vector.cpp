// Vector
// 1. fast insert/erase at the end : O(1)
// 2. slow insert/erase at the beginning or in the middle: O(n)
// 3. slow search: O(n)


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

int main()
{
    // init
    int a[3] = {4, 1, 8};
    vector<int> vec(a, a + 3);

    // random-access
    cout << vec[2]; // no range check
    cout << vec.at(2); // range checked

    // access
    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i] << ' ';
    }

    for (vector<int>::iterator it = vec.begin(); it!=vec.end(); ++it) {
        cout << *it << ' ';
    }

    for(auto it:vec)
        cout << it << ' ';
}
