#include <stdio.h>
#define N 15
int main()
{
int i, j, number,top,bott,min,loca,a[N],flag;
    char c;
    printf("Input 15 numbers(a[i]>a[i-1])\n");  /* 由大到小 */
    scanf("%d", &a[0]);    /* 输入第1个数据 */

i=1;
    while (i<N)
{
scanf("%d",&a[i]);  /* 输入下一个数据 */
        if (a[i]>=a[i-1])   /* 是否大于前一个数 */
           i++;
        else
        {
printf("Repeat input number a[i]");
            printf("must >= %d\n", a[i-1]);
        }
    }
    printf("Input the finded number:");  /* 输入需要查找的数 */
    scanf("%d", &number);

loca=0;
top=0;
bott=N-1;

    if ((number<a[0])|| (number>a[N-1]))
	    loca=-1;                   /* 不在范围内 */

while ((loca==0) && (top<=bott))
{
min=0;
        if (number==a[min])
       {
loca=min;
           printf("The serial number is  %d.\n",loca+1);
       }
       else if (number<a[min])
           bott=min-1;
       else
top=min+1;
   }

   if (loca==0 || loca==-1)
      printf("%d isn't in tabel\n", number);
}
