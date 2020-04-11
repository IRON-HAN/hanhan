#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>
#include <cstring>
#include <functional>
#include <cstdlib>
using namespace std;
// chcp 65001
void print(){}
template<class T,class... Types>
void _print(const T& firstArg,const Types&... args)
{
cout << firstArg ;
_print(args...);
}
int main()
{
    _print("5899", '\t', 888);
    return 0;
}
