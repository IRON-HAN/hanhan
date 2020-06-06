#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr = (int *)malloc(sizeof(int));
    scanf("%d", ptr);

    if (*ptr <= 1)
        printf("%d不是完数\n", *ptr);
    else
    {
        int sum = 1;
        for (int i = 2; i < *ptr; ++i)
            if (*ptr % i == 0)
                sum += i;
        if (sum == *ptr)
            printf("%d是完数\n", *ptr);
        else
            printf("%d不是完数\n", *ptr);
    }

    return 0;
}
