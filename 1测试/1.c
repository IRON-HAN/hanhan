#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
    char temp1[100], temp2[100];
void load(FILE *fp,char *text){
    char ch;
    ch=fgetc(fp);
    while (!feof(fp))
        {
        int i = 0;
        text[i]=ch;
        putchar(ch);
        ch = fgetc(fp);
        i++;
        }
    putchar(10);

}
void store(FILE*fp,char*text){
    fputs(text, fp);
}
void delete(FILE*fp,char*text,int p,int n,int len){
        int i, j;
    for (i=0; i<p; i++) {
        temp1[i] = text[i];
    }
    temp1[i] = '\0';
    for (j=0,i=p+n; i<len; i++,j++) {
        temp2[j] = text[i];
    }
    temp2[j] = '\0';
    strcat(temp1, temp2);
    strcpy(text, temp1);
}
void input(char *text,char *word,int p,int len){
    int i, j;
    for (i=0; i<p; i++) {
        temp1[i] = text[i];
    }
    temp1[i] = '\0';
    for (j=0; i<len; ) {
        temp2[j++] = text[i++];
    }
    temp2[j] = '\0';
    strcat(temp1, temp2);
    strcpy(text, temp1);

}

int main(){
    FILE *fp;
    char name[20];
    char text[100];
    char word[10];

    int len = strlen(text);
    int p, n;
    char op;
    printf("input the name:\n");
    scanf("%s", name);
    if((fp=fopen(name,"r+"))==NULL)                       //打开文件
    {
        printf("can't open file!\n");
        exit(0);
    }
    load(fp, text);
    printf("next operation:\n");
    printf("a:delete:\n");
    printf("b:input:\n");
    printf("c:save:\n");
    scanf("%c", &op);
    switch (op){
        case 'a':
            printf("input the pos &num:\n");
            scanf("%d %d", &p, &n);
            delete (fp, text, p, n, len);
            printf("%s", text);
            rewind(fp);
            break;
    }
    system("pause");
    return 0;
}

