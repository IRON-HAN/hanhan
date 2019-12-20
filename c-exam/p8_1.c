//结构体直接传参不会改变
#include <stdio.h>
struct T{
    int x;
    char c;
};
int main(){
    void f(struct T b);
    struct T a = {110, 'z'};
    f(a);
    printf("%d,%c\n", a.x, a.c);

    return 0;
}
void f(struct T b){
    b.x = 20;
    b.c = 'y';
}
//结果 20 Y
