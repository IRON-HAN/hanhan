#include <stdio.h>
int main(){
    char c;
    void judge(char a);
    printf("input a char:\n");
    scanf("%c", &c);
    judge(c);
    system("pause");
    return 0;

  }
 void judge(char a) {

  if (a >= 65 && a <= 90) {
    printf("big\n");
  } else if (a >= 97 && a  <= 122) {
    printf("small\n");
    }
 }
