#include <stdio.h>

int main() {
  int x, y, t;

  for (x = 1; x <= 4; x++) {
    for (y = 1; y <= 5; y++) {
      t=x*y;
      printf("%5d",t);
    }
    printf("\n");
  }

  return 0;
}
