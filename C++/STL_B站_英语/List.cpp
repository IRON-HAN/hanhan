// List:
// 1. fast insert/erase at any place: O(n)
// 2. slow search : O(n)
// 3. no random access & operator[]

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
    list<int> mylist = {5, 2, 9};
    mylist.push_back(6);
    mylist.push_front(4);

    list<int>::iterator itr = find(mylist.begin(), mylist.end(), 2);
    mylist.insert(itr, 8);

    itr++;
    mylist.erase(itr);

    for(auto it:mylist)
        cout << it << ' ';


}
