// 跳过输入的前两个整数
#include <stdio.h>
int main() {
  int n;
  printf("please enter three integers:\n");
  scanf("%*d %*d %d", &n);
  printf("the last integer is %d\n", n);
  system("pause");
  return 0;
}
