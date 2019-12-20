#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
int main() {
    void *p;
    int cnt = 0;
    while ((p=malloc(100*1024*1024))) {
        cnt++;
    }
    printf("%d00MB\n", cnt);
    free(p);

    system("pause");
    return 0;
}
