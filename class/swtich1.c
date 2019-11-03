#include<stdio.h>
int main(){
    int grade;
    scanf("%d", &grade);
    printf("your score:");
    switch(grade){
        case'1':
            printf("85-100\n");
            break;
        default:
            printf("error\n");
    }
    system("pause");
    return 0;
}
