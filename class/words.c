#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
  char str[81], c;
  int i, num = 0, word = 0;
  gets(str);
  for (i=0; (c=str[i])!='\0';i++) {
  if (c==' ') {
  word=0;
  }
  else if (word==0) {
    word = 1;
    num++;
  }
  }
  printf("%d words\n",num);

    //getchar();
    system("pause");
    return 0;
}
