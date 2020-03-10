
#include <stdio.h>
struct T{
    int x;
    int *y;
};
int main(){
    struct T *p;
    int dt[] = {10, 20};
    struct T d[] = {{50, &dt[0]}, {60, &dt[1]}};
    p = d;
    printf("%d\n", ++p->x);
    printf("%d\n", (++p)->x);
    printf("%d\n", ++(*p->y));
}
