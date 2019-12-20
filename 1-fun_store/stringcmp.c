//自写strcmp函数
#include <stdio.h>
#include <stdlib.h>
int stringcmp(const char*s1,const char*s2){
    while (*s1==*s2 && *s1!='\0') {
        s1++;
        s2++;
    }
    return *s1-*s2;
}
int main(){
    char s1[] = "abc";
    char s2[] = "ABC";
    printf("%d\n", stringcmp(s1, s2));
    system("pause");
    return 0;
}
