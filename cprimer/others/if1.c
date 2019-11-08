/*从键盘输入三个整数到变量a,b,c,要求按从大到小的顺序输出。
换位法（将a,b,c中的数据换位）。*/
#include<stdio.h>
int main()
{
   int  a,b,c,t;
   scanf("%d %d %d",&a,&b,&c);
   if(a<b) {t=a; a=b; b=t;}
   if(a<c) {t=a; a=c; c=t;}
   if(b<c) {t=b; b=c; c=t; }
   printf("\n %d,%d,%d", a, b, c);
   system("pause");
   return 0;
}


