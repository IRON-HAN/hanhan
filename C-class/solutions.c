#include <stdio.h>
#include<math.h>
int main() {
  float a, b, c, x1, x2, delta;
  float p,q;//定义变量

  printf("a*x^2+b*x+c\n");
  printf("please input a,b,c\n");
  scanf("%f,%f,%f", &a, &b, &c);//读取系数
  delta=b*b-4*a*c;
  if (a==0.0) {
  printf("error!");//判别 二次项系数
  } else {

    if (delta==0) {
      x1 = (-b) / 2 / a;
      printf("one solution!\n");
      printf("x1=x2=%6.2f\n",x1);
    }
    else if (delta>0) {
      x1 = (sqrtf(delta) - b) / 2 *a;
      x2 = (-sqrtf(delta) - b) / 2 * a;
      printf("two real solutions!\n");
      printf("x1=%6.2f,x2=%6.2f",x1,x2);
    } else {
      p = (-b) / 2 / a;
      q = sqrtf(4 * a * c - b * b) / 2 / a;
      printf("two plural solutions!\n");

      printf("x1=%6.2f+%6.2f*i,x2=%6.2f-%6.2f*i",p,q,p,q);

    }
  }
  system("pause");
  return 0;
  }

