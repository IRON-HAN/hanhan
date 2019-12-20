#include <stdio.h>
int main() {
    void transto2(int n);
    int num;
    printf("?num:");
    scanf("%d", &num);
    transto2(num);
    printf("\n");
    system("pause");
    return 0;
}
void transto2(int n) {
  if (n!=0) {
    transto2(n / 2);
    printf("%d",n%2);
  }
}

