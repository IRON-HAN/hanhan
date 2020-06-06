#include <stdio.h>
#include <string.h>
typedef struct
{
    char name[20];
    char tel_num[20];
} tel;

int main()
{
    tel info[100];

    int i = 0;
    for (; 1; ++i)
    {
        printf("请输入姓名(输入#结束循环):\n");
        gets(info[i].name);
        if ((strcmp("#", info[i].name)) == 0)
            break;
        printf("请输入电话号码:\n");
        gets(info[i].tel_num);
    }

    char tmp[20];
    while (1)
    {
        printf("请输入要查找的姓名(输入000结束循环):\n");
        gets(tmp);
        if ((strcmp("0", tmp)) == 0)
            break;
        for (int j = 0; j < i; ++j)
        {
            if ((strcmp(info[j].name, tmp)) == 0)
            {
                printf("%s的电话号码: %s\n", info[j].name, info[j].tel_num);
                break;
            }
        }
    }

    return 0;
}
