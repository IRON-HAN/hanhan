#include <stdio.h>
int main() {
  int i;
  int a[10];
  for (i = 0; i <= 9; i++)
  {
    a[i] = i;
    }
        for (i = 9; i >= 0; i--)
    {
      printf("%d", a[i]);

    }
  /*int i;
  int f[20] = {1, 1};
  for (i=2; i<20; i++) {
    f[i] = f[i - 2] + f[i - 1];
    }
    for (i=0; i<20; i++) {
    if (i%5==0&&i!=0) {
      printf("\n");
    }

    printf("%12d", f[i]);}*/


  printf("\n");
  system("pause");
  return 0;
}
