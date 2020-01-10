#include <stdio.h>
int main()
{
int a=123,b;
while(scanf( "%d%d ",&a,&b)!=2)
fflush(stdin);
printf("%d\n%d\n ", a, b);
system("pause");
return 0;
}


