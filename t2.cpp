#include <math.h>
#include <stdio.h>
#include <stdlib.h>
// 判断一个整数是否是素数
int isprime(int n)
{
    int s = sqrt(double(n));
    for (int i = 2; i <= s; i++)
    {// 如果找到一个数可以整除,则不是素数
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    // 通过malloc函数分配一块4字节内存
    // 并让ptr指向该内存
    int *ptr1 = (int *)malloc(sizeof(int));
    scanf("%d", ptr1);
    if (isprime(*ptr1))
        printf("%d is a prime", *ptr1);
    else
        printf("%d is not a prime", *ptr1);
    return 0;
}
