#include <stdio.h>
int main()
{
    char s1[80],s2[40];
    int i=0,j=0;
    printf("\nInput the first string:");
    gets(s1);
    printf("\nInput the second string:");
    gets(s2);

while (s1[i] !='\0')
       continue;//

while (s2[j] !='\0')
       s1[i++]=s2[j];   		/* 拼接字符到s1  */

s1[i] ='\0';
    printf("\nNew string: %s",s1);
}
