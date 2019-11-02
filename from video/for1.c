# include<stdio.h>
int main(){
    int i, j;
    for (i=0;i<3; i++) {
        printf("A\n");
        for (j=2;j<5;j++) {
            printf("B\n");
        }
        printf("C\n");
    }
    system("pause");
    return 0;
}
/*
A
B
B
B
C
A
B
B
B
C
A
B
B
B
C
*/
