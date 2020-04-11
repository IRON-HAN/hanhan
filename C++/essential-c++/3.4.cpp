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
    int ia[] = {7, 6, 8, 21, 5};
    int val;
    cin >> val;

    list<int> ilist(ia, ia + sizeof(ia) / sizeof(ia[0]));
    list<int>::iterator it = ilist.begin();

    while(it!=ilist.end())
    if (*it>=val) {
        ilist.insert(it, val);
        break;
    }
    it++;
    if(it==ilist.end())
        ilist.push_back(val);

    return 0;
}

