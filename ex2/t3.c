# include <stdio.h>
#define N  5
int main()
{
int a[N]={8,6,5,4,1}, i, temp;
    printf("\nThe original array is:");

for (i=0; i<N; i++)
       printf("%4d", a[i]);

for (i=0; i<N/2; i++)
{
temp=a[i];
a[i]=a[N-1-i];
a[N-1-i]=a[i];
    }

printf("\nThe new array is:");
    for (i=0; i<N; i++)
       printf("%4d",a[i]);
}
