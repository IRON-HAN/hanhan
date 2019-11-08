#include <stdio.h>
int main() {
  int a,b,c,max;
  printf("input a,b,c\n");
  scanf("%d,%d,%d", &a, &b, &c);
  max = a > b ? (a > c ? a : c) : (b > c ? b : c);//a与b PK，胜者与c pk。
  printf("%d", max);
  system("pause");
  return 0;

}
