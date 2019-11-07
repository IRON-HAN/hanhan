#include <stdio.h>
int main() {
  int a, b,n, amount;
  amount = 8;
  n = 1;
  a = 0;

  while ( a<=3) {
      b = 0;

      while(b <= 3)
      {
          if ((amount - a - b) <= 6)
          {
              printf("n=%d %d %d %d", n, a, b, (8 - a - b));
              printf("\n");
              n = n + 1;
          }
          else
          {
              ;
          }
          b++;
  }
  a++;
  }
  getchar();
  return 0;
}


