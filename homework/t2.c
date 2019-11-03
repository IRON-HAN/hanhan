#include <stdio.h>
int main() {
  float price, a, b, c,vol;
  int type2;
  char type1;
  a = 5.75;
  b = 6.00;
  c = 7.15;
  price=1.00;
  printf("*******************************\n");
  printf("A a gas\n");
  printf("B b gas\n");
  printf("C c gas\n");
  printf("please choose the type1:\n");
  scanf("%c", &type1);
  switch (type1) {
    case'a':
    case 'A':
      price = price * a;
      break;
    case'b':
    case 'B':
      price = price * b;
      break;
    case'c':
    case 'C':
      price = price * c;
      break;
    default:
      printf("error\n");
      system("pause");
      return 0;
    }
    printf("*******************************\n");
    printf("1 yourself\n");
    printf("2 assistance\n");
    printf("please choose the type2:\n");
    scanf("%d", &type2);
    if (type2==1) {
    price=price*0.95;
    }
    else if (type2==2) {
    price=price*0.90;
    }
    else {
    printf("error\n");
    system("pause");
    return 0;
    }
    printf("please input the vol:\n");
    scanf("%f", &vol);
    price = price * vol;
    printf("you'll pay%6.2f\n",price);
  system("pause");
  return 0;

}
