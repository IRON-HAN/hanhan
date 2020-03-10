// 2020/1/11
// combination--组合数函数
// factorial--阶乘函数
// 缺点: 算阶乘的时候容易超出long long 的范围
#include <iostream>
using namespace std;
// 阶乘函数1
long long fact(int n){
    if(n<0)
        return -1;
    else if(n==1||n==0)
        return 1;
    else
        return n*fact(n-1);
}
// 阶乘函数2--尾递归
// a用来存放结果，传参时必须为1
long long Fac(int n,int a){
    if(n==0||n==1)
        return a;
    else
        return Fac(n-1, n*a);
}
// 组合数函数
long long comb(int m, int k){
    // cout << "fac(m): " << fact(m) << endl;
    // cout << "fac(k): " << fact(k) << endl;
    // cout << "fac(m-k): " << fact(m-k) << endl;
    return fact(m)/fact(k)/fact(m-k);
}

// 主函数
int main(){
    int m, k;
    do {
        cout << "input m,k (m>=k>0):" << endl;
        cin >> m >> k;
    } while (m < k || m < 0 || k < 0);
    cout << comb(m, k) << endl;

    return 0;
}

