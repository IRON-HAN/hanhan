#include <stdio.h>
#include <math.h>

int main() {
  double sum, term;
  term=1;
  float sign=1.0, n;
  sum = 0;
  int num=0;
  for (n = 1.0;fabs(term)>1e-6; n++) {

    term = sign / (2 * n - 1);
    sum = sum + term;
    sign = -sign;
    num++;

  }
  sum = sum * 4;
  printf("%d",num);
  printf("sum=%10.8f\n",sum);
  system("pause");
  return 0;
}
