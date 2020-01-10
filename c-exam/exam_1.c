//使用"r+"模式，若打开文件不存在则跳出程序
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char text[100],word[100];    //如名字
    char name[100];                //文件名
    char select;                   //switch用的选择变量
    int pos,len,n;                 //位置、总长度、删去的长度
    char *p;
    void insert(int pos, char *p,char word[100],int len); //插入
    void read(char *p,FILE *fp,char name[100]);           //读取
    void output(char *p,FILE *fp);                        //输出
    void delete (int pos, char *p, int len,int n);        //删除
    p = text;                                           //让指针指向字符串
    printf("Please input the file's name:\n");            //输入文件名
    gets(name);
    if((fp=fopen(name,"r+"))==NULL)                       //打开文件
    {
        printf("can't open file!\n");
        exit(0);
    }
    printf("Please select what operation you want:(input'#'to exit)\nA.delete\tB.insert\tC.Save\n");
    while((select=getchar())!='#')   //‘#’时结束循环
    {
        switch(select)               //ABC三种选择
        {
            case 'A':
                read(p, fp,name);                     //读
                printf("Please input the position:\n");
                scanf("%d", &pos);
                printf("Please input the number:\n");
                scanf("%d", &n);
                len=strlen(text);                   //量总长度
                delete (pos, p, len,n);               //删
                printf("%s",p);
                rewind(fp);                           //清空缓存区 因为使用了"r+"模式，不清空无法正常使用
                break;
            case 'B':
                read(p, fp,name);                     //读
                getchar();                            //捕获一个换行符
                printf("Please input the word:\n");
                gets(word);
                printf("Please input the position:\n");
                scanf("%d", &pos);
                len=strlen(text);                    //量总长度
                insert(pos,p,word,len);                //插入
                printf("%s",p);
                rewind(fp);                           //同A
                break;
            case 'C':
                output(p, fp);                        //输出
                fclose(fp);                           //关闭文件
                printf("success!\n");
                break;
            default:
                printf("error!");
                break;
        }
        while(getchar()!='\n')                        //跳过输入行剩余部分(switch捕获了首字母，如果之后有换行跳过换行符或者输入为AA可跳过后一个A)
            continue;
        printf("Please select what operation you want:(input'#'to exit)\nA.delete\tB.insert\tC.Save\n");
    }
    system("pause");
    return 0;
}
void read(char *p,FILE *fp,char name[100])
{
    fgets(p,100,fp);                              //读入字符串
    printf("%s", p);
}
void insert(int pos, char *p,char word[100],int len)
{
    char string_1[100], string_2[100];
    int i,j;
    for (i = 0; i < pos;i++)                       //位置之前新建字符串，位置之后新建字符串
    {                                              //再用strcat函数进行拼接得到插入效果
        string_1[i] = *(p + i);
    }
    string_1[i] = '\0';                      //末尾补'\0'
    for (j=0; i < len;i++,j++)
    {
        string_2[j] = *(p + i);
    }
    string_2[j] = '\0';
    strcat(string_1, word);
    strcat(string_1, string_2);
    strcpy(p, string_1);
}
void output(char *p,FILE *fp)
{
    fputs(p, fp);
}
void delete (int pos, char *p, int len,int n)     //同插入操作，跳过不需要的部分由两个字符串拼接得到删除效果
{
    char string_1[100], string_2[100];
    int i,j;
    for (i = 0; i < pos;i++)
    {
        string_1[i] = *(p + i);
    }
    string_1[i] = '\0';
    for (j=0,i = pos + n; i < len;i++,j++)        //i=pos+n跳过不需要部分
    {
        string_2[j] = *(p + i);
    }
    string_2[j] = '\0';
    strcat(string_1, string_2);
    strcpy(p, string_1);
}
