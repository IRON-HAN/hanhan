#include <iostream>
#include <cstdlib>
#include <set>
#include <map>
#include <string>
#include <algorithm>
#include <cstdio>
using namespace std;

// void swap1(int &a,int &b){
//     int tmp;
//     tmp = a;
//     a = b;
//     b = tmp;
// }
int n = 4;
int &setvalue(){
    return n;
}
int main() {
    // int n = 7;
    // int &r = n;
    // r = 4;
    // cout << r << endl;
    // cout << n << endl;
    // n = 5;
    // cout << r << endl;
    // int a = 4, b = 5;

    // int &r1 = a;
    // int &r2 = r1;// r2也引用了a

    // r2 = 10;// 对a赋值
    // cout << a << endl;
    // r1 = b;// 对a赋值
    // cout << a << endl;

    // int n1 = 1;
    // int n2 = 2;
    // swap1(n1, n2);
    // cout << n1 << n2 << endl;
    setvalue() = 40;
    cout << n << endl;
    return 0;
}
