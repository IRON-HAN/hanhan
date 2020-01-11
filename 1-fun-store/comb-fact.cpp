// 2020/1/11
// combination--组合数函数
// factorial--阶乘函数

#include <iostream>
using namespace std;
// 阶乘函数
long fact(int n){
    if(n<0)
        return -1;
    else if(n==1||n==0)
        return 1;
    else
        return n*fact(n-1);
}
// 组合数函数
long comb(int m, int k){
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

