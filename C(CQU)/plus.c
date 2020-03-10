#include<stdio.h>
int main()
{
    float s,a,b;
    char ch;
    printf("输入算式，仅限于算数运算符\n");
    scanf("%f%c%f",&a,&ch,&b);
    if(ch=='+'||ch=='-'||ch=='*'||ch=='/')
    {
        switch(ch)
        {
            case'+':s=a+b;printf("%f%c%f=%f\n",a,ch,b,s);break;
            case'-':s=a-b;printf("%f%c%f=%f\n",a,ch,b,s);break;
            case'*':s=a*b;printf("%f%c%f=%f\n",a,ch,b,s);break;
            case'/':s=a/b;printf("%f%c%f=%f\n",a,ch,b,s);break;
            default:printf(" data error!\n");
            }
        system("pause");
        return 0;
    }
    else
    printf("输入有误\n");
    system("pause");
	return 0;
}
