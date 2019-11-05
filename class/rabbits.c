#include <stdio.h>
int main() {
  int f1, f2;
  f1 = 1, f2 = 1;
  int i;

  for (i = 1; i <= 20; i++) {
    printf("%10d %10d",f1,f2);
    if (i % 2 == 0)
      printf("\n");
    f1 = f1 + f2;//计算下一个月的兔子数，存放在f1中
    f2 = f2 + f1;//计算下面第二个月的兔子数，存放在f2中
    //!错误位置 无法输出第一行 printf("%10d %10d",f1,f2);
  }
system("pause");
return 0;
}

