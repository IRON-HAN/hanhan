// 2020-2-7

#include <iostream>
using namespace std;
const int N = 21252;
int main(){

    int p, e, i, d, caseNo = 0;
    while ( cin >> p >> e >> i >> d && p != -1) {
        caseNo++;
        int k;
        for (k = d + 1; (k - p) % 23; k++)
            ;
        for (; (k - e) % 28; k+=23)
            ;
        for (; (k - i) % 33; k+=23*28)
            ;
            if((k-d) <= N){
            cout << "Case " << caseNo << endl
             << "the next peak occurs in " << k - d << " days" << endl;
            }
    }
    return 0;
}
// 人有体力、情商、智商的高峰日子，它们分别每隔
// 23天、28天和33天出现一次。对于每个人，我们想
// 知道何时三个高峰落在同一天。给定三个高峰出现
// 的日子p，e和i（不一定是第一次高峰出现的日子），
// 再给定另一个指定的日子d，你的任务是输出日子d
// 之后，下一次三个高峰落在同一天的日子（用距离d
// 的天数表示）。
// 例如：给定日子为10，下次出现三个高峰同一天的日子是12，则输出2。
// 输入
// 输入四个整数：p，e，i和d。p，e，i分别表示体力、情感和智力高峰出现的日子。
// d是给定的日子，可能小于p，e或i。
// 所有给定日子是非负的并且小于或等于365，所求的日子小于或等于21252。
// 输出
// 从给定日子起，下一次三个高峰同一天的日子（距离给定日子的天数）。