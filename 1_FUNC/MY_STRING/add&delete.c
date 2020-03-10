#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

//字符拼接函数
char* MyStrcat(char *dst, const char *src){
    assert(dst != NULL && src != NULL);

    char *temp = dst;

    while (*temp != '\0')
        temp++;

    while ((*temp++ = *src++) != '\0');

    return dst;
}
//字符拷贝函数
char* stringcpy(char*dst,const char*src){
    char *ret = dst;

    while (*src){
        *dst++ = *src++;
    }
    *dst = '\0';
    return ret;
}
//临时存放
char temp1[100], temp2[100],temp[100];
//插入函数，即功能B
void input(char *tp1, char *tp2, char *tp3, int p){
    int len1 = strlen(tp1);
    int len2 = strlen(tp2);

    //将tp1在position 后的字符拷贝到tp3
    for (int i = 0; i<=len1; i++)
		tp3[i] = tp1[p + i];
    //将tp2的内容拷贝到tp1在position后面的位置
	for (int i = 0; i<=len2; i++)
		tp1[p + i] = tp2[i];

    MyStrcat(tp1, tp3);
    printf("%s", tp1);
}
//读入函数，从文件中读入并存放
void load(FILE *fp,char *text){
    char ch;
    ch=fgetc(fp);//接收文件中的字符
    int i = 0;

    while (!feof(fp)){//未读到文件结尾
        text[i]=ch;//存放在text字符串中
        putchar(ch);//打印在屏幕上
        ch = fgetc(fp);//接收下一个字符
        i++;//移动text位置
    }
    putchar(10);//打印换行符

    text[i] = '\0';
}
//存储函数，即功能C
void store(FILE*fp,char*text){
    fputs(text, fp);
}
//删除函数，即功能A
void delete(FILE*fp,char*text,int p,int n,int len){
    int i;
    //拷贝前面的内容
    for (i=0; i<p;i++)
        temp1[i] = text[i];
    //拷贝后面的内容
    for (int j=0,i=p+n; i<len;)
        temp2[j++] = text[i++];

    MyStrcat(temp1, temp2);
    stringcpy(text, temp1);

    printf("\nthe updated text is:\n");
    printf("\n%s\n", text);
}
//主函数
int main(){

    FILE *fp;
    char name[20];//文件名
    char text[100];//存储文件的字符串
    char word[10];//插入的单词
    int p, n,len;//位置，数量，文件的长度
    char op;//操作符
    //交互
    printf("input the filename:\n");
    scanf("%s", name);
    //打开文件
    if((fp=fopen(name,"r+"))==NULL)
    {
        printf("can't open file!\n");
        exit(0);
    }

    printf("operation(don't input 'A''B''C'):\n");
    printf("a:delete:\n");
    printf("b:input:\n");
    printf("c:save:\n");
    while (1) {
        op = getchar();
        switch (op)
        {
        case 'a':
            load(fp, text);//文件内容装入text

            len = strlen(text);
            printf("input position & nunmer of char:\n");
            scanf("%d %d", &p, &n);

            delete (fp, text, p, n, len);

            printf("\ndone.\n");
            rewind(fp);
            break;
        case 'b':
            load(fp, text);//文件内容装入text

            printf("input Position:\n");
            scanf("%d", &p);
            printf("input word:\n");
            scanf("%s", word);

            input(text, word, temp, p);

            printf("\ndone.\n");
            rewind(fp);
            break;
        case 'c':
            store(fp, text);

            fclose(fp);

            printf("\ndone.\n");
            break;
        default:
            break;
    }
    printf("next operation:\n");
    }
    system("pause");
    return 0;
}
