#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
double pi(double e){
    double i, k = 1, s = 0;
    for (i=1; k>=e; i++) {
        s += k;
        k *= i / (i * 2 + 1);
    }
    return s*2;
}
int main() {
    double e, pai;
    scanf("%lf", &e);
    pai = pi(e);
    printf("%.15f", pai);




    system("pause");
    return 0;
}
