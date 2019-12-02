//将字符串A复制为字符串B，然后输出字符串B
#include <stdio.h>
int main(){
    char a[] = "i am.", b[20];
    int i;
    for (i=0; *(a+i)!='\0'; i++) {
        *(b + i) = *(a + i);
    }
    *(b + i) = '\0';
    printf("string a is:%s\n", a);
    printf("string b is:%s",b);

    printf("\n");
    getchar();
    return 0;
}
