#include <math.h>
#include <stdio.h>
int      root(float  a,float  b,float  c,float *x1,float * x2                                    )
{  float  d; d=b*b-4*a*c;
   if(d<0||a==0)return(0);
   *x1=(-b+sqrt(d))/2/a;
   *x2 =(-b-sqrt(d))/2/a;
   return(1);
}
int  main()
{  int k; float a,b,c,xa,xb;
      scanf("%f,%f,%f",&a,&b,&c);
      k=root(a,b,c,&xa,&xb);
      if(k) printf("\n %f,%f",xa,xb);
 }

