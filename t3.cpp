
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// 交换函数,交换左右两数的值
void swap(int *l, int *r)
{
    int tmp;
    tmp = *l;
    *l = *r;
    *r = tmp;
}
// 冒泡排序, 降序排列
void sort(int *v, int n)
{
    for (int i = n - 1; i > 0; --i)
        for (int j = 0; j < i; ++j)
            if (v[j] < v[j + 1])
                swap(&v[j], &v[j + 1]);
}

int main()
{
    // 随机数种子
    srand((unsigned)time(NULL));
    // 用户自定义数字的个数
    int size = 0;
    printf("input the count of int:\n");
    scanf("%d", &size);
    // 分配动态数组
    int *array_ptr = (int *)malloc(sizeof(int) * size);
    // 给动态数组分配随机数
    for (int i = 0; i < size; ++i)
        array_ptr[i] = rand() % 100 + 1;

    sort(array_ptr, size);
    // 将排序后的数组进行输出
    for (int i = 0; i < size; ++i)
        printf("%d  ", array_ptr[i]);

    printf("\n");

    return 0;
}
