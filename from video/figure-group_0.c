/*
错误写法1：
int a【5】；
a【5】={1，2.3，4，5}
定义数组的时候才能赋值
此处赋值为下标

错误2：
int a[5]={1，2，3，4，5}
a【5】=100
没有a【5】这个元素
*/

// 复制 a to b
// 输出
#include <stdio.h>
int main() {
  int a[5] = {1, 2, 3, 4, 5};
  int b[5] = {1, 2, 3, 4, 5};
  int i;
  for (i=0; i<5; i++) {
    b[i] = a[i];
    printf("%d,%d\n",a[i],b[i]);
  }
  system("pause");
  return 0;
}
