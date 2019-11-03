#include <stdio.h>
int main() {
  int i, sum;
  i = 1, sum = 0;
  while (i < 101) {
    sum = sum + i;
    i++;
  }
  printf("%d", sum);
  system("pause");
  return 0;
}
