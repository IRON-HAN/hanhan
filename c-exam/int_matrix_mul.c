#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
void MatrixFree(int ** Matrix, int m)
{
        int i;
        for(i = 0; i < m; i++)
        {
                free(Matrix[i]);
        }
        free(Matrix);
}
int main() {
    while(1){
    int row = 0;
    int n = 0;
    int col = 0;
    printf("row,n,col:\n");
    scanf("%d %d %d", &row, &n, &col);
//开a,b,c存放矩阵
    int **a = NULL;
    int **b = NULL;
    int **c = NULL;
    a = (int **)malloc(sizeof(int *) * row);
    for (int i=0; i<row; i++) {
        a[i] = (int *)malloc(sizeof(int) * n);
    }
    b = (int **)malloc(sizeof(int *) * n);
    for (int i=0; i<n; i++) {
        b[i] = (int *)malloc(sizeof(int) * col);
    }
    c = (int **)malloc(sizeof(int *) * row);
    for (int i=0; i<row; i++) {
        c[i] = (int *)malloc(sizeof(int) * col);
    }
//输入
    printf("please input a:\n");
    for (int r=0; r<row; r++) {
        for (int c=0; c<n; c++) {
            scanf("%d", &a[r][c]);
    }
    }
    printf("please input b:\n");
    for (int r=0; r<n; r++) {
        for (int c=0; c<col; c++) {
            scanf("%d", &b[r][c]);
    }
    }
//运算
    for (int i=0; i<row; i++) {
        for (int j=0; j<col; j++) {
            c[i][j] = 0;
            for (int k=0; k<n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
//输出
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            printf("%d\t", c[i][j]);
        printf("\n");
    }
}
    system("pause");
    return 0;
}
