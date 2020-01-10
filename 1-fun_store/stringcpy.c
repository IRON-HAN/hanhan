//自己写strcpy函数
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* stringcpy(char*dst,const char*src){
    char *ret = dst;
    while (*src){
        *dst++ = *src++;
    }

    *dst = '\0';
    return ret;
}
int main(){
    char s1[] = "anc";
    char s2[] = "abc";
    stringcpy(s1, s2);
    printf("%s", s1);
    //printf("%s", s2);
    system("pause");
    return 0;
}
