#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 定义变量 矩阵a,b,文件指针
    int matrix_a[4][5];
    int matrix_b[5][4];
    FILE *in = NULL;
    // 打开文件 如果打开失败则退出程序
    if ((in = fopen("file1.txt", "r")) == NULL)
    {
        printf("open error!\n");
        exit(0);
    }
    // 从文件中读入矩阵
    for (int i = 0; i < 4; ++i)
        for (int j = 0; j < 5; ++j)
            fscanf(in, "%d", &matrix_a[i][j]);
    // 输出转置前的矩阵,并进行转置操作
    printf("***转置前矩阵***\n");
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            printf("%4d", matrix_a[i][j]);
            matrix_b[j][i] = matrix_a[i][j];
        }
        printf("\n");
    }
    // 输出转置后的矩阵
    printf("***转置后矩阵***\n");
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            printf("%4d", matrix_b[i][j]);
        }
        printf("\n");
    }

    return 0;
}
