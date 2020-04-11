#include<iostream>
using namespace std;
int n;//数量
int a[10002];//储存高度
bool p(int x) {
    if(x+1>n)//超过洼地数量的不找
        return false;
    if(a[x-1]<a[x])//后面比前面高就返回假
        return  false;
    if(a[x-1]>a[x]&&a[x+1]>a[x])//比前后矮返回真
        return true;
}
int main() {
    cin>>n;
    int maxn=0;
    for(int i=1; i<=n; i++) {
        cin>>a[i];
        if(a[i]==a[i-1]){
            i--;n--;//去除相邻重复点
        }
    }
    for(int i=2; i<=n; i++) {
        if(p(i)==true){
            maxn++;
        }
    }
    cout<<maxn;
    return 0;
}
