#include <stdio.h>
int main() {
  int a, b, c, amount;
  amount = 10;

  c = 0;
  while (c<=2) {
    amount = amount - c*5;
    c++;
    b = 0;
    while (b<=(amount/2)) {
      a = amount - b * 2;
      b++;
      printf("一角=%d，贰角=%d，伍角=%d ", a, b, c);
      printf("\n");
    }

  }
  printf("一角=0，贰角=0，伍角=2");
  return 0;

}
