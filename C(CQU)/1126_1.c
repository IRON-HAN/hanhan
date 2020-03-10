#include <stdio.h>
int main() {
  void inv(int x[], int n);
  int i, a[10] = 
  inv(a, 10);
  for (i=0; i<10; i++) {
    printf("%d ", a[i]);
    return 0;
  }
}
void inv(int x[], int n) {
  int temp, *i, *j;
  i=x;j=x+n-1;
  for (; i<j; i++,j--) {

    temp = *i;
    *i = *j;
    *j = temp;
  }
  return;
}
