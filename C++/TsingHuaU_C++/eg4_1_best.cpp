// 2020-2-2

// eg4-1 best

// main: 委托构造函数
// 与 4_1_1对比

#include <iostream>
using namespace std;

class Clock
{
public:
    // 定义构造函数
    Clock(int newH, int newM, int newS) : hour(newH), minute(newM), second(newS) {}
    // 委托构造函数实现默认构造函数
    // 调用另一个函数
    Clock() : Clock(0, 0, 0) {}

    void setTime(int newH = 0, int newM = 0, int newS = 0);
    void showTime();

private:
    int hour, minute, second;
};
// 成员函数的实现
void Clock::setTime(int newH, int newM, int newS)
{
    hour = newH;
    minute = newM;
    second = newS;
}

inline void Clock::showTime()
{
    cout << "The time is:" << endl;
    cout << hour << ":" << minute << ":" << second << endl;
}

// 对象的使用

int main()
{

    // 调用有参数的构造函数
    Clock c1(8, 10, 0);
    c1.showTime();

    // 调用无参数的构造函数
    Clock c2;
    c2.showTime();

    return 0;
}
