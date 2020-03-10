//  2020/1/11
//  头文件：<set>
// 用法：multiset<T> st;
// 定义了一个multiset变量st，
// st里面可以存放T类型的数据，并且能自动排序。
// 开始st为空.
// 排序规则：表达式 “a < b”为true，则 a 排在 b 前面
// 操作：
// st.insert:插入
// st.find:查找
// st.erase：删除
// 复杂度： O(log n)

#include <cstdlib>
#include <functional>
#include <iostream>
#include <cstring>
#include <iterator>
#include <set>
using namespace std;
struct rule1{
    bool operator()(const int & a,const int &b){
        return (a%10)<(b%10);
    }
};
int main(){

    multiset<int> st1;
    int a[10] = {1, 14, 12, 13, 7, 13, 21, 19, 8, 8};
    // 插入a[i]的复制品
    for (int i = 0; i < 10; i++ ){
        st1.insert(a[i]);
    }
    // 迭代器，类似于指针
    // i是迭代器，相当于指针，可用于指向multiset中的元素。
    // 访问multiset中的元素要通 过迭代器。
    multiset<int>::iterator i;
    // 遍历
    // st.begin() 返回值类型为multiset<T>::iterator, 是指向st中的头一个元素的迭代器
    // st.end() 返回值类型为 multiset<T>::iterator, 是指向st中的最后一个元素后面的迭代器
    for (i = st1.begin(); i != st1.end(); i++)
        cout << *i << ",";
    cout << endl;
    // 查找22，返回值是迭代器
    i = st1.find(22);
    if(i == st1.end())
        cout << "not found" << endl;
    // 插入22
    i = st1.insert(22);
    // 遍历
    for (i = st1.begin(); i != st1.end(); i++)
        cout << *i << ",";
    cout << endl;
    // 删除12
    st1.erase(12);
    // 遍历
    for (i = st1.begin(); i != st1.end(); i++)
        cout << *i << ",";
    cout << endl;

    // 返回最靠右（后）的迭代器 it；
    // 使得【begin(),it）中的元素都在13前面
    // O（log(n)）
    i = st1.lower_bound(13);
    cout << *i << endl;
    // 返回最靠左（前）的迭代器 it；
    // 使得【it,end()）中的元素都在13前面
    // O（log(n)）
    i = st1.upper_bound(13);
    cout << *i << endl;
    // 按照从大到小排列
    multiset<int, greater<int> > st2;
    for (int i = 0; i < 10; i++ ){
        st2.insert(a[i]);
    }
    // 迭代器，类似于指针
    multiset<int, greater<int> >::iterator j;
    // 遍历
    for (j = st2.begin(); j != st2.end(); j++)
        cout << *j<< ",";
    cout << endl;
    // 按照个位数从小到大排列
    multiset<int, rule1> st3;
    for (int i = 0; i < 10; i++ ){
        st3.insert(a[i]);
    }
    multiset<int,rule1>::iterator p;
    for (p = st3.begin(); p != st3.end(); p++)
        cout << *p<< ",";
    cout << endl;
    // 查找133
    p = st3.find(133);
    cout << *p << endl;

    system("pause");

    return 0;
}
