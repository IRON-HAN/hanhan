// 给定一个数组（按从小到大排放）
// 插入一个数字使该数组仍从小到大排列
#include <stdio.h>
int main(){
    int a[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int temp1, temp2, num, end, i, j;

    printf("the origin array:\n");
    for (i=0; i<10; i++) {
        printf("%5d", a[i]);
    }
    printf("\n");

    printf("insert data:\n");
    scanf("%d", &num);

    end = a[9];
    if (num>end) {
        a[10] = num;
    }
    else {
        for (i=0; i<10; i++) {
            if (a[i]>num) {
                temp1 = a[i];
                a[i] = num;
            }
            for (j=i+1; j<11; j++) {
                temp2 = a[j];
                a[j] = temp1;
                temp1 = temp2;
            }
            break;
        }
    }

    printf("now the array is:\n");
    for (i=0; i<11; i++) {
        printf("%5d", a[i]);
    }
    printf("\n");
    return 0;
}
