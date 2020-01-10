#include <stdio.h>
int main() {
    int num, sum = 0;
    int status;

    printf("please enter an int");
    printf("q to quit):");
    status = scanf("%d", &num);
    while (status==1) {
        sum = sum + num;
        printf("please enter another int");
        printf("q to quit):");
        status = scanf("%d", &num);
    }
    printf("sum=%d",sum);


    system("pause");
    return 0;
}
