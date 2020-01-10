#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
    const int FREEZING = 0;
    float temp;
    int cold = 0;
    int all = 0;

    printf("enter the daily temps\n");
    printf("enter q to quit\n");
    while (scanf("%f",&temp)==1) {
        all++;
        if (temp<FREEZING) {
            cold++;
        }
    }
    if (all!=0) {
        printf("%d days total:%.1f were below.\n",
               all, 100 * (float)cold / all);
    if(all==0)
        printf("no data!\n");

    }

    //getchar();
    system("pause");
    return 0;
}
