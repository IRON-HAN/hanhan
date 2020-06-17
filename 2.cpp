// 2、已知3个学生的3门课程的成绩存放在结构体变量中，
// 请设计一个独立的函数input输入学生的学号、姓名、数学、英语以及c课程成绩，
// 设计一个函数computerAver计算每个学生的平均成绩并写入结构体的成员aver中。
#include <stdio.h>
#include <iostream>
// 学生的结构体类型定义如下：
typedef struct stu
{
    int num;
    char name[20];
    float math;
    float english;
    float C_Language;

    float aver;
} STUDENT;

// 函数input 的原型如下：

STUDENT input(STUDENT *s)
{
    scanf("%d", &s->num);
    gets(s->name);
    getchar();
    scanf("%f", &s->math);
    scanf("%f", &s->english);
    scanf("%f", &s->C_Language);
    return *s;
}

// computerAver函数的原型如下：

float computerAver(STUDENT *st)
{
    float ave = (st->C_Language + st->english + st->math) / 3;
    st->aver = ave;

    return ave;
}

int main()
{
    STUDENT students[3];
    for (int i = 0; i < 3; ++i)
    {
        printf("input the %d\n", i + 1);
        input(&students[i]);
    }

    for (int i = 0; i < 3; ++i)
        computerAver(&students[i]);

    return 0;
}
