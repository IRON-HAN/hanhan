#include <stdio.h>
#define N  5
int main()
{
   int  a[N];       /* 数组定义语句 */
   int    i,sum=0;
   float aver;
   printf("\nInput 5 numbers:");
   for (i=0; i<5; i++)
{
     scanf("%d",&a[i]);  /* 输入数组元素 */
       sum=sum+a[i];
    }
    aver=sum/N;           /* 计算平均分 */
    printf("\nThe average score is:%f", aver);
}
