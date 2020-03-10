#include <stdio.h>

int main() {
  int n;
  for (n = 100; n <= 200; n++) {
    if (n % 3 == 0)
      continue;
    printf("%5d",n);
  }
  printf("\n");
  system("pause");
  return 0;
}
