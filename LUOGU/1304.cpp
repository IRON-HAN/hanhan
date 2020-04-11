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

bool book[10001];

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

int main(){
    int n;
    cin >> n;
    cin.get();
    prime(n);

    printf("4=2+2\n");
    for (int k = 6; k <= n;k+=2){
        for (int i = 3; i < 5000; i++)
        {
            if (book[i]&&book[k-i]) {
            printf("%d=%d+%d\n",k,i,k-i);
            break;
            }

        }
    }
    return 0;
}
