#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
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
int main()
{
    string str="123456789";
    int index=2;
    int cnt=-1;
    auto s=str.substr(index,cnt);
    cout<<s<<endl;
    return 0;
}

