#include<stdio.h>
int main(){
    float a, b,res;
    res = 0;
    char c;
    scanf("%f%c%f", &a, &c,&b);
    switch(c){
        case'+':
            res = a + b;
            printf("%f%c%f=%f\n", a, c, b, res);
            break;
        case'-':res = a - b;
            printf("%f%c%f=%f\n", a, c, b, res);
            break;
        case'*':
            res = a * b;
            printf("%f%c%f=%f\n", a, c, b, res);
            break;
        case'/':
        if (b==0.0) {
            printf("error\n");
        }
        else {
        res = a / b;
        printf("%f%c%f=%f\n", a, c, b, res);
        }
            break;
        default:
            printf("error\n");
    }
    system("pause");
    return 0;

}
