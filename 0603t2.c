#include <stdio.h>
int main()
{
    char *cur[] = {"百元", "五十元", "二十元", "十元", "五元", "二元", "一元"};
    int amt_of_cur[7];
    const int val_of_cur[7] = {100, 50, 20, 10, 5, 2, 1};

    int amount = 0;
    scanf("%d", &amount);
    for (int i = 0; i < 7; ++i)
    {
        amt_of_cur[i] = amount / val_of_cur[i];
        amount -= amt_of_cur[i] * val_of_cur[i];
    }

    for (int i = 0; i < 7; ++i)
    {
        printf("%s: %d张\n", cur[i], amt_of_cur[i]);
    }
    return 0;
}
