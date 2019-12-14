//字符串的读入，存放，比较
#include<stdio.h>
#include<string.h>
int main ( )
{
  char str[3][20];                 // �����ά�ַ�����
  char string[20];                 // ����һά�ַ����飬��Ϊ�����ַ���ʱ����ʱ�ַ�����
  int i;
  for (i=0;i<3;i++)
      gets (str[i]);                 // ����3���ַ������ֱ��str[0],str[1],str[2]
  if (strcmp(str[0],str[1])>0)     // ��str[0]����str[1]
	  strcpy(string,str[0]);       // ��str[0]���ַ��������ַ�����string
  else                             // ��str[0]С�ڵ���str[1]
	  strcpy(string,str[1]);       // ��str[1]���ַ��������ַ�����string
  if (strcmp(str[2],string)>0)     // ��str[2]����string
      strcpy(string,str[2]);       // ��str[2]���ַ��������ַ�����string
  printf("\nthe largest string is:\n%s\n",string);  // ���string
  return 0;
}
