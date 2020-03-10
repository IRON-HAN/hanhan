#include <stdio.h>
int main() {
  int GED(int m, int n);
  int num1, num2;
  printf("input 2 int nums:\n");
  scanf("%d %d", &num1, &num2);
  if (num1<num2) {
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("%d %d\n:%d\n", num1, num2, GED(num1, num2));
    system("pause");
    return 0;
  }
}
int GED(int m, int n) {
  int r;
  if ((r=m%n)==0) {
    return n;
  }
  else {
  return GED(n, r);
  }
}
