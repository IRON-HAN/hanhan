// 2020-1-19
// 哈工大版
// 可变/动态数组
// 结构体
#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int *array;
    int len;
} DArray;
// 函数列表
DArray create(int);
void grow(DArray *, int);
void print(DArray *);
void release(DArray *);
// 主函数
int main()
{
    int n;
    DArray a;
    scanf("%d", &n);
    a = create(n);
    print(&a);
    grow(&a, n * 2);
    print(&a);
    release(&a);
    system("pause");
    return 0;
}
DArray create(int n)
{
    DArray a;
    int i;
    a.array = (int *)malloc(sizeof(int) * n);

    if (a.array != NULL)
    {
        a.len = n;
        for (i = 0; i < a.len; i++)
            scanf("%d", &a.array[i]);
    }
    return a;
}
// grow函数的实现思路：
// 1. 重新申请
// 2. 逐个赋值
// 3. free原来的
void grow(DArray *a_ptr, int n)
{
    int *p;
    int i;
    p = (int *)malloc(sizeof(int) * n);
    if (p == NULL)
        return;
    else
    {
        for (i = 0; i < a_ptr->len; i++)
            p[i] = a_ptr->array[i];
        for (i = a_ptr->len; i < n; i++)
            scanf("%d", &p[i]);
        free(a_ptr->array);
        a_ptr->array = p;
        a_ptr->len = n;
    }
}
void print(DArray *p)
{
    int i;
    for (i = 0; i < p->len; i++)
        printf("%d", p->array[i]);
    return;
}
void release(DArray *p)
{
    free(p->array);
    return;
}
