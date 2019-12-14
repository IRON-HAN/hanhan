#include<stdio.h>
#include<string.h>
#define N 20

int main()
{
	char str[N][N], sentense[N];
	printf("请输入一个英文句子：\n");
	gets_s(sentense, N-1);
	int row = 0;
        int col = 0;
        int i=0,k=0,j=0;
	//将字符串按照单词进行拆分放到一个二维字符数组中
	for (i = 0; sentense[i] != '\0'; i++)
	{
		if (sentense[i] == ' ')
		{
			str[row][col] = '\0';
			row++;
			col = 0;
			continue;
		}
		str[row][col] = sentense[i];
		col++;
	}
	str[row][col] = '\0';
	int counter = 0;
	//计算二维数组中不同单词的个数
	for ( k = 0; k <= row; k++)
	{
		printf("%s ", str[k]);
		printf("\n");
		if (strlen(str[k]) == 0)
		{
			printf("进入if语句%d\n",k);
			continue;
		}
		for (j = 0; j < i; j++)
		{
			printf("%d %d", i, j);
			printf("%s %s\n", str[i], str[j]);
			if (strcmp(str[i], str[j]) == 0)
			{
				counter--;
				break;
			}
		}
		counter++;
	}
	printf("一共有%d个不同的单词。", counter);
	system("pause");
	return 0;
}
