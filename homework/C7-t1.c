#include <stdio.h>
#include <math.h>
int numer1, numer2, deno1, deno2;
int numer, deno;
int main(){
    int ComDiv(int num1, int num2);//最大公约数
    int ComMul(int num1, int num2);//最小公倍数
    void RdcFrc(int* numer, int* deno);//约分
    void Add(int numer1, int deno1, int numer2, int deno2);
    void Sub(int numer1, int deno1, int numer2, int deno2);
    void Mul(int numer1, int deno1, int numer2, int deno2);
    void Div(int numer1, int deno1, int numer2, int deno2);
    printf("please input:\n");

    char ch;
    scanf("%d/%d%c%d/%d", &numer1, &deno1, &ch, &numer2, &deno2);
    if (deno1==0||deno2==0) {
        printf("error!\n");
    }
    RdcFrc(&numer1, &deno1);
    RdcFrc(&numer2, &deno2);
    //printf("%d/%d%c%d/%d", numer1, deno1, ch, numer2, deno2);
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
    {
        switch(ch)
        {
            case'+':Add(numer1, deno1, numer2, deno2);break;
            case'-':Sub( numer1,  deno1,  numer2,  deno2);break;
            case'*':Mul( numer1,  deno1,  numer2,  deno2);break;
            case'/':Div( numer1,  deno1,  numer2,  deno2);break;
            default:printf(" data error!\n");
            }
        system("pause");
        return 0;
    }
    else
    printf("data error!\n");
    printf("%d %d", numer, deno);
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
void RdcFrc(int* numer, int* deno){
    int max1 = ComDiv( numer1 , deno1);
    int max2 = ComDiv( numer2 , deno2);
    int max = ComDiv( *numer , *deno);
    numer1 = numer1 / max1;
    deno1 = deno1 / max1;
    numer2 = numer2 / max2;
    deno2 = deno2 / max2;
    *numer = *numer / max;
    *deno = *deno / max;
}
void Add(int numer1, int deno1, int numer2, int deno2){
    int min=ComMul(deno2, deno1);
    numer1 = numer1 * min / deno1;
    numer2 = numer2 * min / deno2;
    numer=numer1+numer2;
    deno = min;
    RdcFrc(&numer, &deno);
    printf("%d/%d", numer, deno);
}
void Sub(int numer1, int deno1, int numer2, int deno2){
    int min=ComMul(deno2, deno1);
    numer1 = numer1 * min / deno1;
    numer2 = numer2 * min / deno2;
    numer=numer1-numer2;
    deno = min;
    RdcFrc(&numer, &deno);
    printf("%d/%d", numer, deno);
}
void Mul(int numer1, int deno1, int numer2, int deno2){
    numer = numer1 * numer2;
    deno = deno1 * deno2;
    RdcFrc(&numer, &deno);
    printf("%d/%d", numer, deno);
}
void Div(int numer1, int deno1, int numer2, int deno2){
    numer = numer1 / numer2;
    deno = deno1 /deno2;
    RdcFrc(&numer, &deno);
    printf("%d/%d", numer, deno);
}

