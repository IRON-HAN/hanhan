#include <string.h>
#include <stdio.h>
int main()
{
char c='a',t[50];
    int n,k,j;

printf("\nInput a string:");
    gets(t);
    n =strlen(t);   	/* 用函数得到该字符串的长度 */

for(k=0;k<n;k++)
{
	   if (t[k]==c)
       {
j = k;
break;
       }
	   else
j = -1;
}
    printf("\n Position is:%d",j); 	 /* 输出查询结果 */
}
