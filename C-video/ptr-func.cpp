// 2020-1-20
#include <algorithm>
#include <cstdio>
#include <cstdlib>
void f(int i){
    printf("in f,%d\n", i);
}
void g(int i){
    printf("in g,%d\n", i);
}
void h(int i){
    printf("in h,%d\n", i);
}
int main(){
    int i = 0;

    void (*fa[])(int) = {f, g, h};

    scanf("%d", &i);
    if (i>=0 && i<sizeof(fa)/sizeof(fa[0])) {
        (*fa[i])(0);
    }

    system("pause");
    return 0;
}


