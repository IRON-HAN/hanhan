//冒泡排序

#include <stdio.h>
int main(){
    int a[10];
    int i, j, t;
    printf("input 10 nums:\n");
    for (i=0; i<10; i++) {
        scanf("%d", &a[i]);
    }
    printf("\n");
    for (j=0; j<9; j++){
        //printf("j=%d\n", j);
        for (i=0; i<9-j; i++){
            //printf("i=%d,a[i]=%d \n", i, a[i]);
            if (a[i] > a[i + 1])
            {
                t = a[i];
                a[i] = a[i + 1];
                a[i + 1] = t;
    }
    }
    }
    printf("sorted nums are:\n");
    for (i=0; i<10; i++) {
        printf("%d ", a[i]);
    }
    system("pause");
    return 0;
}
