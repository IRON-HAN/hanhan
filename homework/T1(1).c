#include<stdio.h>
int main(){
  int num;
	printf("*******************************\n");
	printf("请输入购买商品的番号：(从1-3选择)\n");
	printf("1.巧克力\n");
	printf("2.蛋糕\n");
	printf("3.可口可乐\n");
        scanf("%d", &num);
	if(num==1){
			printf("你选择巧克力\n");
    }
	else if(num==2){
			printf("你选择蛋糕\n");
    }
	else if(num==3){
			printf("你选择可口可乐\n");
    }
	else {
    printf("error\n");
    }
                
system("pause");
return 0;
}
