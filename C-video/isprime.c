//求2-val的素数
#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
    int val,i,j;
    scanf("%d", &val);
    for (i=2; i<=val; i++) {
    for (j=2; j<i; j++) {
    if (0==i%j)
    break;

    }
    if (j==i) {
        printf("%d\n", i);
    }
    }

    //getchar();
    system("pause");
    return 0;
}
