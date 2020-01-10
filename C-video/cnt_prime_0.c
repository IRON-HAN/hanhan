#include <stdio.h>
#include <stdlib.h>

#define MAX 25

int main(){
    int isprime[MAX];
    int i, x;
    for (i=0; i<MAX; i++) {
        isprime[i] = 1;
    }
    for (x=2; x<MAX; x++) {
        if (isprime[x]) {
            for (i=2; i*x<MAX; i++) {
            isprime[i * x] = 0;
            }
        }
    }
    for (i=2; i<MAX; i++) {
        if (isprime[i]) {
            printf("%d\t", i);
        }
    }
    printf("\n");
    system("pause");
    return 0;
}
