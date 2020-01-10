#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
  void input(char *str1, char *str2, char *str3, int p,int len1,int len2){
      int i, j;
      for (i = 0; i <= len1; i++)
      {
          *(str3 + i) = *(str1 + p - 1);
          for (j = 0; j <= len2; j++)
          {
              *(str1 + p - 1 + j) = *(str2 + j);
          }
    }

  }

int main() {
  int t1, t2;

  char a[100], word[10], c[100];
  int pos;
  printf("input a sentence:\n");
  gets(a);
  printf("input a position & word");
  scanf("%d %s", &pos, c);
  t1 = strlen(a);
  t2 = strlen(word);
  input(a, word, c, pos,t1,t2);
  printf("%s%s", a, c);
  system("pause");
  return 0;
}
