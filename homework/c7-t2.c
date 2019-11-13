#include <stdio.h>
int main() {
    int M, N;
    printf("please input the length[M] and width[N]:\n");
    scanf("%d %d", &M, &N);
    printf("now the matrix has %d rows and %d columns:\n",M,N);
    //规定行数和列数
    int i, j;
    int a[M][N];
    int b[M][N], c[M][N];\
    printf("please input the first matrix:\n");
    for (i = 0; i < M; i++) {
        for (j=0; j<N; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("please input the second matrix:\n");
    for (i = 0; i < M; i++) {
        for (j=0; j<N; j++) {
            scanf("%d", &b[i][j]);
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    //输入两个矩阵，并计算
    for (i=0; i<M; i++) {
        for (j=0; j<N; j++) {
            printf("%d ", c[i][j]);
            if (j==N-1) {
            printf("\n");
            }
        }
    }
    //输出结果
    system("pause");
    return 0;
}
