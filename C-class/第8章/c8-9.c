#include <stdio.h>
int  main()
{void inv(int *x,int n);                  // inv��������
 int i,arr[10],*p=arr;                    // ָ�����pָ��arr[0]
 printf("The original array:\n");
 for(i=0;i<10;i++,p++)
   scanf("%d",p);                         // ����arr�����Ԫ��
 printf("\n");
 p=arr;                                    // ָ�����p����ָ��arr[0]
 inv(p,10);                                // ����inv������ʵ��p��ָ�����
 printf("The array has been inverted:\n");
 for(p=arr;p<arr+10;p++)
   printf("%d ",*p);
 printf("\n");
 return 0;
}

void inv(int *x,int n)                      // ����inv�������β�x��ָ����� 
 {int temp,*i,*j;
  i=x;j=x+n-1;
  for(;i<=j;i++,j--)
    {temp=*i;*i=*j;*j=temp;}
  return;
 }
