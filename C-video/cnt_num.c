#include <stdio.h>
#include <stdlib.h>
int main() {
    int x;
    int count[10] = {0};

    printf("input:\n");
    scanf("%d", &x);
    while (x!=-1) {
    if (x>0&& x<=9) {
    count[x]++;
    }
    scanf("%d",&x);
    }
    for (int i=0; i<10; i++) {
    printf("%d:%d\n",i,count[i]);
    }
    system("pause");
    return 0;

}
