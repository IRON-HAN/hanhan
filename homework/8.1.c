//8-1让用户输入两个字符串，在第一个字符串里查找是否存在第二个字符串。
//如果存在则提示第二个字符串在第一个字符串里出现了几次（区分大小写），
//以及出现的位置（最多显示前十个位置）。
#include <stdio.h>
#include<string.h>
//字符串2的长度
#define N 20
//可以输出位置的个数
#define MAX 10

int match(char *str1, char *str2, int *num, int *pos)
{
	int flag = 0;
	for (int i = 0; i < strlen(str1); i++)
	{
		if (str1[i] == str2[0])
		{
			flag = 1;
			for (int j = 0; j < strlen(str2); j++)
			{
				if ((i + j) >= strlen(str1)||str1[i + j]!=str2[j])
				{
					flag = 0;
					break;
				}
			}
		}
		if (flag == 1)
		{
			pos[*num] = i + 1;
			(*num)++;
			flag = 0;
		}
	}
	return 0;
}
int main()
{
	//定义两个字符串，根据题目需要，str1应该比str2大
	char str1[N * N], str2[N];
	while(1)
	{
		printf("input1\n");
		gets(str1);
		printf("input2\n");
		gets(str2);
		int posArray[MAX];   //存放匹配字符串的位置
		int counter = 0;     //记录匹配字符串的个数
		//调用match函数
		match(str1, str2, &counter, posArray);
		printf("%s,%d.", str2, counter);
		if(counter > 0)
			printf("pos\n");
		for(int i = 0; i < counter; i++)
		{
			if (i >= MAX)
				break;
			printf("%d\t", posArray[i]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
