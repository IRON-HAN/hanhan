//使用不同类别的字符串
#include <stdio.h>
#define praise "what a super marvelous name!"
int main() {
  char name[40];
  printf("what's your name?\n");
  scanf("%s", name);
  printf("hello,%s.%s\n", name, praise);
  system("pause");
  return 0;
}
/*请注意（这是很重要的），scanf（）只读取了Hilary Bubbles的名字Hilary。
scanf（）开始读取输入以后，会在遇到的第一个空白字符空格（blank）、制表符（tab）或者换行符（newline）处停止读取。
因此，它在遇到Hilary和Bubbles之间的空格时，就停止了扫描。
一般情况下，使用%s的scanf（）只会把一个单词而不是把整个语句作为字符串读入。
C使用其他读取输入函数（例如gets（））来处理一般的字符串。*/
