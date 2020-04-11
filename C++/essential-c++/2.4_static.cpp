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


inline bool is_size_ok(int size)
{
    const int MAX = 1024;

    if (size<=0 || size>MAX) {
        cerr << "invalid size:\n";
        return 0;
    }
    return 1;
}


const vector<int>* fibon_seq(int size)
{
    static vector<int> elems;

    if(! is_size_ok(size))
        return 0;

    for (int ix = elems.size(); ix < size;++ix)
    {
        if(ix==0 || ix==1)
            elems.push_back(1);
        else
            elems.push_back(elems[ix - 1] + elems[ix - 2]);
    }
    return &elems;
}

inline bool fibon_elem(int pos,int &elem)
{
    const vector<int> *p_seq = fibon_seq(pos);
    if (!p_seq) {
        elem = 0;
        return false;
    }
    elem = (*p_seq)[pos - 1];
    return true;
}

int main()
{
    int pos;
    while (true) {
        cout << "Please enter a position(-1 to break): ";
        cin >> pos;
        if (pos == -1) {
            break;
        }

        int elem;
        if (fibon_elem(pos, elem)) {
            cout << "element # " << pos
                << " is " << elem << endl;
        } else {
            cout << "Sorry. Could not calculate element # " << pos << endl;
        }
    }
}
