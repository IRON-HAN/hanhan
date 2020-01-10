#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define N 10

int main(){
    int isprime(int x, int k_primes[], int num_k_primes);

    int prime[N] = {2};
    int cnt = 1;
    int i = 3;
    /*{
        int i;
        printf("\t\t\t\t");
        for (i=0; i<N; i++) {
            printf("%d\t", i);
        }
        printf("\n");
    }*/

    while (cnt<N) {
    if(isprime(i, prime, cnt))
        prime[cnt++] = i;
        {
            printf("i=%d \tcnt=%d\t", i, cnt);
            int i;
            for (i=0; i<N; i++) {
                printf("%d\t", prime[i]);
            }
            printf("\n");
        }
    i++;
    }
    for (i=0; i<N; i++) {
        printf("%d", prime[i]);
        if((i+1)%5)
            printf("\t");
        else
            printf("\n");
    }
    system("pause");
    return 0;
}
int isprime(int x, int k_primes[], int num_k_primes){
    int ret = 1;
    int i;
    for (i=0; i<num_k_primes; i++) {
        if (x%k_primes[i]==0) {
        ret = 0;
        break;
        }
    }
    return ret;
}
