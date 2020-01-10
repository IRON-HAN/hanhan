#include <cstdio>
#include <iostream>
using namespace std;
int main(){
    freopen("E:\\VS-Code-C\\CPP-codes\\test.txt", "r", stdin);
    int n, max;
    while (cin >> n) {
        if(n > max)
            max = n;
    }
    cout << max << endl;
    return 0;
}
