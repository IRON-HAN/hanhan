//求2*x^3+3*x^2-4*x+1=0
#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
  float x1, x2, f1, f;
  scanf("%f", &x1);
  while (1) {
    f = 2 * x1 * x1 * x1 + 3 * x1 * x1 - 4 * x1 + 1;
    f1 = 6 * x1 * x1 + 6 * x1 - 4;
    x2 = x1 - f / f1;
    if (fabsf(x2 - x1) < 1e-6)
      break;
    x1=x2;
  }
    printf("%f",x2);
    //getchar();
    system("pause");
    return 0;
}
