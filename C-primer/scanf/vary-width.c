// 使用可变宽度的输出字段
#include <stdio.h>
int main() {
  unsigned width, precision;
  int num = 256;
  double weight = 242.5;

  printf("what field width?\n");
  scanf("%d", &width);
  printf("the number is: %*d:\n", width, num);
  printf("enter a width and a precision:\n");
  scanf("%d %d", &width,&precision);
  printf("weight= %*.*f\n", width, precision, weight);
  system("pause");
  return 0;
}
