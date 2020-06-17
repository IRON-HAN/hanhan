
#include <stdio.h>
#include <string.h>

/* 十六进制数转换为十进制数 */
long hexToDec(char *source);

/* 返回ch字符在sign数组中的序号 */
int getIndexOfSigns(char ch);

int main()
{
    char str[] = {0};
    gets(str);

    long num = hexToDec(str);
    printf("%ld\n", num);

    return 0;
}

/* 十六进制数转换为十进制数 */
long hexToDec(char *source)
{
    long sum = 0;
    long t = 1;
    int sign;
    char tmp[100] = {0};
    if (source[0] == '+')
        sign = 1;
    if (source[0] == '-')
        sign = -1;

    for (int i = 0, j = 0; i < strlen(source); ++i)
    {
        if (getIndexOfSigns(source[i + 1]) != -1)
        {
            tmp[j] = source[i + 1];
            ++j;
        }
    }
    printf("%s\n", tmp);

    for (int i = strlen(tmp) - 1; i >= 0; i--)
    {
        sum += t * getIndexOfSigns(*(tmp + i));
        t *= 16;
    }

    return sum * sign;
}

/* 返回ch字符在sign数组中的序号 */
int getIndexOfSigns(char ch)
{
    if (ch >= '0' && ch <= '9')
        return ch - '0';
    if (ch >= 'A' && ch <= 'F')
        return ch - 'A' + 10;
    if (ch >= 'a' && ch <= 'f')
        return ch - 'a' + 10;

    return -1;
}
