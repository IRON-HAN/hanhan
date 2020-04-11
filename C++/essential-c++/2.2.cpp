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

void display( const vector<int> & vec, ostream &os = cout)
{
    for (int ix=0; ix<vec.size(); ++ix) {
        os << vec[ix] << ' ';
    }
    os << endl;
}

void swap(int & val1,int & val2)
{
    int tmp = val1;
    val1 = val2;
    val2 = tmp;
}

void bubble_sort(vector<int> & ve, ofstream *ofil=0)
{
    for (int ix = 0; ix < ve.size();++ix)
        for (int jx = ix + 1; jx < ve.size();++jx)
        if(ve[ix]>ve[jx]){
            if(ofil)
            (*ofil) << "about to call swap!"
                 << " ix: " << ix << " jx: " << jx << '\t'
                 << " swapping: " << ve[ix]
                 << " with " << ve[jx] << endl;
                 swap(ve[ix], ve[jx]);
        }

}


int main(){
    int ia[8] = {8, 34, 3, 13, 1, 21, 5, 2};
    //vector的初始化
    vector<int> ve(ia, ia + 8);

    ofstream ofil("data.txt");

    cout << "before sort:\n";
    display(ve);

    bubble_sort(ve,&ofil);
    cout << "after sort:\n";
    display(ve);
    return 0;
}
