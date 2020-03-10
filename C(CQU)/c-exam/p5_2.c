#include <stdio.h>
#define MIN(x,y) (x)<(y)?(x):(y)
int main(){
    int a = 1, b = 2, c = 3, d = 4;
    int t;
    t=MIN(a+b, c+d)*1000;
    printf("t=%d\n", t);
    getchar();
    return 0;
}
//(a+b)<(c+d)?(a+b):(c+d)
