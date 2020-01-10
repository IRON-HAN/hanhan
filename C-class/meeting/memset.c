//memset函数的作用就是在替换指定位置的值
//memset()函数有三个参数
//第一个参数为数组或者字符数组的名称（其实就是首地址）
//第二个参数为0或者-1或者单个字符（注意用单引号）
//第三个参数为改变的数组大小（或者称为长度）
#include<stdio.h>
#include<string.h>

void Demo_1()//样例一
{
	int a[10];//声明的是int数组（注意 ）
	memset(a,-1,sizeof(int )*10);//第二个参数可以变为0
 	//此时的第二个参数不能为单个字符 (具体原因我不是很清楚）
	for(int i = 0; i<10 ; i++)
	{
		printf("%d ",a[i]);
	}
 }
 void Demo_2()//样例二
{
	char a[10];
	memset(a,'a',sizeof(char)*10);//第二个参数为单个字符
	//此时的第二个参数不能为0或者-1 (具体原因我不是很清楚）
	//如果写成int值的话会变成空、
	//有兴趣可以试试
	for(int i = 0; i<10 ; i++)
	{
		printf("%c ",a[i]);
	}
 }
 void Demo_3()//样例三
{
	char a[] = "sdadasdaaqweqwsdas";//声明并赋值
	memset(a,'a',sizeof(char)*5);//指定前5个元素

	for(int i = 0; i<10 ; i++)
	{
		printf("%c ",a[i]);
	}
 }
int main()
{
	printf("-------样例一---------\n");
	Demo_1();
	printf("\n-----样例二-----------\n");
	Demo_2();
	printf("\n-----样例三-----------\n");
	Demo_3();

}
————————————————
版权声明：本文为CSDN博主「清水samny」的原创文章，遵循 CC 4.0 BY-SA 版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/sun1318578251/article/details/86769698
