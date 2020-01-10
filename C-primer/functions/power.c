#include <stdio.h>
double power(double n, int p);
int main() {
    double x, xpow;
    int exp;

    printf("enter a dishu & zhishu\n");
    printf("enter q to quit\n");
    while (scanf("%lf%d",&x,&exp)==2) {
        xpow=power(x, exp);

        printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
        printf("enter next pair of numbers or q to quit\n");
    }
    printf("hope you enjoy\n");
    system("pause");
    return 0;
}
double power(double n, int p) {
    double pow = 1;
    int i;
    for (i=1; i<=p; i++) {
    pow*=n;
    }
    return pow;
}
