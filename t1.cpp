#include <stdio.h>
// 交换左右两个数
void swap(int *l, int *r)
{
    int tmp;
    tmp = *l;
    *l = *r;
    *r = tmp;
}
// 排序函数
void sort(int a, int b, int c)
{
    if (a < b)
        swap(&a, &b);
    if (a < c)
        swap(&a, &c);
    if (b < c)
        swap(&b, &c);
    //依次输出3个数据
    printf("%d %d %d", a, b, c);
}
int main()
{
    int x, y, z;
    scanf("%d%d%d", &x, &y, &z);
    // 定义一个函数指针
    void (*fp)(int, int, int);
    // 将sort函数赋值给该指针
    fp = sort;
    fp(x, y, z);
    return 0;
}
