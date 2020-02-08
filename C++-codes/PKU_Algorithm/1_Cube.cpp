// 2020-2-7
#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    for (int a = 2; a <= N; a++)
        for (int b = 2; b < a; b++)
            for (int c = b; c < a; c++)
                for (int d = c; d < a; d++)
                    if(a*a*a == b*b*b + c*c*c + d*d*d)
                        cout << "cube = " << a << "triple = "
                        << b << '\t'
                        << c << '\t'
                        << d << endl;
    return 0;
}
// 形如a3=b3+c3+d3的等式被称为完美立方等式。例如123=63+83+103。
// 编写一个程序，对任给的正整数N（N≤100）寻找所有的四元组（a，b，c，d）
// 使得a3=b3+c3+d3，其中a，b，c，d大于1，小于等于N，且b<=c<=d。
// 输入
// 一个正整数N（N≤100）。
// 输出
// 每行输出一个完美立方。输出格式为：
// Cube=a，Triple=（b，c，d）
// 其中a，b，c，d所在位置分别用实际求出四元组值代入。
