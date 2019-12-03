#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
    int row = 0;
    int col = 0;
int main() {
    //初始化
    void AT(int **a);
    int i;
    int **arr = NULL;
    //规定行数和列数
    printf("r&c:\n");
    scanf("%d %d", &row, &col);
    arr = (int **)malloc(sizeof(int *) * row);
    for (i=0; i<row; i++) {
        arr[i] = (int *)malloc(sizeof(int) * col);
    }
    //输入矩阵：
    printf("please input:\n");
    for (int r=0; r<row; r++) {
        for (int c=0; c<col; c++) {
            scanf("%d", &arr[r][c]);
    }
    }
    //输出原矩阵
    for (int r=0; r<row; r++) {
        for (int c=0; c<col; c++) {
            printf("%-5d", arr[r][c]);
    }
    printf("\n");
    }
    //输出转置后的矩阵
    AT(arr);
    system("pause");
    return 0;
}

void AT(int **a){
    int i, j;
    for (j=0; j<col; j++) {
        for (i=0; i<row; i++) {
            printf("%-5d",a[i][j]);
        }
        printf("\n");
    }
}

