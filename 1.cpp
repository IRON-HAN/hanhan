
#include <iostream>
#include <stdio.h>
typedef struct stu_type
{
    char no[13];
    char name[20];
    int age;
} STUDENT;

// 输入5个学生的信息，统计年龄在20岁以上的学生个数。（使用结构体数组）

// 统计函数原型如下：int count(STUDENT *p)
int count(STUDENT *p)
{
    int cnt = 0;
    for (int i = 0; i < 3; ++i)
        if (p[i].age > 20)
            ++cnt;

    return cnt;
}
int main()
{

    STUDENT students[5];
    printf("begin input:\n");
    for (int i = 0; i < 3; ++i)
    {
        printf("input %d\n", i + 1);
        std::cin >> students[i].no >> students[i].name >> students[i].age;
    }
    printf("input ends.\n");
    int cnt = count(students);
    printf("count=%d", cnt);
    return 0;
}
