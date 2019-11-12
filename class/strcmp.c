#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
  char str[3][20];
  char string[20];
  int i;
    strcpy(string, str[0]);
  for (i=1; i<3; i++) {
  gets(str[i]);
  }
    for (i=0; i<3; i++) {
        if (strcmp(string, str[i])>0) {
        strcpy(string, str[i]);
        }
    }
/*
  if (strcmp(str[0], str[1])>0) {
  strcpy(string, str[0]);
  }
  else {
    strcpy(string, str[1]);
  }
  if (strcmp(str[2], string)>0) {
    strcpy(string, str[2]);
    printf("\n the largest is \n%s\n",string);
  }
*/
    //getchar();
    system("pause");
    return 0;
}
