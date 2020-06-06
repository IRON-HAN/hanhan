//构造函数与复制构造函数
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <fstream>
#include <functional>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
using namespace std;
// chcp 65001

static int cnt = 0;
class A
{
    int i;

public:
    void print(const string &msg = "")
    {
        if (msg.size())
            cout << msg << ": ";
        cout << "Obj_cnt= " << cnt << endl;
    }

    A()
    {
        ++cnt;
        print("A()");
    }
    A(int i)
    {
        ++cnt;
        print("A(int)");
    }
    A(const A &a)
    {
        ++cnt;
        print("A(A&)");
    }
    ~A()
    {
        --cnt;
        print("~A");
    }
};

A f(A x)
{
    cout << "begin of f()\n";
    x.print("x inside f()");
    cout << "end of f()\n";
    return x;
}

int main()
{
    A h1;
    h1.print("after construction of h1");
    // 注意: 等价于 A h2(10);
    A h2 = 10;
    h2.print("after construction of h2");
    // 注意: 等价于 A h3(h2);
    A h3(h2);
    h3.print("after construction of h3");
    // A h4 = f(h1);
    // h1.print("after calling f()");

    return 0;
}
