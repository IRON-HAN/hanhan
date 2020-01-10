//VSC
#include <stdio.h>
#include <math.h>
typedef struct fraction {
    int numer;
    int deno;
}num;
int main(){
    int ComDiv(int num1, int num2);//最大公约数
    int ComMul(int num1, int num2);//最小公倍数
    num rdcfrc(num frac);//约分
    num Add(num frac1, num frac2);
    num Sub(num frac1, num frac2);
    num Mul(num frac1, num frac2);
    num Div(num frac1, num frac2);

    printf("please input:\n");

    char ch;
    num frac1, frac2,res;
    scanf("%d/%d%c%d/%d", &frac1.numer, &frac1.deno, &ch, &frac2.numer, &frac2.deno);
    if (frac1.deno==0||frac2.deno==0) {
        printf("error!\n");
    }
    //printf("%d/%d%c%d/%d", numer1, deno1, ch, numer2, deno2);
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
    {
        switch(ch)
        {
            case'+':
                res=Add(frac1, frac2);
                printf("%d/%d\n", res.numer, res.deno);
                break;
            case'-':
                res=Sub(frac1, frac2);
                printf("%d/%d\n", res.numer, res.deno);
                break;
            case'*':
                res=Mul(frac1, frac2);
                printf("%d/%d\n", res.numer, res.deno);
                break;
            case'/':
                res=Div(frac1, frac2);
                printf("%d/%d\n", res.numer, res.deno);
                break;
            default:printf(" data error!\n");
            }
        system("pause");
        return 0;
    }
    else
    printf("data error!\n");

    system("pause");
    return 0;
}
int ComDiv(int num1, int num2){
    int r,t;
    if(num1<0){
        num1 = -num1;
    }
    if (num1<num2) {
        t = num1;
        num1 = num2;
        num2 = t;
    }
    if ((r=num1%num2)==0) {
    return num2;
    }
    else {
    return ComDiv(num2, r);
    }
}
int ComMul(int num1, int num2){
    int m = ComDiv(num1, num2);
    return (num1*num2/m);
}
num rdcfrc(num frac){
    int div = ComDiv(frac.numer, frac.deno);
    frac.numer /= div;
    frac.deno /= div;
    return frac;
}
num Add(num frac1,num frac2){
    int mul = ComMul(frac1.deno, frac2.deno);
    int numer = mul / frac1.deno * frac1.numer + mul / frac2.deno * frac2.numer;
    num sum = {numer, mul};
    return rdcfrc(sum);
}
num Sub(num frac1,num frac2){
    int min=ComMul(frac1.deno, frac2.deno);
    int numer = min / frac1.deno * frac1.numer - min / frac2.deno * frac2.numer;
    num sum = {numer, min};
    return rdcfrc(sum);
}
num Mul(num frac1,num frac2){
    int numer = frac1.numer * frac2.numer;
    int deno = frac1.deno * frac2.deno;
    num mul = {numer, deno};
    return rdcfrc(mul);
}
num Div(num frac1,num frac2){
    int numer = frac1.numer * frac2.deno;
    int deno = frac1.deno * frac2.numer;
    num mul = {numer, deno};
    return rdcfrc(mul);
}

