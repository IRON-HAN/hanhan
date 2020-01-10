void append_str(char *from,char *to){
    for (; *to; to++)
        ;
    for (; *from; ) {
        *to++ = *from++;
    }
    *to = 0;
}
#include <stdio.h>
int main(){
    char *a = "i have a pen";
    char *b = "i have an apple";
    append_str(a, b);

    return 0;
}
