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

bool book[20001];

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

int main() {

    int n;
    cin >> n;
    cin.get();
    prime(n);
    freopen("E:\\VS-Code-C\\CODES\\test_out.txt", "w", stdout); //输出重定向

    for (int i = 2; i < n / 3; i++) {
        for (int j = 2; j < n / 2; j++) {
            if (book[i]&&book[j]&&book[n-i-j]){
                cout << i << ' ' << j << ' ' << n - i - j << endl;
                return 0;
            }
        }
    }

}
