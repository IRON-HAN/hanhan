#include <stdio.h>
#define N 10
int main()
{
int  i,j,min,temp;
    static int a[N]={5,4,3,2,1,9,8,7,6,0};
	printf("\nThe array is:\n");

for (i=0;i<N;i++)
        printf("%5d",a[i]);

for (i=0;i<N-1;i++)
{
min =i;//******
    for (j=i+1; j<N; j++)
	    if  (a[min]>a[j])  min =j;
    temp = a[i];
    a[i] = a[min];
    a[min] = temp;

    /* 数据交换 */
    }
    printf("\nThe sorted numbers: \n");
for (i=0; i<N; i++)
printf("%5d",a[i]);
printf("\n");
}
