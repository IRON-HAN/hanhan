
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
// 任务1:
// 用户给予一个整数vector , 我们必须返回一个新的vector ,
// 其中内含原vector中小于10的所有数值
vector<int> less_than_val (const vector<int> & vec, int upper_val)
{
    vector<int> nvec;
    for (int ix = 0; ix < vec.size();++ix)
        if(vec[ix]<upper_val)
            nvec.push_back(vec[ix]);

    return nvec;
}

// 任务2:
// 我们必须允许用户指定不同的比较搡作，如大于、小于等等
inline bool less_than(int v1, int v2)
{
    return v1 < v2 ? true : false;
}

inline bool greater_than(int v1, int v2)
{
    return v1 > v2 ? true : false;
}

vector<int> filter(const vector<int> &vec,
int filter_val, bool (*pred)(int, int))
{
    vector<int> nvec;

    for (int ix = 0; ix < vec.size(); ++ix)
        if(pred(vec[ix],filter_val))
            nvec.push_back(vec[ix]);

    return nvec;
}
// 计算值等于 val 的元素的个数
int count_occurs(const vector<int> &vec, int val)
{
    vector<int>::const_iterator it = vec.begin();
    int cnt = 0;
    while ((it=find(it,vec.end(),val))!=vec.end()) {
        ++cnt;
        ++it;
    }
    return cnt;
}

int main()
{
    int ia[5] = {38, 86, 94, 38, 46};
    vector<int> vec1(ia, ia + 5);
    vector<int> vec2 = less_than_val(vec1, 40);
    display(vec2);

    vector<int> vec3 = filter(vec1, 47, greater_than);
    display(vec3);

    int num = count_occurs(vec1, 38);
    cout << num;
    return 0;
}
