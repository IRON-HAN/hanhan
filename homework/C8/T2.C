#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
int main() {
    int row = 0;
    int col = 0;
    int i;
    int **arr = NULL;
    printf("r&c:\n");
    scanf("%d %d", &row, &col);
    arr = (int **)malloc(sizeof(int *) * row);
    for (i=0; i<row; i++) {
        arr[i] = (int *)malloc(sizeof(int) * col);
    }

    //getchar();
    //system("pause");
    return 0;
}
void at(int *a, int n){
    int i, j, t;
    for (i=0; i<n; i++) {
    for (j=i+1; j<n; j++) {
        t = a[i * n + j];
        a[i * n + j] = a[j * n + i];
        a[j * n + i] = t;
    }
    }
}
