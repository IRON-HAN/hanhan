
// 矩阵的加法
#include <stdio.h>
#define N 4
int main() {
  int a[N][N];
  int i, j, sum;
  sum = 0;
  for (i = 0; i < N; i++) {
        for (j=0; j<N; j++) {
          scanf("%d", &a[i][j]);
          //printf("%d\n",a[i][j]);
        }
    }

    for (i = 0; i < N; i++) {
      sum += a[i][i];
      for (j = 0; j < N; j++) {
        printf("%d ",a[i][j]);
    if (j==(N-1)) {
    printf("\n");
    }
    }
    }
    printf("%d\n",sum);
    //getchar();
    system("pause");
    return 0;
}
