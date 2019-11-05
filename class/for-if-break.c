#include <stdio.h>
#define SUM 10000
int main() {
  float amount, aver, total;
  int i;
  total=0;
  for (i=1;i<=1000;i++ ) {
    printf("please enter the amount:\n");
    scanf("%f", &amount);
    total = total + amount;
    if(total>=SUM) break;
  }
  aver = total / i;
  printf("num=%d\n aver=%10.2f\n ", i, aver);
  return 0;
}
