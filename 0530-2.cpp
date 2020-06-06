#include <stdio.h>

int is_leap(int year)
{
    if (year % 400 == 0 || (year % 4 == 0 && year % 100))
        return 1;
    else
        return 0;
}
int main()
{
    for (int y = 2000; y <= 2500; ++y)
    {
        if (is_leap(y))
            printf("%d 是闰年\n", y);
        else
            printf("%d 不是闰年\n", y);
    }

    return 0;
}
