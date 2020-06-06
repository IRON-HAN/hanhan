// 查找子串
// 得到所有子串起始处的下标
// 且子串的区间彼此不会重叠
#include <stdio.h>
#include <string.h>

#define N 30

void Find_All_Index(char *str, char *sub, int *num, int *pos)
{
    int flag = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == sub[0])
        {
            flag = 1;
            for (int j = 0; j < strlen(sub); j++)
            {
                if ((i + j) >= strlen(str) || str[i + j] != sub[j])
                {
                    flag = 0;
                    break;
                }
            }
        }
        if (flag == 1)
        {
            pos[*num] = i;
            (*num)++;
            flag = 0;
        }
    }
    return;
}
int main()
{

    char str1[N * N], str2[N];
    gets(str1);
    gets(str2);
    int posArray[N]; //存放匹配字符串的位置
    int cnt = 0;     //记录匹配字符串的个数
    int size = strlen(str2);
    Find_All_Index(str1, str2, &cnt, posArray);

    int result_Array[N];
    result_Array[0] = posArray[0];

    int j = 1;
    int tmp = posArray[0];
    for (int i = 1; i < cnt; ++i)
    {
        if (posArray[i] - tmp < size)
        {
            continue;
        }
        else
        {
            result_Array[j++] = posArray[i];
            tmp = posArray[i];
        }
    }

    for (int i = 0; i < j; ++i)
    {
        printf("%d-%d\n", result_Array[i], result_Array[i] + size - 1);
    }

    return 0;
}
