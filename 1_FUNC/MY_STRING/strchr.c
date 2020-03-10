//字符搜索函数
//如何搜索第二个
//并把该字符的内容复制到另一个字符中
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char s[] = "hello";
    char *p = strchr(s, 'l');
    p = strchr(p + 1, 'l');
    char *q = (char *)malloc(strlen(p) + 1);
    strcpy(q, p);
    printf("%s\n", p);
    printf("%s\n", q);
    free(q);
    return 0;
}
