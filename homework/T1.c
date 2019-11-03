#include<stdio.h>
int main(){
  int num;
  //char a;
	printf("*******************************\n");
	printf("请输入购买商品的番号：(从1-3选择)\n");
	printf("1.巧克力\n");
	printf("2.蛋糕\n");
	printf("3.可口可乐\n");
        scanf("%d", &num);
        //a=num+96;
	switch(num){
		case 1:
			printf("你选择巧克力\n");
			break;
		case 2:
			printf("你选择蛋糕\n");
			break;
		case 3:
			printf("你选择可口可乐\n");
			break;
		default:
            printf("error\n");
                }
system("pause");
return 0;
}


