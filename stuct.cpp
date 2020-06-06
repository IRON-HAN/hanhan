#include <stdio.h>

// 使用typedef关键字化简命名
typedef struct
{
    char id[5];
    char name[20];
    int score[4];
    double ave;
} stud;

// Input函数,需要获取该结构体的地址,以对其内容进行写入
void stud_input(stud *p)
{
    printf("input student's id:\n");
    gets(p->id); // 对于字符数组通过gets函数读入
    printf("input student's name:\n");
    gets(p->name);
    printf("input student's score:\n");
    for (int i = 0; i < 4; ++i)
        scanf("%d", &p->score[i]); // 对于int数组 通过scanf和for循环实现读入
    printf("input finished!\n");
}

void stud_output(stud *p)
{
    printf("student's id is %s\n", p->id);
    printf("student's name is %s\n", p->name);
    printf("student's score is \n");
    for (int i = 0; i < 4; ++i)
        printf("%d  ", p->score[i]);

    printf("\nstudent's average is %f\n", p->ave);
    printf("output finished\n");
}

double stud_aver(stud *p)
{
    double sum = 0;
    // 通过for循环累加求出分数之和
    for (int i = 0; i < 4; ++i)
        sum += p->score[i];
    // 除法得出平均分
    p->ave = sum / 4.0;
    // 将平均分返回
    return p->ave;
}
int main()
{
    stud stu1;
    stud_input(&stu1);
    double ave1 = stud_aver(&stu1);
    stud_output(&stu1);

    return 0;
}
