#include <stdio.h>
int main() {
  int a, b, c, amount;
  amount = 10;


  for (c=0; c<=2; c++) {
    amount = amount - c*5;
    for (b=0; b<=(amount/2); b++) {
      a = amount - b * 2;
      printf("一角=%d，贰角=%d，伍角=%d ", a, b, c);
      printf("\n");
    }

  }
  printf("一角=0，贰角=0，伍角=2");
  return 0;

}
