
#include <stdio.h>
int is_leap(int year)
{
    if (year % 400 == 0 || (year % 4 == 0 && year % 100))
        return 1;
    else
        return 0;
}

unsigned days_of_month(unsigned month, int year)
{
    unsigned day_array[] = {31, (is_leap(year) ? 29 : 28),
                            31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return day_array[month - 1];
}
typedef struct
{
    int year;
    int month;
    int day;
} Date;
int main()
{
    Date tem;
    int cnt = 0;
    scanf("%d%d%d", &tem.year, &tem.month, &tem.day);
    for (int i = 1; i < tem.month; ++i)
        cnt += days_of_month(i, tem.year);
    cnt += tem.day;
    printf("输入日期是当年的%d天\n", cnt);

    return 0;
}
