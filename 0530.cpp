#include <stdio.h>
#include <string.h>

int palindrome(char *s);

int main()
{
    char s[80];
    printf(" 输入字符串:");
    gets(s);
    if (palindrome(s))
        printf(" 字符串\"%s\"是回文！\n", s);
    else
        printf("字符串%s不是回文！\n", s);
    return 0;
}

int palindrome(char *s)
{
    int n = strlen(s);
    // 如果输出的字符串为空,则退出程序
    if (s == NULL || n < 1)
        return 0;
    //定义和初始化头指针和尾指针
    char *front, *back;
    front = s;
    back = s + n - 1;
    // 将头指针移动到第一个不是空格的字符处
    while (*front == ' ')
        ++front;
    // 将尾指针移动到第一个不是空格的字符处
    while (*back == ' ')
        --back;
    // 逐个判断头部和尾部是否相等
    while (front < back)
    {
        if (*front != *back)
            return 0;
        ++front;
        --back;
    }
    return 1;
}
