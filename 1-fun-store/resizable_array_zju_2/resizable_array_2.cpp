#include "array.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
    array a = array_create(100);
    printf("%d\n", array_size(&a));
    *array_at(&a, 0) = 10;
    printf("%d\n", *array_at(&a, 0));

    int num = 0;
    int cnt = 0;

    printf("input:(input -1 to quit.)\n");

    while (num != -1) {
        scanf("%d", &num);
        if (num != -1) {
            *array_at(&a, cnt++) = num;
        }
    }

    array_free(&a);
    system("pause");
    return 0;
}

