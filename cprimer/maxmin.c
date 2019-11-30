#include <stdio.h>
float  aver(int a[], int n, int *max, int *min)
{  int  i; float s=0;
   *max=a[0]; *min=a[0];
   for(i=0;i<n;i++)
   {   s+=a[i];
      if(a[i]>*max) *max=a[i];
      if(a[i]<*min) *min=a[i];
   }
   return(s/100);
}
int main()
{   int  a[100],i,max,min;
float  av;
for(i=0;i<100;i++)
 scanf("%d",&a[i]);
av=aver(a,100,&max,&min);
printf("%d,%d,%f",max,min,av);
}
