//数组 计算星期几
#include <iostream>
using namespace std;
int monthdays[13] = {-1, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int main()
{
    int year, month, date;
    int days = 0;
    cout << "tell me year & month & date:" << endl;
    cin >> year >> month >> date;

    for (int y = 2012; y < year; y++)
    {
        if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
            days += 366;
        else
            days += 365;
    }

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        monthdays[2] = 29;
    for (int m = 1; m < month; m++)
    {
        days += monthdays[m];
    }

    days += date;
    days -= 22;

    cout << "today is" << endl;
    cout << days % 7 << endl;

    system("pause");
    return 0;
}
