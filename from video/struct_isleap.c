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

    if (today.day!=num_days(today)) {
        tomorrow.day = today.day + 1;
        tomorrow.month = today.month + 1;
        tomorrow.year = today.year + 1;

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
    

}
