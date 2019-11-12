#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
int main() {
    unsigned long num;//要检查的数
    unsigned long div;//可能的约数
    _Bool isprime;

    printf("please enter an int:");
    printf("enter q to quit.\n");
    while (scanf("%lu",&num)==1) {
        for (div = 2, isprime = true; (div * div) <= num;div++)
    {
        if (num%div==0) {
        if ((div*div)!=num)
            printf("%lu is divided by %lu and %lu.\n",
                   num, div, num / div);


        else
            printf("%lu is divided by %lu.\n", num, div);
        isprime = false;
        }

    }
     if (isprime) {
         printf("%lu is prime.\n", num);
    }
    printf("please enter another int:\n");
    printf("enter q to quit.\n");
    }

    //getchar();
    system("pause");
    return 0;
}
