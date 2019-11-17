#include <stdio.h>
int main() {
  int fac(int n);
  int n, y;
  printf("input a nun:\n");
  scanf("%d", &n);
  y = fac(n);
  printf("%d!=%d\n", n, y);
  system("pause");
  return 0;
}
int fac(int n) {
  printf("%d\n", n);
  int f;
  if (n<0) {
  printf("n<0,error!\n");
  }
  else if (n==0 ||n==1) {
  f=1;
  }
  else {
    f = fac(n - 1) * n;
  }
  return (f);
}
