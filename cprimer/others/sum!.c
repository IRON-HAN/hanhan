#include <stdio.h>
#include <string.h>
#include <math.h>
#define N 10
int main() {
    int i, j;
    float t, s = 0;
    for (i=1; i<=N; i++) {
        t = 1;
            for (j=1; j<=i; j++) {
            t*=j;
            }
        s+=t;
    }
    printf("\n s=%f",s);
    getchar();
    //system("pause");
    return 0;
}
