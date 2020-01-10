#include <stdio.h>
int main(){
    char a[] = "i am a boy.", b[20], *p1, *p2;
    p1 = a;
    p2 = b;
    for (; p1!='\0'; p1++,p2++) {
        *p2 = *p1;
    }
    *p2 = '\0';
    printf("str a is :%s\n", a);
    printf("str b is :%s\n", b);
    getchar();
    return 0;
}
