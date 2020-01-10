#include <stdio.h>
int main()
{
   int c,s;
   float p,w,d,f;
   printf("please enter price,weight,discount:");      // ��ʾ���������
   scanf("%f,%f,%d",&p,&w,&s);                         // ���뵥�ۡ�����������
   if(s>=3000)
	   c=12;                                           // 3000km����Ϊͬһ�ۿ�
   else
	   c=s/250;                                        // 3000km���¸����ۿ۲�ͬ��c��ֵ����ͬ
   switch(c)
   {
     case 0:   d=0; break;                             // c=0,����250km����,�ۿ�d=0
     case 1:   d=2; break;                             // c=1,����250��500km����,�ۿ�d=2%
     case 2:
     case 3:   d=5; break;                             // c=2��3,����500��1000km����,�ۿ�d=5%
     case 4:
     case 5:
     case 6:
     case 7:   d=8; break;                             // c=4-7,����1000��2000km����,�ۿ�d=8%
     case 8:  
     case 9:
     case 10:
     case 11:  d=10; break;                            // c=8-11,����2000KM��3000km����,�ۿ�d=10%
     case 12:  d=15; break;                            // c12,����3000km����,�ۿ�d=15%
   }
   f = p * w * s * (1 - d / 100);                      // �������˷�
   printf("freight=%10.2f\n",f);                       // ������˷ѣ�ȡ��λС��
   return 0;
}
