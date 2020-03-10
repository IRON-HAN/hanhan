#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

typedef struct fraction {
    int numer;
    int deno;
}num;
//输入每一个数
num *get(num *p) {
    scanf("%d/%d", &p->numer, &p->deno);
    return p;
}
//输出每一个数
void output(num p) {
    printf("%d/%d",p.numer,p.deno);
    printf("\t");
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
num rdcfrc(num frac){
    int div = comdiv(frac.numer, frac.deno);
    frac.numer /= div;
    frac.deno /= div;
    return frac;
}
//两个分数相加
num ADD(num frac1,num frac2){
    int mul = commul(frac1.deno, frac2.deno);
    int numer = mul / frac1.deno * frac1.numer + mul / frac2.deno * frac2.numer;
    num sum = {numer, mul};
    return rdcfrc(sum);
}
//两个分数相乘
num MULTIPLY(num frac1, num frac2) {
    int numer = frac1.numer * frac2.numer;
    int deno = frac1.deno * frac2.deno;
    num mul = {numer, deno};
    return rdcfrc(mul);
}
//开辟矩阵
num** Create(int m, int n){
    int i;
    num **Matrix;
    Matrix = (num **) malloc(sizeof(num *) * m);
    for(i = 0; i < m; i++)
    {
        Matrix[i] = (num *) malloc(sizeof(num) * n);
    }
    return Matrix;
}
//输入矩阵
void MatrixInput(num **a, int m, int n){
    for (int r=0; r<m; r++) {
        for (int c=0; c<n; c++) {
            get(&a[r][c]);
    }
    }
}
//输出矩阵
void MatrixOutput(num **c, int m, int n){
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            output(c[i][j]);
        printf("\n");
    }
}
//释放矩阵
void MatrixFree(num ** Matrix, int m){
    int i;
    for(i = 0; i < m; i++)
    {
        free(Matrix[i]);
    }
    free(Matrix);
}
int main() {
    while (1)
{
    int row = 0;
    int n = 0;
    int col = 0;
    printf("row,n,col:\n");
    scanf("%d %d %d", &row, &n, &col);
//开a,b,c,c用来存放运算结果
    num **a = Create(row, n);
    num **b = Create(n, col);
    num **c = Create(row, col);
//正确，错误对比
//初始化c矩阵
    // num *p = &c[0][0];
    // for (; p<(c[0]+row*col); p++) {
    //     p->numer = 0;
    //     p->deno = 1;
    // }
    //多次malloc分配的内存是不连续的，不能通过自加实现遍历
    for(int i=0; i<row; i++)
        for(int j=0; j<col; j++){
            c[i][j].numer=0;
            c[i][j].deno=1;
        }
//输入两个原始矩阵
    printf("please input a:\n");
    MatrixInput(a, row, n);
    printf("please input b:\n");
    MatrixInput(b, n, col);
//运算
    for (int i=0; i<row; i++) {
        for (int j=0; j<col; j++) {
            for (int k=0; k<n; k++) {
                num result;
                result = MULTIPLY(a[i][k], b[k][j]);
                c[i][j] = ADD(c[i][j], result);
            }
        }
    }
//输出
    printf("the matrix c is:\n");
    MatrixOutput(c, row, col);
//释放
    MatrixFree(a, row);
    MatrixFree(b, n);
    MatrixFree(c, row);
}
    system("pause");
    return 0;
}
