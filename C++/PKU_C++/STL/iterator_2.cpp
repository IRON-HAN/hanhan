#include <iostream>
#include <cstdio>
#include <fstream>
#include <algorithm>
#include <cmath>
#include <deque>
#include <iterator>
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
    int a[5] = {1, 2, 3, 4, 5};
    list<int> b(a, a + 5);
    list<int>::iterator p = b.begin();
    // p向后移动2个,指向3
    advance(p, 2);
    cout << "Now p is: ";
    cout << *p << endl;

    list<int>::iterator q = b.end();
    q--;
    cout << "The distance is: ";
    cout << distance(p, q) << endl;

    iter_swap(p, q); //交换p 和 q
    cout << "Now p,q is: " << endl;
    cout << *p << endl
         << *q << endl;
    return 0;
}
