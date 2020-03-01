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
int main(){
    int a[10] = {10, 40, 30, 20};
    vector<int> v;
    vector<int>::iterator p;
    for (int i = 1; i<5; ++i) {
        v.push_back(i);
    }
    p = find(v.begin(), v.end(), 3);
    if (p!=v.end()) {
        cout << "Find" << *p << endl;
    }
    p = find(v.begin()+1, v.end(), 9);
    if (p==v.end()) {
        cout << "Not found" << endl;
    }
    int *pp = find(a, a + 4, 20);
    if(pp==a+4)
        cout << "not found" << endl;
    else
        cout << *pp << endl;
    return 0;

}
