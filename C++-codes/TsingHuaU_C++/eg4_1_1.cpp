// 2020-2-2

// eg4-1 修改版

// main: 构造函数 & 重载

#include<iostream>
using namespace std;

class Clock{
    public:
        // 定义构造函数1: 需要实参(位置:先声明+后定义)
        Clock(int newH, int newM, int newS);
        // 定义构造函数2: 不需要实参(位置:函数内定义)
        Clock():hour(0),minute(0),second(0){}
        // 初始化列表(效率更高)

        void setTime(int newH = 0, int newM = 0, int newS = 0);
        void showTime();

    private:
        int hour, minute, second;

};
// 成员函数的实现
void Clock::setTime(int newH, int newM, int newS) {
    hour = newH;
    minute = newM;
    second = newS;
}

inline void Clock::showTime() {
    cout << "The time is:" << endl;
    cout << hour << ":" << minute << ":" << second << endl;
}

// 构造函数的实现--初始化列表(效率更高)
Clock::Clock(int newH, int newM, int newS):
hour(newH),minute(newM),second(newS){}
// Clock::Clock(int newH, int newM, int newS){
//     hour = newH;
//     minute = newM;
//     second = newS;
// }

// 对象的使用

int main() {

    // 调用有参数的构造函数
    Clock c1(8, 10, 0);
    c1.showTime();

    // 调用无参数的构造函数
    Clock c2;
    c2.showTime();

    return 0;

}
