#include <stdio.h>
#include <string.h> //提供strlen()函数的原型
#define praise "what a super marvelous name!"
int main() {
  char name[40];
  printf("what's your name?\n");
  scanf("%s", name);
  printf("hello,%s.%s\n", name, praise);
  printf("your name of %d letters occupies %d memory cells.\n",
         strlen(name),sizeof name);
  /*让一个printf（）语句占用两行
（您可以在参数之间断开一行，但不要在一个字符串的中间，例如在一对引号之间断开一行）。*/
  printf("the phrase of praise has %d letters", strlen(praise));
  printf("and occupies %d memory cells.\n", sizeof praise);
  system("pause");
  return 0;
}
