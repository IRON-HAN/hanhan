// 2020/1/11

#include <iostream>
#include <cstring>
#include <set>
using namespace std;
int main(){

    set<int> st1;
    int a[10] = {1, 2, 3, 7, 7, 8, 8, 5, 6, 12};

    for (int i = 0; i < 10; i++)
        st1.insert(a[i]);
    // size表示的是无重复数字的个数
    cout << st1.size() << endl;
    // 迭代器+遍历
    set<int>::iterator i;
    for (i = st1.begin(); i != st1.end();i++)
        cout << *i << ",";
    cout << endl;

    // set的插入需要做判断
    pair<set<int>::iterator, bool> res = st1.insert(2);
    if(!res.second)
        cout << *res.first << " already exists." << endl;
    else
        cout << *res.first << "inserted." << endl;

    return 0;

}
