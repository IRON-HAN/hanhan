//结构体传参
#include <stdio.h>
struct T{
    int x;
    char c;
};
void f(struct T *p);
int main(){
    struct T a = {110, 'z'};
    f(&a);
    printf("%d,%c\n", a.x, a.c);

}
void f(struct T *p){
    p->c = 'y';
    p->x = 20;
}
