#include <stdio.h>
#define M 5
void f(int *v);
int main(){
    int b[M][M] = {{13, 12}, {0}, {3, 5, 8}, {5, 6}};
    int i, j;
    f(b[1]);
    for (i=0; i<M; i++) {
    for (j=0; j<M; j++) {
        printf("%3d", b[i][j]);

        }
        printf("\n");
    }
    system("pause");
    return 0;
}
void f(int *v){
    int i;
    for (i=0; i<M*(M-1); i++) {
        *(v + i) += 3;
    }
}
