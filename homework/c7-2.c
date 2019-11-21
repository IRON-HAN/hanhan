#include <stdio.h>
int main(){
    int DigitSum(int n);
    int a,result;
    printf("please enter an int(>0):\n");
    scanf("%d", &a);
    result= DigitSum(a);
    printf("the result is:\n%d", result);
    system("pause");
    return 0;
}
int DigitSum(int n){
    static int sum = 0;
    sum = sum + n % 10;
    n = n / 10;
    if (n==0) {
    return sum;
    }
    if (n>0) {
    return DigitSum(n);
    }
}
