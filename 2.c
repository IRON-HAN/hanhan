#include <ctype.h>
#include <stdio.h>
#include <string.h>
int TitleFind(char buf[255]);    //查找子字符串函数
int numOfdigit(char title[255]); //统计标题中数字的个数
int numOfChar(char title[255]);  //统计标题中字符的个数
int main()
{
    FILE *fp;
    char buf[255] = {0};
    char title[255] = {0};
    int cnt = 1, flag;
    if ((fp = fopen("a.txt", "r+")) == NULL)
    {
        printf("open error!");
        return -1;
    }
    fgets(buf, 255, fp);
    flag = TitleFind(buf);
    while (flag == 0)
    {
        fgets(buf, 255, fp);
        flag = TitleFind(buf);
        cnt++; //计算行数
    }
    for (int i = 0; i < 255; i++)
    {
        title[i] = buf[flag]; //把标题装入新的字符串
        flag++;
        if (buf[flag] == '<')
            break;
    }
    fclose(fp);
    fp = fopen("b.txt", "w"); //打开文件
    char str1[255] = "a.htm网页的标题是:";
    strcat(str1, title); //连接字符串
    fputs(str1, fp);
    char str2[255] = "\n标题在文件a.htm网页的第几行:";
    fprintf(fp, "%s%d\n", str2, cnt);
    char str3[255] = "标题中数字字符的个数:";
    fprintf(fp, "%s%d\n", str3, numOfdigit(title));
    char str4[255] = "标题中字母字符的个数:";
    fprintf(fp, "%s%d\n", str4, numOfChar(title));
    fclose(fp);
    printf("完成解析\n");
    return 0;
}
int TitleFind(char buf[255])
{
    const char *Sub = "<title>";
    static int i = 0;
    int j = 0;
    for (; i <= 255; i++)
    {
        if (buf[i] == Sub[0])
            break;
        if (buf[i] == '\0')
            return 0;
    }
    while (j < 7)
    {
        if (buf[i + j] == Sub[j])
            j++;
        else
            return 0;
    }
    return i + 7;
}

int numOfdigit(char title[255])
{
    int n = 0;
    char ch;
    for (int i = 0; i <= strlen(title); i++)
    {
        ch = title[i];
        if (isdigit(ch)) //判断是否为数字
            n++;
    }
    return n;
}

int numOfChar(char title[255])
{
    int n = 0;
    char ch;
    for (int i = 0; i <= strlen(title); i++)
    {
        ch = title[i];
        if (isalpha(ch)) //判断是否为字母
            n++;
    }
    return n;
}
