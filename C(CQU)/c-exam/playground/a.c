#include <stdio.h>
void fun(int *p){
int a=10;
p = &a;
++*p;
printf("%d",a);
}
int main(){
int a=5;
fun(&a);
printf("%d\n", a);
return 0;
}
