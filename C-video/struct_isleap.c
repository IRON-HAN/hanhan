#include <stdio.h>
#include <stdbool.h>

struct date{
    int month;
    int day;
    int year;
};

_Bool Is_leap(struct date d);
int num_days(struct date d);

int main(){
    struct date today, tomorrow;

    printf("input(month,day,year):\n");
    scanf("%d,%d,%d", &today.month, &today.day, &today.year);
    printf("%d,%d,%d", today.month, today.day, today.year);


    if (today.day!=num_days(today)) {
        tomorrow.day = today.day + 1;
        tomorrow.month = today.month ;
        tomorrow.year = today.year ;

    }
    else if (today.month==12) {
        tomorrow.day = 1;
        tomorrow.month = 1;
        tomorrow.year = today.year + 1;
    }
    else {
        tomorrow.day = 1;
        tomorrow.month = today.month + 1;
        tomorrow.year = today.year;
    }
    printf("tomorrow is %d-%d-%d.\n", tomorrow.year, tomorrow.month,
        tomorrow.day);


    return 0;

}

int num_days(struct date d){
    int days;
    const int day_permonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (d.month==2 && Is_leap(d)) {
        days = 29;
    }
    else {
        days = day_permonth[d.month - 1];
    }
    return days;
}
//闰年
_Bool Is_leap(struct date d){
    bool leap = false;

    if((d.year%4==0&&d.year%100!=0)||d.year%400==0)
        leap = true;

    return leap;
}
