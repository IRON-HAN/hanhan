#include <stdio.h>
int a, b, c, d;
int main(){
    void p (int a, int b);
    a = b = c = d;
    printf("%d %d %d %d\n", a, b, c, d);
    p(a, b);
    printf("%d %d %d %d\n", a, b, c, d);
    getchar();
    return 0;
}
void p(int a,int b){
    static int c;
    a++, b++;
    c = -10, d += 5;
    if(a<3)
        p(a, b);
    printf("%d %d %d %d \n", a, b, c, d);

}
