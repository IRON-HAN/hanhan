// 2020/1/10
// 将某一字符串从第M个字符开始的全部字符复制成为另一个字符串

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 20
void copystr(char *, char *, int);//部分复制函数
int main(){
    int pos;
    char str1[N], str2[N];

    printf("input SRC:\n");
    gets(str1);

    printf("input the start position:\n");
    scanf("%d", &pos);

    if(pos>strlen(str1))
        printf("error!\n");
    else {
        copystr(str1, str2, pos);
        printf("result:%s\n", str2);

    }
    system("pause");
    return 0;
}
void copystr(char *SRC, char *DST, int POS){
    int n = 0;
    while (n<POS-1) {
        n++;
        SRC++;
    }
    while (*SRC !='\0') {
        *DST++ = *SRC++;
    }
    *DST = '\0';
}
