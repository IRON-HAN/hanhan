#include <stdio.h>
int main(){
    int age;  //变量
    float assets;  //变量
    char pet[30];  //字符串

    printf("enter your age,assets,pet.\n");
    scanf("%d,%f", &age, &assets);  //变量用&
    scanf("%s", pet);               //数组不用&
    printf("%d $%.2f %s\n", age, assets, pet);
    system("pause");
    return 0;
}
