#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
//生成并返回一个row行，col列的矩阵
int **InitMatrix(int row, int col)
{
	int ** matrix = NULL;
	matrix = (int **)malloc(sizeof(int*)*row);
	for (int i = 0; i<row; i++)            //指为每行申请空间
	{
		matrix[i] = (int*)malloc(sizeof(int)*col);       //每一行有col列
	}
	printf("input:r&c\n");
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			scanf("%d", &matrix[i][j]);
	return matrix;
}

//将一个row行，col列的矩阵输出
void PrintMatrix(int **matrix, int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
}

//求一个row行，col列矩阵的转置矩阵
int **Transposition(int **matrix, int row, int col)
{
	int ** trans = NULL;
	 
}
int main()
{
	int row = 0;    //行数
	int col = 0;    //列数
	int ** arr = NULL;     //声明一个指针变量存放矩阵
	printf("请输入矩阵的行数和列数：");
	scanf("%d%d", &row, &col);
	//利用InitMatrix()生成并初始化一个指定行列的矩阵
	arr = InitMatrix(row, col);
	printf("您输入矩阵为：\n");
	//利用PrintMatrix()输出这个矩阵
	PrintMatrix(arr, row, col);
	int ** trans = NULL;
	//利用Transposition()生成指定矩阵的转置矩阵
	trans = Transposition(arr, row, col);
	printf("转置矩阵为：\n");
	//利用PrintMatrix()输出转置矩阵，注意行列要互换
	PrintMatrix(trans, col, row);
	system("pause");
	return 0;
}
