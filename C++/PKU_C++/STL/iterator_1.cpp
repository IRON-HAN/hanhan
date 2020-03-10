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
using namespace std;
int main() {
    vector<int> v0;
    for (int n = 0; n<5; n++) {
        v0.push_back(n);// push_back在vector尾部增加一个元素
    }
    vector<int>::iterator i;// 定义正向迭代器
    for (i = v0.begin();i!=v0.end(); i++)//遍历容器
    {
        cout << *i << " ";
        *i *= 2;
    }
    cout << endl;
    // 反向迭代器遍历容器
    for (vector<int>::reverse_iterator j=v0.rbegin(); j!=v0.rend(); j++) {
        cout << *j << " ";
    }

    vector<int> v(100);
    for (int i = 0; i <v.size(); ++i) {
        cout << v[i];
    }
    vector<int>::iterator j;
    // 用 != 比较两个迭代器
    for (j = v.begin(); j!=v.end(); ++j) {
        cout << *j;
    }
    // 用 < 比较两个迭代器
    for (j = v.begin(); j!=v.end(); ++j) {
        cout << *j;
    }
    i = v.begin();

    while (i<v.end()) {
        cout << *i;
        i += 2;// 随机访问迭代器支持 += 自增操作
    }
    return 0;
}
