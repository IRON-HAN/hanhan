#include <stdio.h>
#include <math.h>
int main(){
    int a,b,num,i,k;
    printf("input a&b:\n");
    scanf("%d %d", &a, &b);
    for (num=a; num<=b; num++) {
    k=(int)sqrt(num);
    for (i=2; i<=k; i++) {
    if(num%i==0)
    break;
    }
    if(i>k)
        printf("%d is prime.\n", num);
    }
    system("pause");
    return 0;
}
