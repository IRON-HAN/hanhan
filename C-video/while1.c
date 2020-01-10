//判断回文数
#include <stdio.h>
int main() {
  int num;
  int m;
  int sum = 0;
  printf("input a number:\n");
  scanf("%d", &num);
  m = num;

  while (m) {
    sum = sum * 10 + m % 10;
    m /= 10;
    }
    if (sum ==num )
      printf("yes\n");
    else
      printf("no\n");
    system("pause");
    return 0;
}
/*
1—— m=1234 成立
sum=0*10+1234%10=4
m=m/10=123
2-- m=123 成立
sum=4*10+123%10=43
m=123/10=12
3--m=12 成立
sum=43*10+12%10=432
m=12/10=1
4--
*/
