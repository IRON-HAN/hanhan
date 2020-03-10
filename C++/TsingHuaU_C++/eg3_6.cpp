// 2020-1-26

// 例3-6 投骰子的随机游戏

// 每个骰子有六面，点数分别为1、2、3、4、5、6。游戏者在程序开始时输入一个无符号整数，作为产生随机数的种子。
// 每轮投两次骰子，第一轮如果和数为7或11则为胜，游戏结束；
// 和数为2、3或12则为负，游戏结束；
// 和数为其它值则将此值作为自己的点数，继续第二轮、第三轮...直到某轮的和数等于点数则取胜，若在此前出现和数为7则为负。

// rand函数
// l  函数原型：int rand(void)；
// l  所需头文件：<cstdlib>
// l  功能和返回值：求出并返回一个伪随机数

// srand函数
// l  void srand(unsigned int seed);
// l  参数：seed产生随机数的种子
// l  所需头文件：<cstdlib>
// l  功能：为使rand()产生一序列伪随机整数而设置起始点。使用1作为seed参数，可以重新初化rand()。
#include <iostream>
#include <cstdlib>
#include <set>
#include <map>
#include <string>
#include <algorithm>
#include <cstdio>
#include <ctime>
using namespace std;

enum game_status
{
    WIN,
    LOSE,
    PLAYING
};
int roll_dice();
int main(){
    int sum, point;
    game_status status;

    int roll_dice();
    int op = 0;

    cout << "enter 0 or 1(0 to quit):" << endl;
    cin >> op;

    while (op) {

        srand((unsigned)time(NULL));
        sum = roll_dice();

        switch (sum) {
            case 7:
            case 11:
                status = WIN;
                break;
            case 2:
            case 3:
            case 12:
                status = LOSE;
                break;
            default:
                status = PLAYING;
                point = sum;
                cout << "point : " << point << endl;
                break;
        }
        while (status==PLAYING) {
            sum = roll_dice();
            if (sum==point) {
                status = WIN;
            }
            else if (sum == 7) {
                status = LOSE;
            }

        }
        if (status == WIN) {
            cout << "player won" << endl;
        }
        else
            cout << "player lost" << endl;

    cin >> op;
    }
    system("pause");
    return 0;
}
int roll_dice(){
    int die1 = 1 + rand() % 6;
    int die2 = 1 + rand() % 6;
    int sum = die1 + die2;

    cout << die1 << '\t' << die2 << endl;
    cout << "the sum is:" << sum << endl;

    return sum;
}
