#include "stdio.h"
int main()
{
    char string[50];
/*scanf("%s",string);不能接收空格符*/
scanf("%[^\n]",string);
printf("%s\n", string);
system("pause");
return 0;
}
