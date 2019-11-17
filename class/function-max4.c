#include <stdio.h>
int main(){
    int max4(int a, int b, int c, int d);
    int a, b, c, d, max;
    printf("please enter 4 int nums:\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    max = max4(a, b, c, d);
    printf("max=%d\n", max);
    system("pause");
    return 0;
}
int max4(int a, int b, int c, int d) {
  printf("%d %d %d %d\n",a,b,c,d);
    int max2(int a, int b);
    int m;
    m = max2(max2(max2(a, b), c), d);
    return m;
}
int max2(int a, int b) {
  printf("%d %d\n",a,b);
    return (a>=b?a:b);
}
