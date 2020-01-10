#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int **Create(int m, int n);
void Reset(int **Matrix, int m, int n);
void MatrixFree(int **Matrix, int m);
void MatrixMultiply(int **a, int **b, int **c, int row, int n, int col);
void MatrixInput(int **a, int m, int n);
void MatrixOutput(int **a, int m, int n);

int main() {
    while(1)
{
    int row = 0;
    int n = 0;
    int col = 0;
    printf("row,n,col:\n");
    scanf("%d %d %d", &row, &n, &col);
//开a,b,c存放矩阵
    int **a =Create(row, n);
    int **b =Create(n, col);
    int **c =Create(row, col);
    Reset(c, row, col);
//输入
    printf("please input a:\n");
    MatrixInput(a, row, n);
    printf("please input b:\n");
    MatrixInput(b, n, col);
//运算
    MatrixMultiply(a, b, c, row, n, col);
//输出
    MatrixOutput(c, row, col);
//释放
    MatrixFree(a, row);
    MatrixFree(b, n);
    MatrixFree(c, row);
}
    system("pause");
    return 0;
}
//开辟矩阵
int** Create(int m, int n){
    int i;
    int **Matrix;
    Matrix = (int **) malloc(sizeof(int *) * m);
    for(i = 0; i < m; i++)
    {
        Matrix[i] = (int *) malloc(sizeof(int) * n);
    }
    return Matrix;
}
//释放矩阵
void MatrixFree(int ** Matrix, int m){
    int i;
    for(i = 0; i < m; i++)
    {
        free(Matrix[i]);
    }
    free(Matrix);
}
/* 初始化矩阵函数 */
void Reset(int** Matrix, int m, int n){
    int i,j;
    for(i = 0; i < m; i++)
    {
            for(j = 0; j < n; j++)
            {
                Matrix[i][j] = 0;
            }
    }
}
/* 矩阵乘法运算函数 */
void MatrixMultiply(int** a, int** b, int** c, int row, int n, int col){
    int i,j,k;
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            for(k = 0; k < n; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}
//输入矩阵
void MatrixInput(int **a, int m, int n){
    for (int r=0; r<m; r++) {
        for (int c=0; c<n; c++) {
            scanf("%d", &a[r][c]);
    }
    }
}
//输出矩阵
void MatrixOutput(int **c, int m, int n){
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d\t", c[i][j]);
        printf("\n");
    }
}
