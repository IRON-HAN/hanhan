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

bool book[100000001];

void prime(int b) {
    memset(book, true, sizeof(book));
    book[1]=0;//1不是质数
    int n=sqrt(b);
    int i;
    for (i=2;i<=n;i++) {
        if (book[i]) {
            //质数的倍数绝对不是质数，把所有质数的倍数全部设为false
            for (int j=2;j<=b/i;j++)
                book[i*j]=0;
        }
    }
}

bool isHWS(int num) {

    int temp=num,ans=0;
    while (temp) {
        ans=ans*10+temp%10;
        temp/=10;
    }
    if (ans==num)
        return true;
    else
        return false;
}

int main() {
    int a,b;
    cin>>a>>b;
    //b<=10000000这个判断条件来自：除了11以外，一个数的位数是偶数的话，不可能为回文数素数。
    // 如果一个回文素数的位数是偶数，则它的奇数位上的数字和与偶数位上的数字和必然相等；
    // 根据数的整除性理论，容易判断这样的数肯定能被11整除，所以它就不可能是素数。
    if (b>=10000000)
        b=9999999;
    prime(b);

    if(a>b)
        return 0;

    if (a%2==0) a++;//除了2以外，2的倍数不可能是质数
    int i;
    for (i=a;i<=b;i+=2) {
        if (book[i] && isHWS(i))
            cout<<i<<endl;//如果既是质数同时也是回文数，就输出。
    }
    return 0;
}
