#include<stdio.h>
int main(){
    float a, b,res;
    res = 0;
    char c;
    scanf("%f%c%f", &a, &c,&b);
    if(c=='+'){
        res=a+b;
    }
    else if(c=='-'){
        res=a-b;
    }

    else if(c=='*'){
        res = a * b;
    }

    else if(c=='/'){
        if(b==0){
            printf("not correct\n");
            system("pause");
            return 0;
        }
        else{
        res=a/b;
    }
    }
    else     {
        printf("not correct");
    }
    printf("%f%c%f=%f\n", a, c, b, res);
    system("pause");
    return 0;

}
