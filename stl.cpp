#include <algorithm>
#include <cctype>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <functional>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <ostream>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <string>
#include <vector>
using namespace std;
// chcp 65001

std::default_random_engine generator(time(nullptr));
std::uniform_int_distribution<int> distribution(0, 50);
void print() {}
template <class T, class... Types>
void print(const T &firstArg, const Types &... args)
{
    cout << firstArg;
    print(args...);
}

int ia[8] = {1, 3, 6, 10, 15, 21, 28, 36};
vector<int> ivec(ia, ia + 8);
list<int> ilist(ia, ia + 8);

string sa[10] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j"};
vector<string> svec(sa, sa + 10);
list<string> slist(sa, sa + 10);

template <class T>
void print_elem(T elem) { cout << elem << " "; }
int main()
{

    // int VAL = 20;
    // int CNT = 3;

    cout << "1st experiment:" << endl;
    cout << "-----------------" << endl;
    // 1. accumulate: 元素累"加" [可查]
    int iresult = accumulate(ilist.begin(), ilist.end(), 0, plus<int>());
    print(iresult, "\n");
    iresult = accumulate(ilist.begin(), ilist.end(), 0, minus<int>());
    print(iresult, "\n");
    iresult = accumulate(ilist.begin(), ilist.end(), 1, multiplies<int>());
    print(iresult, "\n");

    cout << "2nd experiment:" << endl;
    cout << "-----------------" << endl;
    // 2.binary_search 二分查找
    sort(ia, ia + 8);
    bool found_it = binary_search(ia, ia + 8, 10);
    if (found_it)
        cout << "find" << endl;

    cout << "3rd experiment:" << endl;
    cout << "-----------------" << endl;
    // 3.copy 复制 [可查]
    vector<string> target(svec.size());
    copy(svec.begin(), svec.end(), target.begin());
    for (auto elem : target)
        cout << elem << " ";
    cout << endl;

    cout << "4 experiment:" << endl;
    cout << "-----------------" << endl;
    // 4. count 返回容器中该值出现的次数 [不可查]
    // @param: (begin, end, value)
    int cnt = count(ia, ia + 8, 10);
    cout << cnt << endl;

    cout << "5 experiment:" << endl;
    cout << "-----------------" << endl;
    // 5. count_if 返回容器中符合该条件的次数 [不可查]
    class Even
    {
    public:
        bool operator()(int val) { return !(val % 2); }
    };
    int ires = count_if(ia, ia + 8, bind2nd(less<int>(), 10));
    cout << ires << endl;
    ires = count_if(ilist.begin(), ilist.end(), Even());
    cout << ires << endl;

    cout << "6 experiment:" << endl;
    cout << "-----------------" << endl;
    // 6. equal 判断相等与否[可查]
    class EqualAndOdd
    {
    public:
        bool operator()(int v1, int v2)
        {
            return ((v1 == v2) && (v1 % 2));
        }
    };
    int ia1[] = {1, 1, 2, 3, 5};
    int ia2[] = {1, 1, 2, 3, 5, 8};
    bool res = equal(ia1, ia1 + 5, ia2);
    cout << res << endl;
    res = equal(ia1, ia1 + 5, ia2, EqualAndOdd());
    cout << res << endl;

    // 7. fill 改填元素值 fill_n 限定次数

    // fill(ivec.begin(), ivec.end(), VAL);
    // for (auto elem : ivec)
    //     cout << elem << " ";
    // cout << endl;

    // fill_n(ia, CNT, VAL);
    // for (auto elem : ia)
    //     cout << elem << " ";
    // cout << endl;

    // 8. find 如果找到 则返回指向该值的iterator
    // 如果找不到则返回end()

    // auto piter = find(ia, ia + 8, VAL);
    // auto iter = find(svec.begin(), svec.end(), "a");

    // 9. find_end 搜索某个子序列的最后一次出现的位置
    // 10. find_first_of 搜索某些元素首次出现的位置

    // 11. find_if() 在条件下搜索
    // 如果找到 则返回指向该值的iterator
    // 如果找不到则返回end()

    // 12. generate_n 以指定操作的运算结果填充n个元素的内容
    // class gen_by_two
    // {
    // public:
    //     gen_by_two(int seed = 0) : _seed(seed) {}
    //     int operator()() { return _seed += 2; }

    // private:
    //     int _seed;
    // };

    // vector<int> i_vec(10);
    // generate_n(i_vec.begin(), i_vec.end(), gen_by_two(100));
    // for (auto elem : i_vec)
    //     cout << elem << " ";
    // cout << endl;

    cout << "13 experiment:" << endl;
    cout << "-----------------" << endl;
    // 13. includes()包含关系 [不可查]

    int a1[] = {1, 3, 7, 5, 9};
    int a2[] = {7, 9};

    // 调用该函数必须是有序数组
    sort(a1, a1 + 5);
    sort(a2, a2 + 2);
    // @ param: begin_1,end_1,begin_2,end_2
    res = includes(a1, a1 + 5, a2, a2 + 2);
    if (res)
        cout << "included" << endl;

    cout << "14 experiment:" << endl;
    cout << "-----------------" << endl;
    // 14. inner_product() [可查]
    int a[] = {2, 3, 5, 8};
    int b[] = {1, 2, 3, 4};
    int i_res = inner_product(a, a + 4, b, 0);
    cout << "inner_product is  " << i_res << endl;
    i_res = inner_product(a, a + 4, b, 0, minus<int>(), plus<int>());
    cout << "modified inner_product is  " << i_res << endl;

    cout << "15 experiment:" << endl;
    cout << "-----------------" << endl;
    // 15. inplace_merge()覆写 [不可查]
    // 将同一个容器的两部分进行合并,仍保持有序状态
    int ia_15[10];
    for (int i = 0; i < 10; ++i)
        ia_15[i] = distribution(generator);
    cout << "ia_15 is" << endl;
    for (auto elem : ia_15)
        cout << elem << "  ";
    cout << endl;

    int *mid = ia_15 + 5, *last = ia_15 + 10;

    sort(ia_15, mid);
    sort(mid, last);
    cout << "ia_15-->mid is" << endl;
    for (int i = 0; i < 5; ++i)
        cout << ia_15[i] << "  ";
    cout << endl;
    cout << "mid-->last is" << endl;
    for (int i = 5; i < 10; ++i)
        cout << ia_15[i] << "  ";
    cout << endl;

    inplace_merge(ia_15, mid, last);
    cout << "ia_15 is:" << endl;
    for (auto elem : ia_15)
        cout << elem << "  ";
    cout << endl;

    return 0;
}
