#include <stdio.h>
#include <string.h>
int main()
{
    int num=0, word=0,i;
    char sentence[100];
    char string[100][100];
    int n=0,j=0,m=0;    // 数组参数
    char c,d,e;   // c,d,e便于调试时观测
    printf("Please input a sentence:(no punctuation)\n");  //* 有标点符号会干扰判断所以不加
    gets(sentence);
    for (i=0; (c = sentence[i])!='\0';i++)
    {
        if(c==' ')
            word = 0;
        else if(word==0)  // word作用 防止多空格对单词数量的影响
        {
            word = 1;
            num++;
        }
        if(word==1)   //* 储存单词
        {
            string[j][n] = sentence[i];
            if(sentence[i]<97)                    //* 防止大小写影响比较
                string[j][n] = sentence[i] + 32;
            j++;
        }
        if(word==0)    //* 比较单词
        {
            for (m = 0; m < n ;m++)
            {
                for (j = 0; string[j][n] != '\0';j++)
                {
                    d = string[j][n];
                    e = string[j][m];
                    if(d!=e)
                        break;
                }
                if(string[j][n]=='\0'&&string[j][m]=='\0')   //* && 后的语句是为了规避单字母的识别错误
                {
                    num--;
                    break;      //* 防止两个以上重复使计数多减一个数
                }
            }
            n++;
            j = 0;
        }
    }
    for (m = 0; m < n ;m++)   //* 结尾没有空格所以需要对最后一个单词进行一次比较
    {
        for (j = 0; string[j][n] != '\0';j++)
        {
            d = string[j][n];
            e = string[j][m];
            if(d!=e)
                break;
        }
        if(string[j][n]=='\0'&&string[j][m]=='\0')
            num--;
            break;

    }
    printf("There are %d words in this sentence.\n", num);
    system("pause");
    return 0;
}
