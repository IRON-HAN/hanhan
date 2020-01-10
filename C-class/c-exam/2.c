#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
struct fraction {
    int numer;
    int deno;
};
typedef struct fraction num;
num *get(num *p) {
    scanf("%d/%d", &p->numer, &p->deno);
    return p;
}
void output(num p) {
    printf("%d/%d ",p.numer,p.deno);
}
//最大公约数
int comdiv(int num1,int num2){
    return num2?comdiv(num2, num1 % num2) : num1;
}
//最小公倍数
int commul(int num1,int num2){
    return num1 / comdiv(num1, num2) * num2;
}
//约分
struct fraction rdcfrc(struct fraction frac){
    int div = comdiv(frac.numer, frac.deno);
    frac.numer /= div;
    frac.deno /= div;
    return frac;
}
//两个分数相加
struct fraction ADD(struct fraction frac1,struct fraction frac2){
    int mul = commul(frac1.deno, frac2.deno);
    int numer = mul / frac1.deno * frac1.numer + mul / frac2.deno * frac2.numer;
    struct fraction sum = {numer, mul};
    return rdcfrc(sum);
}
//两个分数相乘
num MULTIPLY(num frac1, num frac2) {
    int numer = frac1.numer * frac2.numer;
    int deno = frac1.deno * frac2.deno;
    num mul = {numer, deno};
    return rdcfrc(mul);
}
int main() {
    int row = 0;
    int n = 0;
    int col = 0;
    printf("row,n,col:\n");
    scanf("%d %d %d", &row, &n, &col);

    num **a = NULL;
    num **b = NULL;
    num **c = NULL;
    a = (num **)malloc(sizeof(num *) * row);
    for (int i=0; i<row; i++) {
        a[i] = (num *)malloc(sizeof(num) * n);
    }
    b = (num **)malloc(sizeof(num *) * n);
    for (int i=0; i<n; i++) {
        b[i] = (num *)malloc(sizeof(num) * col);
    }
    c = (num **)malloc(sizeof(num *) * row);
    for (int i=0; i<row; i++) {
        c[i] = (num *)malloc(sizeof(num) * col);
    }
    num *p = &c[0][0];
    for (; p<(c[0]+row*col); p++) {
        p->numer = 0;
        p->deno = 1;
    }

    printf("please input a:\n");
    for (int r=0; r<row; r++) {
        for (int c=0; c<n; c++) {
            get(&a[r][c]);
    }
    }
    printf("please input b:\n");
    for (int r=0; r<n; r++) {
        for (int c=0; c<col; c++) {
            get(&b[r][c]);
    }
    }
    for (int i = 0; i < row; i++)
    {
        // for (int j = 0; j < n; j++)
            // output(a[i][j]);
        // printf("\n");
    }

    for (int i=0; i<row; i++) {
        for (int j=0; j<col; j++) {
            for (int k=0; k<n; k++) {
                num result;
                result = MULTIPLY(a[i][k], b[k][j]);
                c[i][j] = ADD(c[i][j], result);
                output(a[i][k]);
                output(b[k][j]);
                output(result);
            }
        }
    }
    // printf("the matrix c is:\n");
    for (int i = 0; i < row; i++)
    {
        // for (int j = 0; j < col; j++)
            // output(c[i][j]);
        // printf("\n");
    }
    system("pause");

    return 0;
}
