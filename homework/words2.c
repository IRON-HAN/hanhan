#include <stdio.h>
#include <string.h>
int main()
{
    int num=0, word=0,i,n;
    char sentence[100];
    char string[100][100];
    int j=0,m=0;    // 数组参数
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
            string[j][m] = sentence[i];
            if(sentence[i]<97)                    //* 防止大小写影响比较
                string[j][m] = sentence[i] + 32;
            j++;
        }

        if (word == 0) {
          for (int k=0; k<=j; k++) {
            for (n = 0; n <= j; n++) {
              if (n == j)
                break;

              if (strcmp(string[n], string[n + 1]) == 0) {
                printf("!!!\n");
              num--;
          }
          }
          }


        }
    }
    printf("%d", num);
    system("pause");
    return 0;
    }
