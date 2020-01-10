#include <stdio.h>
int main() {
  int a, b,n, amount;
  amount = 8;
  n = 1;
  for (a=0; a<=3; a++) {
  for (b=0; b<=3; b++) {
  if ((amount-a-b)<=6) {
    printf("n=%d %d %d %d",n, a, b, (8 - a - b));
    printf("\n");
    n = n + 1;
  }
  else {
    ;
  }
  }
  }
  getchar();
  return 0;
}


