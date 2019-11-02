// 字符宽度
#include<stdio.h>
#define PAGES 931
int main(){
    printf("*%d*\n", PAGES);
    printf("*%2d*\n", PAGES);
    printf("*%10d*\n", PAGES);
    printf("*%-10d*", PAGES);

    return 0;
}
