#include <stdio.h>
int main() {
  int i, sum;
  sum = 0;
  for (i=1;i<1000000;i++) {
    sum = sum + i;
    printf("%d",i);
  }

  printf("%d", sum);
  system("pause");
  return 0;
}
