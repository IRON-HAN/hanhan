#include <stdio.h>

struct STUDENT {
    int age;
    double score;
    char sex;
};
int main(){
    struct STUDENT st1 = {80, 66.6, 'F'};
    struct STUDENT *pst = &st1;
    pst->age = 88;
    printf("%d,%f\n", pst->age, pst->score);
    return 0;
}
