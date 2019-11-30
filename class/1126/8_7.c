//通过指针输出数组a的10个元素
#include <stdio.h>
int main() {
  int *p, i, a[10];
  p = a; //初始化
  printf("input:\n");
  for (i=0; i<10; i++) {
  scanf("%d",p++);
  }
  for (i=0; i<10; i++,p++) {
  printf("%d",*p);
  }
  return 0;
}
