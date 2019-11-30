//指针方法从大到小排序
#include <stdio.h>
int main() {
  void sort(int *x, int n);
  int i, *p, a[10];
  p = a;
  printf("input:\n");
  for (i=0; i<10; i++) {
  scanf("%d",p++);
  }
  p = a;//重新指向a[0]
  sort(p, 10);
  for (p=a,i=0;i<10;i++) {
    printf("%d ", *p);
    p++;
  }
  return 0;
}
void sort(int *x, int n) {
  int i, j, k, t;
  for (i=0; i<n-1; i++) {
    k = i;
    for (j = i + 1; j < n; j++)
      if (*(x + j) > *(x + k))
        k = j;
    if (k!=i) {
      t = *(x + i);
      *(x + i) = *(x + k);
      *(x + k) = t;
    }
  }
}
