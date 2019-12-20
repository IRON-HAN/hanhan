//自写strlen函数
#include <crtdefs.h>
#include <stdio.h>
#include <stdlib.h>
size_t stringlen(const char*s){
    int cnt = 0;
    while (s[cnt]!='\0') {
        cnt++;
    }
    return cnt;
}
int main(){
    char s[] = "hello";
    printf("len=%llu\n", stringlen(s));
    system("pause");
    return 0;
}
