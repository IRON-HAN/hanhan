// 2020/1/10
// 1. 对基本类型的数组从小到大排序：
// sort（name+n1,name+n2）;
// n1,n2是int类型的表达式可包含变量
// 2. 对元素类型为T的基本类型数组从大到小排序：
// sort（name+n1,name+n2,greater<T>()）;
// 3. 用自定义的排序规则，对类型为T的数组排序
// sort（name+n1,name+n2,排序规则结构名（））;
// * 注意：区间为[n1,n2)

// 排序规则结构的定义方式：
// struct 结构名{
//     bool operator()(const T & a1,const T & a2) const{
//         //若a1应该在a2前面，则返回true。
//         //否则返回false。
//     }
// };

// 排序规则返回 true，意味着 a1 必须在 a2 前面
// 返回 false，意味着 a1 并非必须在 a2 前面
// 排序规则的写法，不能造成比较 a1,a2 返回 true 比较 a2,a1 也返回 true
// 否则sort会 runtime error
// 比较 a1,a2 返回 false 比较 a2,a1 也返回 false，则没有问题

#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
// 自定义规则1：从大到小排列
struct rule1{
    bool operator()(const int & a1,const int & a2) const{
        return a1>a2;
    }
};
// 自定义规则2：个位数从大到小排列
struct rule2{
    bool operator()(const int & a1,const int & a2) const{
        return a1%10 > a2%10;
    }
};
// 输出函数
void print(int *a,int size){
    for (int i = 0; i < size;i++ )
        cout << a[i] << ",";
    cout << endl;
}
int main(){
    int a[] = {12, 45, 3, 98, 21, 7};
    int n = sizeof(a)/sizeof(int);
    //从小到大
    sort(a, a + n);
    print(a, n);
    //从大到小
    sort(a, a + n,rule1());
    print(a, n);
    //个位从大到小
    sort(a, a + n,rule2());
    print(a, n);

    return 0;
}
