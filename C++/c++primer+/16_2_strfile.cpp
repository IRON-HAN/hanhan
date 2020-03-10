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
    ifstream fin;
    fin.open("tobuy.txt");
    if (fin.is_open()==false) {
    cerr<<"Can't open file.\n";
    exit(EXIT_FAILURE);
    }
    string item;
    int cnt = 0;
    getline(fin, item, ':'); // 将':'作为分隔符
    while (fin) {
        ++cnt;
        cout << cnt << ": " << item << endl;
        getline(fin, item, ':');
    }
    cout << "Done\n";
    fin.close();
    return 0;
}
