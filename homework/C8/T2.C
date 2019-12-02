#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
int main() {
    void AT(int **a, int n);
    int row = 0;
    int col = 0;
    int i;
    int **arr = NULL;
    printf("r&c:\n");
    scanf("%d %d", &row, &col);
    arr = (int **)malloc(sizeof(int *) * row);
    for (i=0; i<row; i++) {
        arr[i] = (int *)malloc(sizeof(int) * col);
    }//arr[r][c]
    printf("please input:\n");
    for (int r=0; r<row; r++) {
        for (int c=0; c<col; c++) {
            scanf("%d", &arr[r][c]);
    }
    }
    for (int r=0; r<row; r++) {
        for (int c=0; c<col; c++) {
            printf("%-5d", arr[r][c]);
    }
    printf("\n");
    }
    AT(arr, row);
    system("pause");
    return 0;
}

void AT(int **a, int n){
    int i, j, t;
    for (i=0; i<n; i++) {
        for (j=i+1; j<n; j++) {
            t = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = t;
    }
    }
}

