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
